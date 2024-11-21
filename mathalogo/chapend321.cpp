#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int n = 0;
    cin >> n;

    vector<int> v(n,0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int a = v[0];
    int b = v[1];
    int temp = 0;
    //ユークリッドの互除法
    while(a%b != 0){
        temp = a%b;
        a = b;
        b = temp;
    }

    //与えられる数字が複数の場合のユークリッド
    if(n>=3){
        for(int i = 2; i <n; i++){
            temp = v[i]%b;
            a = b;
            b = temp;
            if(a%b == 0){
                break;
            }
        }
    }

    //配列内のすべての積を求める
    int multiple = 1;
    for(int x : v){
        multiple *= x;
    }

    //複数の整数の積と、それらの最大公約数と最小公倍数の積は等しいので
    //配列内の積と最大公約数の商が最小公倍数
    cout <<multiple/b << endl;

}