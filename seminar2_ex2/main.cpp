#include <iostream>
#include "student.h"
#include "functions.h"

using namespace std;

int main()
{
    Student f1,f2;
    f1.SetNume((char *)"Student1");
    f1.SetNota_engleza(8);
    f1.SetNota_matematica(9);
    f1.SetNota_istorie(9);
    f2.SetNume((char *)"Student2");
    f2.SetNota_engleza(8);
    f2.SetNota_matematica(9);
    f2.SetNota_istorie(9);
    std::cout<<"numele studentului este: "<<f1.getNume()<<"\n";
    std::cout<<"nota studentului la engleza este: "<<f1.getNota_engleza()<<"\n\n";
    std::cout<<"nota studentului la istorie este: "<<f1.getNota_istorie()<<"\n\n";
    std::cout<<"nota studentului la matematica este: "<<f1.getNota_matematica()<<"\n\n";
    std::cout<<"media studentului este: "<<f1.media()<<"\n\n";
    std::cout<<comp_nume(f1,f2)<<"\n\n";
    std::cout<<comp_medie(f1,f2)<<"\n\n";
    std::cout<<comp_nota_e(f1,f2)<<"\n\n";
    std::cout<<comp_nota_i(f1,f2)<<"\n\n";
    std::cout<<comp_nota_m(f1,f2)<<"\n\n";


    return 0;
}
