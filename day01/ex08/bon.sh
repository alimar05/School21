#!/bin/sh

ldapsearch -LLL -Q "(sn=*bon*)" | grep sn -c
