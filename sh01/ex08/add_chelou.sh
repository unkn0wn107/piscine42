#!/bin/sh

echo "qbase=13;ibase=5;"$FT_NBR1+$FT_NBR2 | sed "y#'\\\"?\!#01234#" | sed "y#mrdoc#01234#" | sed 's/q/o/' | bc | sed "y#0123456789ABC#gtaio luSnemf#"
