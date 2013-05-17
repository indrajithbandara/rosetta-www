#!/bin/bash
#
# regenerate thumbnails
#
#
ORIG=../../rosetta-data
./_mkthumb.sh ${ORIG}/1903-firstflight.tif firstflight
./_mkthumb.sh ${ORIG}/1969-earthrise.tif earthrise
./_mkthumb.sh ${ORIG}/1972-pioneer10.svg pioneer10
./_mkthumb.sh ${ORIG}/1977-voyagercover.jpeg voyager
./_mkthumb.sh ../thumbnail/adultschool.jpeg adultschool
./_mkthumb.sh ../thumbnail/firstnames.png firstnames
