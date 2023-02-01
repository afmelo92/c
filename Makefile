CC=gcc
CFLAGS=-Wall
EXE=main

all: $(EXE).out

%.out: %.c
	@ echo "Compiling"
	$(CC) $(CFLAGS) $< -o $@ $(LFLAGS)

clean:
	rm -rf *.out *~