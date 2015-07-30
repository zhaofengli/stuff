#!/bin/sh
fbcp &
omxplayer $@
killall fbcp
