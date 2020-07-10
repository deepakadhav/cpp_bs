#include<iostream>
using namespace std;

int main(){

    int numArray[] = {1,34,54,34,56,32,78};
    int i,j,flag=0;
    int sizeOfArray = -1;

    sizeOfArray = sizeof(numArray)/sizeof(numArray[0]);

    //logic for duplicate entry


    for(i=0;i<sizeOfArray;i++){
        for(j=i+1;j<sizeOfArray;j++){

            if(numArray[i] == numArray[j] && i!=j)
                cout<<"\n We Found Duplicate Number at "<<i<<" and "<<j<<" Value "<<numArray[i];
                flag=1;

        }
    }


    
    

    cout<<endl;

    if (flag==0)
    {
        /* code */
        cout<<"\nWe didn't found any duplicate in array";
    }
    
}