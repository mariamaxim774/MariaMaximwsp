#include "canvas.h"
#include "canvas.cpp"
using namespace std;

int main()
{
	Canvas c(51, 51);
	c.DrawCircle(25, 25, 19, 'w');
	c.Print();
	c.FillCircle(25, 25, 19, 'p');
	c.DrawRect(20, 3, 40, 12, 'r');
	c.Print();
	c.Clear();
	c.FillRect(40, 20, 48, 25, 'f');
	c.SetPoint(25, 45, 'O');
	c.DrawLine(10, 25, 5, 30, 'l');
	c.Print();
	return 0;
}