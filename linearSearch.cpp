#include <iostream>
using namespace std;

//linear search
int main() {
int arr[] = {44,12,56,46};
int ans=-1;
    int key = 12;
 for(int i=0 ; i<4 ; i++){
    if(arr[i]==key){
        ans=i;
        break;
    }
 }

 cout<<ans;
    
    return 0;
}