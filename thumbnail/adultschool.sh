#!/bin/bash
#
# tif is just too big
convert ../../rosetta-data/1993-adultschool.tif \
		-resize 2048x \
		-gravity center \
		./adultschool.jpeg

