#!/bin/sh

git log -n 5 | grep -v '    ' | grep commit | sed "s/commit //"
