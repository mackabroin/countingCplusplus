#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int arr[100];
    int i,size,odd=0, even=0;

    //input the size of the array
    cout<<"Enter the size of the array\n";
    cin>>size;//read user input for array size

    i=0;
    while(i<size)
    {
        if(arr[i]%2==0){
            even++;
        }

        else{
            odd++;
        }
        i++;
    }

    cout<<"\nTotal even numbers of an array: " <<even<<"\n";
    cout<<"Total odd numbers of an array: "<<odd;
        getch();
        return 0;
}