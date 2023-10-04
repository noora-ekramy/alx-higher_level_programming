#!/usr/bin/python3
# Author -Nora Ekramy

for i in range(26):
    if i % 2:
        print("{}".format(chr(ord('Z') - i)), end="")
    else:
        print("{}".format(chr(ord('z') - i)), end="")
