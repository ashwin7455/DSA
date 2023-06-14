//number between 1 to 50 except multiple of 3
#include <iostream>
using namespace std;

int main() {
    
   int i =1;
   for(int i ; i<50 ; i++){
      if(i%3==0){
          continue;
      }
          cout<< i <<endl;
   }
    return 0;
}