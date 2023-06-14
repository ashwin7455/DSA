//sum of alternative plus minus series
#include <iostream>
using namespace std;

int main() {
    
int n ,sum=0, lastdigit;
 cin>>n;
int result =0 ;
for(int i =1 ; i<=n; i++){
    
    if(i%2==0){
        result=result-i;
    }
    else{
        result+=i;
    }
}
cout<<result<<endl;

    return 0;
}