#include <iostream>
#include <vector>

using namespace std;

int main() {

       long long a = 0;
       long long b = 1;
       int result = 0;
       cin >> a;

       for(int i = 2; b!=a; i++) {
              b = b*i;
              result = i;
       }

       cout << result << endl;
}
