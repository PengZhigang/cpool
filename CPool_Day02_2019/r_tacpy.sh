#!/bin/bash
awk -F ":" '{print $1}'|awk '(NR+1)%2 {print}'| rev |sort -r|sed -n "${MY_LINE1} ,${MY_LINE2}p"| xargs|sed -n "s/ /, /gp"|sed "s/$/./g"


