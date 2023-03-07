#include "Math.h"
#include <stdlib.h>
#include<cstdarg>
#include<cstring>


int Math::Add(int a, int b)
{
	return a + b;
}


int Math::Add(int a, int b,int c)
{
	return a + b+ c ;
}

int Math::Add(double a, double b)
{
	return (int) (a + b) ;
}


int Math:: Add(double a, double b, double c)
{
	return (int)a + b + c;

}



int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return (int)a * b;
}

int Math::Mul(double a, double b, double c )
{
	return (int)a * b * c;
}

int Math::Add(int count, ...) // sums up a list of integers
{
		va_list args;
		int s = 0;
		va_start(args, count);
		for (int i = 0; i < count; i++)
			s = s + va_arg(args,int);
		va_end(args);
		return s;
	
}

char* Math::Add(const char* sir1, const char* sir2)
{
	int lenght_sir1 = strlen(sir1);
	int lenght_sir2 = strlen(sir2);

	char* sir3 = (char*)malloc(lenght_sir1 + lenght_sir2 + 1);
	memcpy(sir3, sir1, lenght_sir1);
	memcpy(sir3 + lenght_sir1, sir2, lenght_sir2 + 1);
	return sir3;
}






