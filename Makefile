.SILENT
CC = g++
CFLAGS=-std=c++11
EXE=./intcalc
ADDF=add.log
SUBF=sub.log
MULTF=mult.log

all: clean build test

test: add sub mult
	mkdir -p testlogs
	mv *.log testlogs

clean:
	rm -f *.o $(EXE) *.log
	rm -rf testlogs

build: src/main.cc main.h
	$(CC) $(CFLAGS) -o $(EXE) main.cc

add: $(EXE)
	$(EXE) + 2 2 >> $(ADDF)

sub: $(EXE)
	$(EXE) - 1 2 -1 >> $(SUBF)
	
mult: $(EXE)
	$(EXE) \* 1 2 2 >> $(MULTF)

