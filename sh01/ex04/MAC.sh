#!/bin/sh

ifconfig | grep 'ether ' | tr -d '\t' | sed 's/ether //g' | tr -d ' '
