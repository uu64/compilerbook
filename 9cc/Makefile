CFLAGS=-std=c11 -g -static
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

9cc: $(OBJS)
	$(CC) -o 9cc $(OBJS) $(LDFLAGS)

$(OBJS): 9cc.h

test: 9cc
	./test.sh

clean:
	rm -f 9cc *.o *~ tmp*

setup:
	docker build -t compilerbook https://www.sigbus.info/compilerbook/Dockerfile

sh:
	docker run --rm -v $(CURDIR):/9cc -it compilerbook

.PHONY: test clean setup sh
