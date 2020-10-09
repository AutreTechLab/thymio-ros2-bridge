#!/usr/bin/python
##################################################
## Example using Thymio and Python to test the setup
##################################################
## Author: Autre Techlab
## Email: autretechlab@gmail.com
##################################################

import dbus
import dbus.mainloop.glib
from gi.repository import GObject as gobject
from gi.repository import GLib as glib
# import pygame
import sys
import os

class ThymioController(object):
    def __init__(self, filename):
        # init the main loop and sends the ASEBA code to the Thymio bot for the on-robot computations
        dbus.mainloop.glib.DBusGMainLoop(set_as_default=True)

        # get stub of the Aseba network
        bus = dbus.SessionBus()
        asebaNetworkObject = bus.get_object('ch.epfl.mobots.Aseba', '/')
        self.asebaNetwork = dbus.Interface(asebaNetworkObject,
                                           dbus_interface='ch.epfl.mobots.AsebaNetwork')

        # load the file
        self.asebaNetwork.LoadScripts(sys.argv[1],
                                      reply_handler=self.dbusReply,
                                      error_handler=self.dbusError
                                      )

        # schedules first interaction with the Robot
        glib.timeout_add(20, self.callThymio)

    def run(self):
        # run event loop
        self.loop = gobject.MainLoop()
        self.loop.run()

    def dbusReply(self):
        # correct replay on D-Bus, ignore
        pass

    def dbusError(self, e):
        # there was an error on D-Bus, stop loop
        print('dbus error: %s' % str(e))
        self.loop.quit()

    def callThymio(self):
        # if no loop is running, skip function
        print("calling Thymio")
        if not self.loop.is_running():
            return


        distanceCM = int(input("Distance in CM: "))
        thymioSpeed = int(input("Speed: "))

        print("executing DriveCM with parameter CM= " + str(distanceCM) + " and speed= " + str(thymioSpeed))

        self.asebaNetwork.SendEventName('DriveCM',
                                        [distanceCM, thymioSpeed],
                                        reply_handler=self.dbusReply,
                                        error_handler=self.dbusError
                                        )
        if input("Play again? y/n") == "n":
            self.loop.quit()

        # reschedule scan of joystick
        glib.timeout_add(20, self.callThymio)


def testAeslExtEvent(aselFilename, aeslEvent,aeslExternalevents):
    print ("Testing event " + aeslExternalevents[aeslEvent])
    aeslFile = open(aselFilename, "r")

    displayFlag = 0
    if aeslFile.mode == 'r':
        aeslContents = aeslFile.readlines()
        for aeslCodeLine in aeslContents:
            aeslCodeLine.replace("\n", "")
            if aeslCodeLine.count("onevent") > 0:
                displayFlag = 0
            if aeslCodeLine.count(aeslExternalevents[aeslEvent]) > 0:
                displayFlag = 1
            if aeslCodeLine.count("event.args") > 0:
                if displayFlag == 1:
                    aeslCodeLine = aeslCodeLine.split()
                    aeslCodeLine = " ".join(aeslCodeLine)
                    print("\t" + aeslCodeLine)
                    aeslCodeLine = aeslCodeLine.split()

    menu(aselFilename) # Back to main menu

def menu(aselFilename):
    print('Loading file file %s \n' % aselFilename)
    aeslFile = open(aselFilename, "r")
    displayFlag = 0
    if aeslFile.mode == 'r':
        aeslContents = aeslFile.readlines()
        aeslExternalevents = [""]
        for aeslCodeLine in aeslContents:
            aeslCodeLine.replace("\n", "")
            if aeslCodeLine.startswith("<event size"):
                aeslCodeLine = aeslCodeLine.replace("<event size=\"", "")
                aeslCodeLine = aeslCodeLine.replace("\" name=\"", " ")
                aeslCodeLine = aeslCodeLine.replace("\"/>", "")
                aeslCodeLine = aeslCodeLine.split()
                aeslExternalevents.append(aeslCodeLine[1])
                print(aeslCodeLine)

        del aeslExternalevents[0]
        print("\n" + "Main menu\t============================================================== \n")
        menuItems = ["Exit"] + ["Check Thymio Connection"] + aeslExternalevents
        mi = 0
        for menuItem in menuItems:
            print (str(mi) + " " + menuItem)
            mi = mi + 1

    aeslFile.close()
    seletedMenuItem = input("Please choose: ")
    if int(seletedMenuItem) == 0:
        exit(0)
    elif int(seletedMenuItem) == 1:
        exit(0)
    elif 1 < int(seletedMenuItem) < len(menuItems):
        print("\n" +"Menu item "+ seletedMenuItem + "\t============================================================== \n")
        testAeslExtEvent(aselFilename, int(seletedMenuItem)-2,aeslExternalevents)
    else :
        print ("Invalit entry, please choose again!")
        menu(aselFilename)


def main():
    # check command-line arguments
    if len(sys.argv) != 2:
        print('Usage %s FILE' % sys.argv[0])
        return
    aselFilename = sys.argv[1]
    print("\n")
    menu(aselFilename)

    # create and run controller
    thymioController = ThymioController(sys.argv[1])
    thymioController.run()


if __name__ == '__main__':
    main()