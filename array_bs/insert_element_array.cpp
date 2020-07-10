#include<iostream>
using namespace std;

int main(){

    int array[10];
    int i,val,pos;
    int l_ind=0,u_ind=9;
    int len_arry=-1;

    len_arry = sizeof(array)/sizeof(array[0]);

    cout<<"\nlength of array:-"<<len_arry;

    //print a array
    cout<<"\nArray Elements Before:-";
    for(i=0;i<len_arry;i++)
        cout<<array[i]<<"\t";
    cout<<endl;
        
    cout<<"\n---------------------------------------------";
    cout<<"\n---------------------------------------------";

    cout<<"\nEnter a position and value to be inserted:-";
    cin>>pos>>val;

    if(pos<l_ind || pos>u_ind){
        cout<<"\nCannot Insert Position outof Index";
    }
    else
    {
        

        for(i=6;i>=pos;i--){
            array[i+1] = array[i];
        }

        array[pos] = val;
        

        cout<<"\n---------------------------------------------";
        cout<<"\n---------------------------------------------";
       
        cout<<"\nArray Elements After:-";
        for(i=0;i<len_arry;i++){
            cout<<array[i]<<"\t";
        }
            
        cout<<endl;
        
    
    }
    

}