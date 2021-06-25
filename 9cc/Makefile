CFLAGS=-std=c11 -g -static

9cc: 9cc.c

test: 9cc
	./test.sh

clean:
	rm -f 9cc *.o *~ tmp*

setup:
	docker build -t compilerbook https://www.sigbus.info/compilerbook/Dockerfile

sh:
	docker run --rm -v $(CURDIR):/9cc -it compilerbook

.PHONY: test clean setup sh
