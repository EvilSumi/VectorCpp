#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int array[]={1,2,1,2,1,2,1,2,1,2,1,2,1,2};
    int size=sizeof(array)/sizeof(array[0]);


    
    int ans=0;
    for(int i=0;i<size;i++){
        if(i%2==0){
           ans+=array[i];
        }
        else{
            ans-=array[i];
        }
    }
    cout<<ans<<endl;
    





 
 return 0;
}