#!/bin/sh

ifconfig -a | grep 'ether ' | cut -d' ' -f2
