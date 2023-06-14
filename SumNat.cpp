// PRINT THE SUM OF N NATURAL NUMBER
#include <iostream>
using namespace std;

int main() {
    int n ,i , sum =0;
    cin>>n;
    
    //while loop
     while(i<=n){
         sum=sum+i;
         i++;
     }
      cout<<sum<<endl;

       //for loop 
     for(int i ; i<=n ; i++){
      sum += i;
    }  
     cout<<sum<<endl;
    


    return 0;
}