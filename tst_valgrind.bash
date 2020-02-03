#!/bin/bash
# 
# File:   tst_valgrind.bash
# Author: medhat
#
# Created on 09.05.2018, 21:18:52
#
#valgrind --tool=memcheck -stack --trace-children=yes /home/medhat/NetBeansProjects/tst_valgrind/dist/Release/GNU-Linux/tst_valgrind

prog=/home/medhat/NetBeansProjects/tst_valgrind/dist/Release/GNU-Linux/tst_valgrind
valgrind --tool=massif --stacks=yes --heap=yes --trace-children=yes --massif-out-file=massif.out   $prog
ms_print massif.out