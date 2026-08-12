CXX      ?= g++
VERSION  := $(shell cat VERSION)
CXXFLAGS ?= -std=c++17 -Wall -Wextra -O2 -DAPP_VERSION=\"$(VERSION)\"

hello: hello.cpp VERSION
	$(CXX) $(CXXFLAGS) -o hello hello.cpp

.PHONY: run clean
run: hello
	./hello

clean:
	rm -f hello
