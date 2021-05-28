main: func_vec.o
	g++ -O1 -std=c++17 -o main main_vec.cpp func_vec.cpp
fun:
	g++ c- func_vec.cpp
run:
	./main