#!/bin/sh
#===============================================================================
#
#  S80httpd.sh
#
#  Copyright (C) 2008 by Digi International Inc.
#  All rights reserved.
#
#  This program is free software; you can redistribute it and/or modify it
#  under the terms of the GNU General Public License version 2 as published by
#  the Free Software Foundation.
#
#
#  !Description: Busybox's httpd web server bootscript
#
#===============================================================================

daemon="/usr/sbin/httpd"
pidfile="/var/run/httpd.pid"

[ -x "${daemon}" ] || exit 0
[ -d /var/run ] || mkdir -p /var/run

case "${1}" in
start)
	[ -z "${quietboot}" ] && echo -n "Starting httpd webserver: "
	if [ -s "${pidfile}" ]; then
		pid="$(cat ${pidfile})"
		if kill -0 "${pid}" 2>/dev/null; then
			[ -z "${quietboot}" ] && echo " already running."
			exit 0
		fi
	fi
	start-stop-daemon -S -b -m -p ${pidfile} -x ${daemon} -- -f -u nobody:nogroup
	[ -z "${quietboot}" ] && echo "OK"
	;;
stop)
	echo -n "Stopping httpd webserver: "
	start-stop-daemon -K -q -p ${pidfile}
	rm -f "${pidfile}"
	echo "OK"
	;;
*)
	echo "Usage: $0 {start|stop}"
	exit 1
	;;
esac
