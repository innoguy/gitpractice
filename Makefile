CXX      ?= g++
CXXFLAGS ?= -std=c++17 -Wall -Wextra -O2

hello: hello.cpp
	$(CXX) $(CXXFLAGS) -o hello hello.cpp

.PHONY: run clean
run: hello
	./hello

clean:
	rm -f hello
