#!/bin/bash
#
# make thumbnails for a given image
#
# requires ImageMagick
#
if [ -z "$1" ] || [ -z "$2" ]; then
	echo "usage: $0 original.jpeg slug"
	exit 1
fi

DEST=../content/images/thumbnail

#
# fit into square, w/padding
SIZES=( 64 128 256 512 )

for SIZE in "${SIZES[@]}"
do
	# square, w/padding
	convert $1 \
		-thumbnail ${SIZE}x${SIZE}\> \
		-background transparent \
		-gravity center \
		-extent ${SIZE}x${SIZE} \
		$DEST/$2-${SIZE}sq.png

	# fixed width, with height proportional
	convert $1 \
		-resize ${SIZE}x \
		-gravity center \
		$DEST/$2-${SIZE}w.png
done

BIGSIZES=( 1024 2048 )
for BIGSIZE in "${BIGSIZES[@]}"
do
	# fixed width, with height proportional
	convert $1 \
		-resize ${BIGSIZE}x \
		-gravity center \
		$DEST/$2-${BIGSIZE}w.jpeg
done

