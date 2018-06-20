#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/Bithereum.png
ICON_DST=../../src/qt/res/icons/Bithereum.ico
convert ${ICON_SRC} -resize 16x16 Bithereum-16.png
convert ${ICON_SRC} -resize 32x32 Bithereum-32.png
convert ${ICON_SRC} -resize 48x48 Bithereum-48.png
convert Bithereum-48.png Bithereum-32.png Bithereum-16.png ${ICON_DST}

