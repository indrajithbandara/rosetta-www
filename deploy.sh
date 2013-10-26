#!/bin/bash
#
# deploy to s3
#
nanoc
s3cmd sync --delete-removed output/ s3://www.digitalrosetta.org/
