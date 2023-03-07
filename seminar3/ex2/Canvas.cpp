#include "canvas.h"
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

inline void Canvas::DrawCircle(int xc, int yc, int ray, char ch)
{
	int r = ray;
	int start_X = xc;
	int start_Y = yc;
	for (int i = start_X - r; i <= start_X + r; i++)
	{
		for (int j = start_Y - r; j <= start_Y + r; j++)
		{
			if ((i - start_X) * (i - start_X) + (j - start_Y) * (j - start_Y) <= r * r)
				if ((i - start_X) * (i - start_X) + (j - start_Y) * (j - start_Y) >= r * (r - 1) && (i - start_X) * (i - start_X) + (j - start_Y) * (j - start_Y) <= r * (r + 1))
				{
					matrix[i][j] = ch;
				}
		}
	}
}



inline void Canvas::FillCircle(int xc, int yc, int ray, char ch)
{

	int r = ray;
	int start_X = xc;
	int start_Y = yc;
	for (int i = start_X - r; i <= start_X + r; i++)
	{
		for (int j = start_Y - r; j <= start_Y + r; j++)
		{
			if ((i - start_X) * (i - start_X) + (j - start_Y) * (j - start_Y) <= r * r)
			{
				matrix[i][j] = ch;
			}
		}
	}
}

inline void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = max(top, 0); i < bottom; i++)
	{
		matrix[i][right] = ch;
		matrix[i][max(left, 0)] = ch;
	}
	for (int i = max(left, 0); i <= right; i++)
	{
		matrix[max(top, 0)][i] = ch;
		matrix[bottom][i] = ch;
	}
}

inline void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = max(top, 0); i < bottom; i++)
		for (int j = max(left, 0); j < right; j++)
			matrix[i][j] = ch;
}

inline void Canvas::SetPoint(int x, int y, char ch)
{
	matrix[max(y, 0)][max(x, 0)] = ch;
}

inline void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	//calculating range for line between start and end point
	bool go_left = 0, go_up = 0;
	int dx = x2 - x1;
	int dy = y2 - y1;
	if (dx < 0)
		go_left = 1;
	if (dy < 0)
		go_up = 1;
	int x = x1;
	int y = y1;
	//this is the case when slope(m) < 1
	if (abs(dx) > abs(dy))
	{
		ch = 'p';
		if (y >= 0 && x >= 0 && y < h && x < w)
			matrix[y][x] = ch;    //this putpixel is for very first pixel of the line
		int pk = (2 * abs(dy)) - abs(dx);
		for (int i = 0; i < abs(dx); i++)
		{
			x = x + 1;
			if (go_left)
				x = x - 2;
			if (pk < 0)
				pk = pk + (2 * abs(dy));
			else
			{
				y = y + 1;
				if (go_up)
					y = y - 2;
				pk = pk + (2 * abs(dy)) - (2 * abs(dx));
			}
			if (y >= 0 && x >= 0 && y < h && x < w)
				matrix[y][x] = ch;
		}
	}
	else
	{
		//this is the case when slope is greater than or equal to 1  i.e: m>=1
		if (y >= 0 && x >= 0 && y < h && x < w)
			matrix[y][x] = ch;    //this putpixel is for very first pixel of the line
		int pk = (2 * abs(dx)) - abs(dy);
		for (int i = 0; i < abs(dy); i++)
		{
			y = y + 1;
			if (go_up)
				y = y - 2;
			if (pk < 0)
				pk = pk + (2 * abs(dx));
			else
			{
				x = x + 1;
				if (go_left)
					x = x - 2;
				pk = pk + (2 * abs(dx)) - (2 * abs(dy));
			}
			if (y >= 0 && x >= 0 && y < h && x < w)
				matrix[y][x] = ch;   // display pixel at coordinate (x, y)
		}
	}
}

inline void Canvas::Print() // shows what was printed
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << '\n';
	}
}

inline void Canvas::Clear() // clears the canvas
{
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++)
			matrix[i][j] = 32;
}