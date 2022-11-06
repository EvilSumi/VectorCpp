#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){


    vector<int> v(6);


    //for loop
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    
    cout<<"Enter X: ";
    int x;
    cin>>x;
    

    //Transversing from 1st element
    int count= 0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x){
           count++;
        }
    }
    cout<<"Total numbers greater than X:"<<count<<endl; 
    





 
 return 0;
}