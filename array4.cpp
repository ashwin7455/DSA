#include <iostream>
using namespace std;


int main() {
int arr[] = {44,12,56,46};
    
int max=arr[0];
for (int i=0; i<4 ; i++) {
    if(arr[i]> max){
        max =arr[i];
    }
}
cout<<max;
    
    return 0;
}