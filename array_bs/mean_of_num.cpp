#include<iostream>
using namespace std;

int main(){

    
    int index=0,noOfElement,sizeOfArray=10;
    int num[sizeOfArray]={-1};
    int sum=0;
    float mean=0.0;

    //read from terminal 
    cout<<"\nEnter a No. of Elements";
    cin>>noOfElement;

    if(noOfElement>sizeOfArray){
        cout<<"\n Number of element is more than array size";
        
    }
    else{

        cout<<"\nEnter a Elements:-";
        for(index=0;index<noOfElement;index++)
            cin>>num[index];


        //print a array
        cout<<"Array Elements:-";
        for(index=0;index<noOfElement;index++)
            cout<<num[index]<<"\t";
        cout<<endl;
        
        for (index = 0; index < noOfElement; index++)
        {
            sum+=num[index];
        }

        mean = (float)sum/noOfElement;

        cout<<"\n Mean of array numbers:- "<<mean<<endl;

        
    }

    
}