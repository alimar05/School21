#!/bin/sh

ldapsearch -Q "uid=z*" cn | grep '^cn:' | sort -r -f | cut -c5-
