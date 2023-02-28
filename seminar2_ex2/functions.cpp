#include<iostream>
#include<string.h>
#include "student.h"

int comp_nume(Student s1,Student s2)
{
    return strcmp(s1.nume,s2.nume);
}

int comp_nota_e(Student s1,Student s2)
{
    if(s1.nota_engleza==s2.nota_engleza)
        return 0;
    else
        {
            if(s1.nota_engleza>s2.nota_engleza)
                return 1;
            else
                return -1;
        }



}

int comp_nota_i(Student s1,Student s2)
{
    if(s1.nota_istorie==s2.nota_istorie)
        return 0;
    else
        {
            if(s1.nota_istorie>s2.nota_istorie)
                return 1;
            else
                return -1;
        }



}

int comp_nota_m(Student s1,Student s2)
{
    if(s1.nota_matematica==s2.nota_matematica)
        return 0;
    else
        {
            if(s1.nota_matematica>s2.nota_matematica)
                return 1;
            else
                return -1;
        }


}

int comp_medie(Student s1,Student s2)
{
   if(s1.medie==s2.medie)
        return 0;
    else
        {
            if(s1.medie>s2.medie)
                return 1;
            else
                return -1;
        }

}


