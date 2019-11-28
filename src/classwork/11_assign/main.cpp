#include "vector.h"
#include<iostream>
//Vector get_vector();

int main()
{
	Vector<double> v(1);
	v[0] = 2.5;

	std::cout << v[0];
	//Vector*v = new Vector(3);
	//delete v;

	//Vector v(1);
	//v = get_vector();

	return 0;
}
/*
Vector get_vector()
{
	Vector v(3);

	return v;
}
*/