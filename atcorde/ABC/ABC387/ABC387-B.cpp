#include <iostream>

using namespace std;

int main() {
       int a;
       cin >> a;

       int result = 0;
       for(int i = 1; i<10;i++){
              for(int j = 1;j<10;j++){
                     if(i*j != a){
                            result = result + i*j;
                     }
              }
       }

       cout << result << endl;
}
