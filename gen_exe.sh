#!/bin/bash 

#required libraries and programs install
sudo apt install -y build-essential make cmake git

sudo apt install -y libgmp-dev libmpfr-dev libboost-dev libcgal-qt5-dev

#CGAL 5.2.1 download and unzip
cd ~

wget https://github.com/CGAL/cgal/releases/download/v5.2.1/CGAL-5.2.1.zip

unzip CGAL-5.2.1.zip

#CGAL 5.2.1 compilation and install

cd ~/CGAL-5.2.1

cmake -B build -DCGAL_HEADER_ONLY=OFF -DCMAKE_BUILD_TYPE=Release

cmake --build build --config Release

cd build

sudo make install

#project download

cd ~

git clone https://github.com/robz25/Proyecto1_IE0724.git

#project compile

cd ~/Proyecto1_IE0724

cmake -B build -DCMAKE_BUILD_TYPE=Release

cmake --build build --config Release

#project execute

cd ~/Proyecto1_IE0724/build

./Proyecto1 ../puntos.txt
