CC=g++
CFLAGS=Wall
INCLUDE=./include/
SRC=./src/
EXE=exe

#targets
hw:
	$(CC) -o hw.o -I$(INCLUDE) -c $(SRC)hello_world.cpp

test: hw
	$(CC) -o $(EXE) -$(CFLAGS) -I$(INCLUDE) test/main.cpp hw.o

clean:
	rm *.o

ejemplo:
	echo "Labo Progra"