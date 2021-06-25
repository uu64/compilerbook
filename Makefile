.PHONY: setup
setup:
	docker build -t compilerbook https://www.sigbus.info/compilerbook/Dockerfile

.PHONY: sh
sh:
	docker run --rm -v $(CURDIR)/src:/9cc -it compilerbook
