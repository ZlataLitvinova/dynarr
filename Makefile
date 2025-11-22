all : dynarr
dynarr : main.o dynarray.o
	g++ -static main.o  dynarray.o  -o  dynarr.exe
main.o : main.cpp
	g++ -c main.cpp
dynarray.o : dynarray.cpp dynarray.h
	g++ -c dynarray.cpp
