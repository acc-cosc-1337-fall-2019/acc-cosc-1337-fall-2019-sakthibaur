//line.h
#ifndef LINE_H
#define LINE_H


#include "shape.h"
class Line : public Shape
{
public:
	void draw() { std::cout << "Draw line\n"; } 
	//{ std::cout << "Draw line\n"; } is the function definition so don't need to write anything in line.cpp
};

#endif // !LINE_H