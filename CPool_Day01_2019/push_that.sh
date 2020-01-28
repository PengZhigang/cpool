#!/bin/bash 


# for entry in "$search_dir"/*
# do
#   	if [[ -f $entry ]]
#   	then
#   		echo $entry
# 	fi
# done
 git add -A
 git commit -am "$1"
 git push