#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    char str[100];
    int i, totalChar;
totalChar=0;
    cout<<"Please enter the string for character counts\n";
    gets(str);

    for(i=0; str[i] !='\0'; i++){
        if(str[i] !=' ') //prevents spaces from being counted
        {
            totalChar++;
        }
        i++;
    }
    cout<<"The total characters of the given string= " << totalChar;
    getch();
    return 0;
}