#!/bin/sh

find . -name "*.sh" | sed 's#.*/##' | cut -d. -f1
