#!/bin/sh
networksetup -getmacaddress Ethernet | cut -d " " -f 3
networksetup -getmacaddress Wi-Fi | cut -d " " -f 3