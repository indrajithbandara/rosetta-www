#!/bin/bash
#
# make favicons from a master
#
# requires ImageMagick and icotool packages
#
SRC=../thumbnail/rosettastone.png
SIZES=( 16 32 57 64 72 114 128 144)

for SIZE in "${SIZES[@]}"
do
	convert $SRC \
		-thumbnail ${SIZE}x${SIZE}\> \
		-background transparent \
		-gravity center \
		-extent ${SIZE}x${SIZE} \
		../www/images/icon/rosetta-${SIZE}.png

done

icotool -c -o ../www/favicon.ico \
	../www/images/icon/rosetta-16.png \
	../www/images/icon/rosetta-32.png \
	../www/images/icon/rosetta-64.png \
	../www/images/icon/rosetta-128.png

APPLESIZES=( 57 72 114 144)
for SIZE in "${APPLESIZES[@]}"
do
	cp \
		../www/images/icon/rosetta-${SIZE}.png \
		../www/apple-touch-icon-${SIZE}x${SIZE}.png
done
cp \
	../www/images/icon/rosetta-57.png \
	../www/apple-touch-icon.png


