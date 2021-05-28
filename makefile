main: func.o
	g++ -std=c++17 -o main main_2.cpp func_2.cpp
fun:
	g++ c- func_2.cpp
run:
	./main