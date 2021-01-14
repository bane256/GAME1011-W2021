#include <iostream>
#include <cmath>
using namespace std;

// This is a Circle class
class Circle
{
private:

public:
	double radius;
public:
	void serRadius(double r)
	{
		radius = r;
	}
	double calcArea()
	{
		return 3.14 * pow(radius, 2);
	}
};

int main()
{
	Circle circle1, circle2;

	circle1.serRadius(1);
	circle2.serRadius(2.5);

	cout << "The area of circle 1 is " << circle1.calcArea() << endl;
	cout << "The area of circle 2 is " << circle2.calcArea() << endl;


	return 0;
}
	