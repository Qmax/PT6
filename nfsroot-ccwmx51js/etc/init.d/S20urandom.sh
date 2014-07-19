#!/bin/sh
#===============================================================================
#
#  S20urandom.sh
#
#  Copyright (C) 2008 by Digi International Inc.
#  All rights reserved.
#
#  This program is free software; you can redistribute it and/or modify it
#  under the terms of the GNU General Public License version 2 as published by
#  the Free Software Foundation.
#
#
#  !Revision:    $Revision: 1.4 $:
#  !Description: Feed random device
#
#===============================================================================

[ -c /dev/urandom ] || exit 0

# Read-write file to save random-seed.
# Configure it to a writable file (absolute path).
WR_RANDOM_SEED=""

case "$1" in
start|"")
	[ -z "${quietboot}" ] && echo -n "Initializing random number generator... "

	# Load host-random-seed
	if [ -f /etc/host-random-seed ]; then
		cat /etc/host-random-seed >/dev/urandom
	fi

	# Use hardware addresses and date to feed urandom.
	ifconfig >/dev/urandom
	date >/dev/urandom

	# If we have a writable file, save the seed.
	if [ -f "${WR_RANDOM_SEED}" ]; then
		cat "${WR_RANDOM_SEED}" >/dev/urandom
		rm -f "${WR_RANDOM_SEED}"
		umask 077
		dd if=/dev/urandom of="${WR_RANDOM_SEED}" count=1 bs=512 >/dev/null 2>&1
		umask 022
	fi
	[ -z "${quietboot}" ] && echo "done"
	;;
stop)
	# If we have a writable file, save the seed.
	if [ -f "${WR_RANDOM_SEED}" ]; then
		echo -n "Saving random seed... "
		rm -f "${WR_RANDOM_SEED}"
		umask 077
		dd if=/dev/urandom of="${WR_RANDOM_SEED}" count=1 bs=512 >/dev/null 2>&1
		umask 022
		echo "done"
	fi
	;;
*)
	echo "Usage: urandom {start|stop}" >&2
	exit 1
	;;
esac
