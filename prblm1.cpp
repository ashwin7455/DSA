#include<iostream>
using namespace std;
//start
int firstOcc(int arr[], int n, int key){

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if (key > arr[mid]){ //right wale part me jao
          s = mid + 1;
        }
        else if (key < arr[mid]){ //left wale part me jao   

        }
        mid = s + (e-s)/2;

        return ans;

    }
}

int main(){
    int even[5] = {1,2,3,3,5};
   
    cout<< " first occurrence of 3 is at index " << firstOcc(even,5,3)<<endl;


return 0;
}
