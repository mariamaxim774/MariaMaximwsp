#include "NumberList.h"
#include<iostream>

void NumberList::Init()
    {
        count = 0;
    }

bool NumberList::Add(int x)
{
    if (count >= 10)
        return false;
    numbers[count] = x;
    count++;
}

void NumberList:: Sort()
    {
        bool sorted;
        do
        {
            sorted = true;
            for(int i=0; i < count-1 ; i++)
            {
                if(numbers[i] > numbers[i+1])
                {
                    int aux=numbers[i];
                    numbers[i]=numbers[i+1];
                    numbers[i+1]=aux;
                    sorted = false;
                }
            }
        }while(!sorted);
    }        // will sort the numbers vector

void NumberList:: Print()
    {
        for(int i=0;i<count;i++)
            std::cout<<numbers[i]<<" ";
        std::cout<<"\n";
        }// will print the current vector



