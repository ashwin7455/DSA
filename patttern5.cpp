// alternative 1 and 2
#include <iostream>
using namespace std;

int main() {
    
int n;
cin>>n;

int i,j;
for(i = 1; i<=n ; i++){
    
   for(j= 1 ; j<=n ; j++){
       if((i+j) % 2 == 0){
           cout<<"1 ";
       }
       else{
           cout<<"2 ";
       }
}
cout<<endl;
}


    return 0;
}