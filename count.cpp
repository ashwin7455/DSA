//count the no. of digit in a number
#include <iostream>
using namespace std;

int main() {
    
int n ,sum=0, lastdigit;
 cin>>n;
//  int digits=0;
 while(n>0){
    int lastdigit = n%10;
    sum=sum+lastdigit;
    n=n/10;
    
    
 }
 cout<<sum<<endl;

    return 0;
}