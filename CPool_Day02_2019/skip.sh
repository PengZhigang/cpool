#!/bin/bash
awk -F " " 'NR%2 {print}'
