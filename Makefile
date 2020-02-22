CC  = cc
INP = proces
OUT = *.c


all:
	$(CC) -o $(INP) $(OUT)
	@sudo cp proces /usr/bin/
