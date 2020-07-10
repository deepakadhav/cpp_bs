#include<iostream>
#include<math.h>
using namespace std;


int main(){

    int digits[10], noDigits;
    int num=0,i;

    cout<<"\nEnter a no. of Digits:-";
    cin>>noDigits;
    cout<<"\nEnter Digits:-";

    for (i = 0; i < noDigits; i++)
    {
        /* code */
        cin>>digits[i];
    }

    //convert it into number
    i=0;

    while (i<noDigits)
    {
        num = num + digits[i] * pow(10,i);
        i++;
    }

    cout<<"\nNumber is :-"<<num;
    
}