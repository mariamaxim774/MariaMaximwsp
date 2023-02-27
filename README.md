# MariaMaximwsp

#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;


problema 1
int main()
{
    FILE *f;
    f=fopen("in.txt","r");
    char c[100];
    int y=0;
    int i=0,p=1;
    int s=0;
    fgets(c,100,f);
    while(strcmp(c,"")!=0)
    {
     y=0;
     for(i=0;i<strlen(c)-1;i++)
       y=c[i]-'0'+y*10;
    s=s+y;
    strcpy(c,"");
    fgets(c,100,f);
    }
    printf("%i",s);
    fclose(f);
    return 0;

}

problema 2

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[200][200];
    char sir[200];
    int n=-1;
    scanf(" %[^\n]s", sir);
    char *p= strtok(sir," ");
    while(p != NULL)
    {
        n++;
        strcpy(c[n],p);
        p=strtok(NULL," ");
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(strlen(c[i])<strlen(c[j]))
            {
                char aux[200];
                strcpy(aux,c[i]);
                strcpy(c[i],c[j]);
                strcpy(c[j],aux);
            }
            if(strlen(c[i])==strlen(c[j]))
                if(strcmp(c[i],c[j])>0)
                {
                    char aux[200];
                    strcpy(aux,c[i]);
                    strcpy(c[i],c[j]);
                    strcpy(c[j],aux);
                }
        }
    }
    for(int i=0; i<=n; i++)
    {
        printf("%s",c[i]);
        printf("\n");
    }
    return 0;
}

problema 3
#include <iostream>

using namespace std;



bool isPrime(int n)

{

    for (int tr = 2; tr < n / 2 + 1 ; tr++)

        if ((n % tr ) == 0)

            return false;

    return true;

}

int main()

{

    int n;

    std::cout << "Enter a number:";

    std::cin >> n;

    if (isPrime(n))

        std::cout << n << " is prime !";

    else

        std::cout << n << " is NOT prime !";

    return 0;

}



