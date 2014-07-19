#!/bin/sh
#===============================================================================
#
#  S60vsftpd.sh
#
#  Copyright (C) 2008 by Digi International Inc.
#  All rights reserved.
#
#  This program is free software; you can redistribute it and/or modify it
#  under the terms of the GNU General Public License version 2 as published by
#  the Free Software Foundation.
#
#
#  !Revision:    $Revision: 1.10 $:
#  !Description: Vsftpd server bootscript
#
#===============================================================================

set -e

daemon="/usr/sbin/vsftpd"
pidfile="/var/run/vsftpd.pid"

[ -x "${daemon}" ] || exit 0

for dir in "/usr/share/empty" "/var/run" "/var/ftp"; do
	[ -d "${dir}" ] || mkdir -p "${dir}"
done

case "${1}" in
start)
	[ -z "${quietboot}" ] && echo -n "Starting vsftpd server: "
	if [ -s "${pidfile}" ]; then
		pid="$(cat ${pidfile})"
		if kill -0 "${pid}" 2>/dev/null; then
			[ -z "${quietboot}" ] && echo " already running."
			exit 0
		fi
	fi
	start-stop-daemon --start --background --make-pidfile --pidfile "${pidfile}" --exec "${daemon}"
	[ -z "${quietboot}" ] && echo "OK"
	;;
stop)
	echo -n "Stopping vsftpd server: "
	start-stop-daemon --stop --quiet --pidfile "${pidfile}"
	rm "${pidfile}"
	echo "OK"
	;;
*)
	echo "Usage: $0 {start|stop}"
	exit 1
	;;
esac
