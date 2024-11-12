#include <iostream>
using namespace std;

int main() {
    int a,b,c,temp;
    cin >> temp;

    c = temp % 10;
    b = (temp % 100 - c)/10;
    a = (temp - b - c)/100;
    int result1 = b*100 + c*10 + a;
    int result2 = c*100 + a*10 + b;
    cout<<result1<<" "<<result2<<endl;

}
//AC