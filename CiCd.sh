#!/bin/bash
echo "Hacemos Make"
make
echo "Corremos los test de persona"
./persona_unittest
echo "Corremos los test de visitante"
./visitante_unittest
echo "Corremos los test de monitor"
./monitor_unittest
