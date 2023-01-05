CC=gcc
CFLAGS=
EXE=main

all: $(EXE)

%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LFLAGS)