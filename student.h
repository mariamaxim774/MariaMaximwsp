#pragma once
#ifndef GRADE
#define GRADE
#ifndef STUDENT
#define STUDENT

class Grade
{
public:
    char *materie;
    float nota_engleza,nota_istorie,nota_matematica;

public:
    void SetNota_engleza(float input);
    void SetNota_istorie(float input);
    void SetNota_matematica(float input);
    float getNota_engleza();
    float getNota_istorie();
    float getNota_matematica();
};

class Student : public Grade
{
    ///identificatori de acces public, private sau protected
    //daca nu avem nimic avem private
    //public poate fi apelat de oriunde
    //private poate fi apelat dor in interiorul clasei
    //protected nu poate fi apelat din exterior dar poate fi apelat dintr-o clasa derivata
public:
    char nume[20];
    float medie;

public:
    ///constructorul si destructorul nu au valori de return
    Student();
    Student(char* nume);
    ~Student();
public:
    //setter pt nota

    //getter pentru nota
    //1.vedem de ce tip este atributul nota,acesta este tipul functiei

    void SetNume(char *nume);
    float media();
    char *getNume();
};


#endif //GRADE
#endif //STUDENT

