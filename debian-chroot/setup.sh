#!/system/bin/sh

# Public domain

# Set the location here
IMAGE="/sdcard/Debian/system.ext4"
MOUNTPOINT="/debian"

# Begin
echo "Starting debian chroot..."

# Sanity check
echo -n "Checking if system image $IMAGE exists... "
if [ -f $IMAGE ]
then
	echo "yup"
else
	echo "nope"
	echo "Quitting!"
	exit
fi

# Check mountpoint existence
echo -n "Checking if $MOUNTPOINT exists... "
if [ -d $MOUNTPOINT ]
then
	echo "yup"
	echo -n "Unmounting $MOUNTPOINT... "
	busybox umount $MOUNTPOINT
	echo "done"
else
	echo "nope"
	echo -n "Remounting / rw... "
	busybox mount -o remount,rw /
	echo "done"
	echo -n "Creating $MOUNTPOINT... "
	busybox mkdir /debian
	echo "done"
	echo -n "Remounting / ro... "
	busybox mount -o remount,ro /
	echo "done"
fi

# Mount 'em up
echo -n "Mounting system image... "
busybox mount -o rw,noatime $IMAGE $MOUNTPOINT
echo "done"

echo -n "Mounting all other stuff... "
busybox mount /dev $MOUNTPOINT/dev
busybox mount /dev/pts $MOUNTPOINT/dev/pts
busybox mount /proc $MOUNTPOINT/proc
busybox mount /sys $MOUNTPOINT/sys
busybox mount /sdcard $MOUNTPOINT/sdcard
busybox mount /system $MOUNTPOINT/system
busybox mount /data $MOUNTPOINT/data
echo "done"

# All done
echo "All done!"
