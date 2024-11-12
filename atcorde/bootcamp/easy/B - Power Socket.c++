#include <iostream>
using namespace std;

int main() {
    int addsocket,targetsocket;
    cin >> addsocket >> targetsocket;
    int count = 0;
    int totalsocket = 0;

    if (targetsocket != 1)
    {
    
        for (int i = 0; totalsocket<(targetsocket-addsocket); i++)
        {
            count++;
            totalsocket += addsocket -1;

        }
        count++;
    }

    cout << count << endl;
    
}

//ACだけどテストケース見た。
//必要な差込口が一つだけのパターン考えるならそもそもこんな問題は不要