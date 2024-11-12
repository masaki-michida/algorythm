#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n = 0;
    cin >> n;
    int count = 0;

    for (int i = 1; i <=n ; i++)
    {
        if(i%2 != 0){
            if (i%3 != 0)
            {
                cout << i << endl;
            }
            
        }
    }

 
}