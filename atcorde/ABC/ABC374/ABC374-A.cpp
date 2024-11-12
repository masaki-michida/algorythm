#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string name;
    cin >> name;
    string reversed_name = name;
    reverse(reversed_name.begin(), reversed_name.end());
    string top3 = string(1,reversed_name[0])+string(1,reversed_name[1])+string(1,reversed_name[2]);

    if (top3 == "nas")
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    
}