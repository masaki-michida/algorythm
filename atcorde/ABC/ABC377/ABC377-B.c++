#include <bits/stdc++.h>
using namespace std;

int main(){
    //文字列型の二次元配列で盤上を受け取る？受け取らなくてもforループでそのまま判定すればいい
    //何行目何列目に#があるかが知りたい、二重forにして
    //何行目に#がいくつあるか受け取る配列と何列目に#がいくつあるか受け取る配列に格納する
    //行と列の配列の０以外の要素の個数をカウントしする
    //一つのマスに#を置いたら縦横どちらも置けなくなるので行の配列縦の配列それぞれに8をかける
    //重複して数えているので上記の方針は廃止
    //配列を二つ用意して、一つ目に初期の盤面を受け取り、もう一つに#が動く盤面を受け取る
    //#が動く盤面の#の数をカウントして64から引いたら完了
    vector<vector<char>> initial_field(8,vector<char>(8));
    vector<vector<char>> next_field = initial_field;
    for(int row = 0;row <8;row++){
        for (int col = 0; col < 8; col++)
        {
            cin >> initial_field[row][col];

            if(initial_field[row][col] == '#'){
                for (int i = 0; i < 8; i++)
                {
                    next_field[row][i] = '#';
                    next_field[i][col] = '#';
                }
                
            }
        }
        
    }

    int sharp_cnt= 0;

    for (vector<char> out : next_field)
    {
        for(char in : out){
            if(in == '#'){
                sharp_cnt++;
            }
        }
        
    }
    int result = 64 - sharp_cnt;
    cout << result << endl;
}
