#!/bin/bash

if [[ "$#" -ne 1 ]]
then 
	wc -l
else
	A=$1
	B=${A^^}
	grep ";$B"|wc -l

fi

