#!/bin/bash
echo "Hacemos Make"
make
echo "Corremos los test de persona"
./persona_unittest
echo "Corremos los test de parque"
./parque_unittest
