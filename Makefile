CC=gcc
CFLAGS=-Wall
LFLAGS=-lm
EXE=main

all: $(EXE).out

%.out: %.c
	@ echo "Compiling"
	$(CC) $(CFLAGS) $< -o $@ $(LFLAGS)

clean:
	rm -rf *.out *~