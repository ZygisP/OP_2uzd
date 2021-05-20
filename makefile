main: func.o
	g++ -std=c++17 -o main main.cpp func.o
fun:
	g++ c- func.cpp
run:
	./main