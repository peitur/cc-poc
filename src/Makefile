

CC=g++
MAIN=main

all : main

util.o : util.cc ../include/util.h
	${CC} -c util.cc -Wall

config.o : config.cc ../include/config.h
	${CC} -c config.cc -Wall

cc.o : cc.cc ../include/cc.h
	${CC} -c cc.cc -Wall

main : cc.o util.o config.o
	${CC} -o ${MAIN} cc.o util.o config.o -Wall

clean:
	rm *.o ${MAIN}
