#include<iostream>
#include "NumberList.h"


int main()
{
    NumberList lista;
    lista.Init();
    lista.Add(9);
    lista.Add(2);
    lista.Add(77);
    lista.Add(1);
    lista.Print();
    lista.Sort();
    lista.Print();
    return 0;
}

