#!/bin/bash -i
set -o history
lastCommand=$(echo `history | tail -2 | head -1 | cut -c8-999`)
echo "$lastCommand"
# sudo $(lastCommand)

