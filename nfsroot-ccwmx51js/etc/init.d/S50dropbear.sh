#!/bin/sh
#===============================================================================
#
#  S50dropbear.sh
#
#  Copyright (C) 2008 by Digi International Inc.
#  All rights reserved.
#
#  This program is free software; you can redistribute it and/or modify it
#  under the terms of the GNU General Public License version 2 as published by
#  the Free Software Foundation.
#
#
#  !Revision:    $Revision: 1.3 $:
#  !Description: Dropbear ssh daemon bootscript
#
#===============================================================================

set -e

umask 077

start() {
	[ -z "${quietboot}" ] && echo -n "Starting dropbear sshd: "
	start-stop-daemon --start --quiet --pidfile /var/run/dropbear.pid --exec /usr/sbin/dropbear
	[ -z "${quietboot}" ] && echo "OK"
}

stop() {
	echo -n "Stopping dropbear sshd: "
	start-stop-daemon --stop --quiet --pidfile /var/run/dropbear.pid
	echo "OK"
}

restart() {
	stop
	start
}

case "$1" in
start)
	start
	;;
stop)
	stop
	;;
restart|reload)
	restart
	;;
*)
	echo $"Usage: $0 {start|stop|restart}"
	exit 1
esac

exit $?
