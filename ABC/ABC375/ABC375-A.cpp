#include <iostream>
#include <string>
using namespace std;

int main() {
    int sheats = 0;
    string seated;
    string pattern = "#.#";
    int cnt = 0;
    cin >> sheats >> seated;
    
    if(sheats>=3){
        for (int i = 0; i+2< sheats; i++){
        

            char a = seated[i];
            char b = seated[i+1];
            char c = seated[i+2];

            string abc = string(1,a)+string(1,b)+string(1,c);

            if (abc == pattern)
            {
                cnt++;
            }
        
        }
    }else{
        cout << 0 << endl;
        return 0;
    }
    
cout << cnt << endl;

}