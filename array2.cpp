#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    // cout<<sizeof(arr)<<endl;
    
    // cout<<sizeof(arr)/sizeof(arr[0])<<endl;
         int size = sizeof(arr)/sizeof(arr[0]);
     for(int i=0 ; i<size ; i++){
        cout<<arr[i];
     }








    return 0;
}