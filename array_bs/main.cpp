#include<iostream>
#include <exception>
using namespace std;
#include "class_array.cpp"



int main(){
    Array numAry(3);

    try{
        
        numAry.insert(10);
        numAry.insert(13);
        numAry.insert(14);
        
        cout<<"\n ================Before Delete At ============ "<<endl;
        
        numAry.print();

        cout<<"\n ================After Reverse At ============ "<<endl;

        //numAry.removeAt(2);
        numAry.reverse();
        numAry.print();

        cout<<"\nMax in Array:-"<<numAry.max();

        
    }
    catch(const char* msg){
        cout<<msg<<endl;
    }
    return 0;

}
