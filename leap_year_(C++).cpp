//check that year is leap or not.
#include<iostream>
using namespace std;

int main(){
    
    int year=0;
    
    cout<<"Enter a year:-";
    cin>>year;
    
    if(year%100==0){
        
        if(year%400 ==0)
            cout<<"\nIt\'s a leap year";
    }
    else{
        if(year%4==0)
            cout<<"\nIt\'s a leap year";
    }
    
    return 0;
}
