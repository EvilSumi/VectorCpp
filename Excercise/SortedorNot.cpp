#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int array[]={1,2,3,4,5,6};
    int size=sizeof(array)/sizeof(array[0]);


    
    bool sortedflag= true;
    for(int i=1;i<size;i++){
        if(array[i]<=array[i-1]){
           sortedflag=false;
        }
    }
    cout<<sortedflag<<endl; //1
    





 
 return 0;
}