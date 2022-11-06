#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){




    vector<int> v(5);


    //for loop
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    
    cout<<"Enter X: ";
    int x;
    cin>>x;
    

    //Transversing from 1st element
    int occurences= 0;
    for(int ele:v){
        if(ele==x){
           occurences++;
        }
    }
    cout<<occurences<<endl;
    





 
 return 0;
}