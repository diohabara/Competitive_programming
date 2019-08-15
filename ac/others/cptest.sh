#!/bin/bash
problemname=$1
contest="abc"
oj dl "https://${contest}${problemname:0:3}.contest.atcoder.jp/tasks/${contest}${problemname:0:3}_${problemname:3}"
g++ -Wall -std=c++14 ./$1.cpp
oj test
rm -f a.out
rm -rf test