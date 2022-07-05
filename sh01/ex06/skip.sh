#!/bin/sh

ls -l | awk '{if (NR%3) {print $0}}'
