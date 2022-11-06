#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){




    vector<int> v(6);


    //for loop
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    
    cout<<"Enter X: ";
    int x;
    cin>>x;
    

    //Transversing from 1st element
    int occurencefromfirst= -1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
           occurencefromfirst=i;
        }
    }
    cout<<occurencefromfirst<<endl;
    
    

    //Transversing from Last element
    int occurencefromlast= -1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
           occurencefromlast=i;
           break;
        }
    }
    cout<<occurencefromlast<<endl;





    







 
 
 
 
 
 
 
 return 0;
}