main : main.o boards.o 
	g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system

main.o : main.cpp
	g++ -c main.cpp

boards.o : boards.cpp
	g++ -c boards.cpp
