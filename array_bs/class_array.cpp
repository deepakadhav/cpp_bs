#include<iostream>
#include <exception>
using namespace std;

class Array
{
private:
    
    int *array;
    int count=0;
    int sizeOfArray=-1;
public:
    
    Array(int);
    ~Array();

    void insert(int);
    void print();
    void insertAt(int,int);
    void resizingArray();
    void removeAt(int);
    void reverse();
    int max();

};


// constructor and destructor
Array::Array(int size)
{
    array = new int[size];
    sizeOfArray = size; 
}



Array::~Array()
{
}

int Array::max(){

    int max = array[0];

    for (int i = 0; i < count; i++)
    {
        /* code */
        if(max < array[i])
            max = array[i];

    }

    return max;
    

}

void Array::reverse(){
    int *newArray = new int[count];

    for (int i = 0; i < count; i++)
    {
        /* code */
        newArray[i] = array[count-i-1];
    }

    array = newArray;
    
}

void Array::removeAt(int index){
    if(index<0 || index>count)
        throw "Remove Index is out of bound";
    
    //checking resizing reauired 

    if(count == sizeOfArray){
        resizingArray();
    }

    for (int i = index; i < count; i++)
    {
        array[i]=array[i+1];
    }
    count--;
    
}

void Array::insertAt(int value,int index){

    if(index < 0 || index>sizeOfArray){
      throw "index outof bound";
    }

    if(count == sizeOfArray)
        resizingArray();

    for (int i = count-1; i>=index; i--)
    {
        array[i+1] = array[i];
    }
    
    array[index] = value;
    count++;

}

void Array::insert(int value){

// logic for resize of array
    if(count==sizeOfArray){
        resizingArray();
    }
    array[count] = value;
    count++;

}


void Array::print(){
    cout<<"[";
    for (int i = 0; i < count; i++)
    {
        cout<<array[i]<<",";
    }
    cout<<"]"<<endl;

}

void Array::resizingArray(){
    int *newArray = new int[sizeOfArray*2];

        for (int i = 0; i < count; i++)
        {
            newArray[i]=array[i];
        }

        array = newArray;
        sizeOfArray = sizeOfArray*2;
}

