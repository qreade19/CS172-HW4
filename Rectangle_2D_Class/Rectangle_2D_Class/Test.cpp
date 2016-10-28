#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);

	double r1Perimeter = r1.getPerimeter();
	double r1Area = r1.getArea();

	cout << "Rectangle 1's area is: " << r1Area << endl;
	cout << "Rectangle 1's perimeter is: " << r1Perimeter << endl;
	cout << "Is the point (3, 3) within rectangle 1? " << r1.contains(3, 3) << endl;
	cout << "Is rectangle 2 within rectangle 1? " << r1.contains(r2) << endl;
	cout << "Does rectangle 3 overlap rectangle 1? " << r1.overlaps(r3) << endl;
	return 0;
}