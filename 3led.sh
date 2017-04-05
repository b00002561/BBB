#!/bin/bash

for i in {1 .. 5}
do
  echo 1 > /sys/class/leds/beaglebone:green:usr3/brightness
  echo 1 > /sys/class/leds/beaglebone:green:usr0/brightness
  echo 1 > /sys/class/leds/beaglebone:green:usr1/brightness
sleep 5
  echo 0 > /sys/class/leds/beaglebone:green:usr3/brightness
  echo 0 > /sys/class/leds/beaglebone:green:usr0/brightness
  echo 0 > /sys/class/leds/beaglebone:green:usr1/brightness
sleep 5
done
