#include <iostream>

using namespace std;

int main() {
       string a;
       for(int i = 0; i < 3;i++){
              char c;
              cin >> c;
              a += c;
       }
       int num1 = a[0] - '0';
       int num2 = a[2] - '0';
       int result = num1 * num2;

       cout <<result<<endl;
}
