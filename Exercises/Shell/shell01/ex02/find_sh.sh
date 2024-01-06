#!/bin/bash
find . -type f -iname "*.sh" -exec basename {} \; | sed 's/\.sh$//'
