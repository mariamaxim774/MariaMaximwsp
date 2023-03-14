#pragma once
#pragma warning(disable : 4996).
#include"sort.h"
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdarg.h>
#include<cstring>


using namespace std;


 /// ~~~~~constructori~~~~~////

 Sort::Sort(int nr_elemente, int min_element, int max_element)
{
	time_t t;
	free(this->vector);
	this->nr_elemente = nr_elemente;
	this->vector = (int*)(malloc(nr_elemente * sizeof(int)));
	srand((unsigned)time(&t));
	for (int i = 0; i < nr_elemente; i++)
		this->vector[i] = min_element + rand() % (min_element - max_element + 1);
	
}

 Sort::Sort(int* v, int nr_elemente)
 {
	 cout << endl;
	 free(this->vector);
	 this->nr_elemente = nr_elemente;
	 this->vector = (int*)(malloc(nr_elemente * sizeof(int)));
	 for (int i = 0; i < nr_elemente; i++)
		 this->vector[i] = v[i];
	
 }

 Sort::Sort()
 {
     this->vector=new int[3] {1, 2, 3};
     this->nr_elemente = 3;
     
 }

 Sort::Sort(int count, ... )
 {
	 free(this->vector);
	 cout << endl;
	 this->nr_elemente = count;
	 this->vector = (int*)(malloc(count * sizeof(int)));
	 va_list vl;
	 va_start(vl, count );
	 for (int i = 0; i < count; i++)
	 {
		 this->vector[i] = va_arg(vl, int);

	 }
	 
	 va_end(vl);
	 
 }

 Sort::Sort(char* s)
 {
	 int k=0,i;
	 cout << endl;
	 free(this->vector);
	 this->vector = (int*)(calloc(nr_elemente , sizeof(int)));
	 char* p = strtok(s, ",");
	 while (p != nullptr)
	 {
		 this->vector[k] = atoi(p);
		 k++;
		 p = strtok(NULL,",");
	 }

	
	 
 }

 
 /// -----sfarsit constructori-----///




 ///-----SORTARI-----///

 void Sort::InsertSort(bool ascendent) ///Sortare prin metoda insertiei
{
     int key;
     int j;
     if (ascendent == false)
     {
         for (int i = 0; i < nr_elemente; i++)
         {
             key = this->vector[i];
             j = i - 1;
             while (j >= 0 && key > vector[j])
             {
                 vector[j + 1] = vector[j];
                 j = j - 1;
             }
             vector[j + 1] = key;
         }
     }
     else
     {
         for (int i = 0; i < nr_elemente; i++)
         {
             key = this->vector[i];
             j = i - 1;
             while (j >= 0 && key < vector[j])
             {
                 vector[j + 1] = vector[j];
                 j = j - 1;
             }
             vector[j + 1] = key;
         }
     }
 }

 int partitionA(int v[], int low, int high) {
     int pivot = v[high];
     int i = (low - 1);
     for (int j = low; j <= high - 1; j++)
     {
         if (v[j] < pivot)
         {
             i++;
             int aux = v[i];
             v[i] = v[j];
             v[j] = aux;
         }
     }
     int aux = v[i + 1];
     v[i + 1] = v[high];
     v[high] = aux;
     return (i + 1);
 }

 void quicksortA(int v[], int low, int high)
 {
     if (low < high)
     {
         int pi = partitionA(v, low, high);
         quicksortA(v, low, pi - 1);
         quicksortA(v, pi + 1, high);
     }
 }

 int partitionD(int v[], int low, int high)
 {
     int pivot = v[high];
     int i = (low - 1);
     for (int j = low; j <= high - 1; j++)
     {
         if (v[j] > pivot)
         {
             i++;
             int aux = v[i];
             v[i] = v[j];
             v[j] = aux;
         }
     }
     int aux = v[i + 1];
     v[i + 1] = v[high];
     v[high] = aux;
     return (i + 1);
 }

 void quicksortD(int v[], int low, int high)
 {
     if (low < high)
     {
         int pi = partitionD(v, low, high);
         quicksortD(v, low, pi - 1);
         quicksortD(v, pi + 1, high);
     }
 }


 void Sort::QuickSort(bool ascendent)///Sortare rapida
 {
     if (ascendent == true)
     {
         quicksortA(vector, 0, nr_elemente - 1);
     }
     else
         quicksortD(vector, 0, nr_elemente - 1);
 }

 void Sort::BubbleSort(bool ascendent)///Sortare prin metoda bulelor
 {
     for (int i = 0; i < this->nr_elemente - 1; i++)
         for (int j = i + 1; j < this->nr_elemente; j++)
             if (ascendent == true)
             {
                 if (this->vector[i] > this->vector[j])
                     swap(this->vector[i], this->vector[j]);
             }
             else
             {
                 if (this->vector[i] < this->vector[j])
                     swap(this->vector[i], this->vector[j]);
             }
 }

 void Sort::Print()///Printarea elementelor din vector
 {
     for (int i = 0; i < nr_elemente; i++)
         cout << this->vector[i]<<" ";
     cout << endl;
 }

int Sort::GetElementsCount() {

    return this->nr_elemente;


};


int Sort::GetElementFromIndex(int index) {
    if (index > nr_elemente - 1)
        return 0;
    else
        return this->vector[index];
};
