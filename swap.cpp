#include <iostream>
using namespace std;

int main() {
   int a ,b ,temp;
   cout<<"value of a:";
   cin >> a;
   
   cout<<"value of b:";
   cin>>b;
    
    temp = a;
    a = b;
    b = temp;
    
    cout<<"after swapping"<<endl;
    cout<<"the value of a :"<<a<<endl;
    cout<<"the value of b :"<<b<<endl;

    return 0;
}