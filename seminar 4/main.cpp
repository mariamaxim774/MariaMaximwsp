#include "sort.h"
#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	Sort v1(10,10,100);
	v1.Print();


	int v[5] = { 1,8,9,6,5 };
	Sort v3(v, 5);
	v3.Print();


	Sort v2;
	v2.Print();
	cout << endl;
	

	Sort v4(6, 1, 2, 3, 4, 5, 6);
	v4.Print();


	char c[] = "10,40,100,5,70";
	Sort v5(c);
	v5.Print();

	v1.InsertSort(true);
	v1.Print();

	v3.QuickSort(true);
	v3.Print();

	v4.BubbleSort(false);
	v4.Print();
	

	cout<<v1.GetElementsCount()<<endl;
	cout<<v3.GetElementFromIndex(1);
	

	
	return 0;
}