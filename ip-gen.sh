#!/bin/bash
for a in `seq 0 255`
do
  for b in `seq 0 255`
  do
  echo "$a.$b." >> ips_left.txt
  echo "$a.$b" >> ips_right.txt
  done
done
