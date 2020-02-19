CC  = cc
INP = proces
OUT = *.c
LIB = -lpthread


all:
	$(CC) -o $(INP) $(OUT) $(LIB)
	@sudo cp proces /usr/bin/
