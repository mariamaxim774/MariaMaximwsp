
#include<initializer_list>
#include <vector>

class Sort
{
    int * vector=nullptr ;
    int nr_elemente;
    

public:

    //----constructori----//
    Sort(int nr_elemente, int min_element, int max_element);
    Sort(int* v,int nr_elemente);
    Sort(int count, ...);
    Sort(char* s);
    Sort();


    //--functii--//

    void InsertSort(bool ascendent);

    void QuickSort(bool ascendent );

    void BubbleSort(bool ascendent);

    void Print();

    int  GetElementsCount();

    int  GetElementFromIndex(int index);

};
