#include <iostream>
using namespace std;

int main() {
    
int i,j;
int n,m;
cin>>n>>m;

for(i=1; i<=n ; i++){
for(j=1; j<=m ; j++){
    if(i==1 || j==1 || i==n || j==m){
        cout<<"*\t";
    }
    else{
        cout<<"\t";
    }
  }
   cout<<endl;
}

    return 0;
}