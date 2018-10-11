#!/bin/sh

COUNT=$(ifconfig | grep -o -E "\b([0-9]{1,3}\.){3}[0-9]{1,3}\b" | wc -l)

if [[ $COUNT -gt 0 ]]
then
		ifconfig | grep -o -E "\b([0-9]{1,3}\.){3}[0-9]{1,3}\b"
else
		echo "I am lost!\n"
fi
