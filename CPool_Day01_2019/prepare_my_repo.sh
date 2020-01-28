#!/bin/bash 
if [[ "$1" == "" ]]
then
	echo "no name"
	exit
fi
blih -u zhigang.peng@epitech.eu repository create "$1"
blih -u zhiagng.peng@epitech.eu repository setacl "$1" ramassage-tek r
blih -u zhigang.peng@epitech.eu repository getacl "$1"