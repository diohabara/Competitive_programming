#!/bin/bash
problemname=$1
contest="abc"
oj dl "https://${contest}${problemname:0:3}.contest.atcoder.jp/tasks/${contest}${problemname:0:3}_${problemname:3}"
oj test [-c ruby ./${problemname}.rb]
rm -rf test