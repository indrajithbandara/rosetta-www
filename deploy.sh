#!/bin/bash
#
# deploy to s3
#
#jekyll www
s3cmd sync --delete-removed _site/ s3://www.digitalrosetta.org/
