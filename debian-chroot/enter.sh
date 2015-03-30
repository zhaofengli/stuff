# Public domain
if [ ! -d /debian ]
then
	sh /sdcard/Debian/debian.sh
fi
clear
busybox chroot /debian /bin/login -f root

