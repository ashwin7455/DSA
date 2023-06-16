#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    cout<<sizeof(arr)<<endl;
    
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    
    int arr2[4];
    cout<<arr2[0]<<endl;        
    cout<<arr2[1]<<endl; 
    cout<<arr2[2]<<endl; 
    cout<<arr2[3]<<endl; //output giving garbage value 
    // cout<<arr[4]<<endl; 






    return 0;
}