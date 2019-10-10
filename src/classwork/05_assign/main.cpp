//write include statemetns
#include<vector>
#include "rectangle.h"

using std::vector;
using std::cout;
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000
Iterate the vector and display the Area for each Rectangle on one line and the total area for the
3 rectangles.
*/
int main()
{
	vector<acc::Rectangle> rectangles;
	rectangles.push_back(acc::Rectangle(4, 5));
	rectangles.push_back(acc::Rectangle(10, 10));
	rectangles.push_back(acc::Rectangle(100, 10));
	int total_area = 0;
	for (auto rec : rectangles)
	{
		//cout << "Area: " << rec.get_area() << "\n";
		total_area = total_area + rec.get_area();
		cout << rec;
	}
	cout << "Total area: " << total_area << "\n";

	return 0;
}