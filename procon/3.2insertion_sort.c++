#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];    
    }
    for(int i = 0; i < n; i++){
        cout << a[i];
        if(i<n-1) cout << ' ';
    }
    cout << '\n';
    
    for(int i = 1; i < n ; i++){
        int v = a[i];
        int j = i - 1;
        while(v<a[j]&&j>=0){
            a[j+1]= a[j];
            j--;
        }
        a[j+1] = v;
        for(int i = 0; i < n; i++){
            cout << a[i];
            if(i<n-1) cout << ' ';
        }
        cout << '\n';
    }
    
}

//for(int x: a)の書き方は速度が遅い
//範囲ベースの for ループは、内部的にイテレータを使用するため、若干のオーバーヘッドが発生することがあります。
//要素がコピーされるため、大きなオブジェクトの場合、コピーのオーバーヘッドがパフォーマンスに影響を与えることがあります。
//インデックスベースのループは、メモリの連続した領域にアクセスするため、キャッシュの効率が良くなることがあります。