#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

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

