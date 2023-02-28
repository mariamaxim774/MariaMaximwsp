#include<cstring>
#include "student.h"


void Grade::SetNota_engleza(float input)
{
    if (input<=10 && input>=1)
        this->nota_engleza=input;
}

void Grade::SetNota_matematica(float input)
{
    if (input<=10 && input>=1)
        this->nota_matematica=input;
}

void Grade::SetNota_istorie(float input)
{
    if (input<=10 && input>=1)
        this->nota_istorie=input;
}

float Grade::getNota_istorie()
{

    return this->nota_istorie;
}

float Grade::getNota_matematica()
{

        return this->nota_matematica;
}

float Grade::getNota_engleza()
{

    return  this->nota_engleza;
}


void Student::SetNume(char *nume)
{
    strncpy(this->nume,nume,20);
}

float Student::media()
{
    return (this->nota_engleza+this->nota_istorie+this->nota_matematica)/3;
}

char* Student::getNume()
{
    return this->nume;
}

Student::Student()
{
    memset(this->nume,0,20);
}

Student::Student(char* nume)
{
    strncpy(this->nume,nume,20);
}

Student::~Student()
{
     memset(this->nume,0,20);
}
