#include <iostream>
#include <vector>
using namespace std;

int main() {
    //右方向の移動はプラスし続ける、左方向の移動はマイナスしつづける
    //もし,LとRが同じ数字になったら位置をリセットして逆方向に移動する
    //左方向に進んで値がマイナスになった場合マイナス地点に(N+1)を足すと時計と同じになる
    //右方向に進んで値がNより大きくなった場合、(Nｰ1)を引くと時計と同じになる
    //移動をカウントする変数に移動距離を入れていくマイナスになった場合絶対に変換する
    //悩みはL<R＜T、L＜R＜T、L＜T＜R、R＜L＜T、R＜T＜L、T＜R＜Lで条件分岐がふえ
    //さらに、最大値より大きくなった場合の、１より小さくなった場合の条件分岐が必要
    //さらに、RとLが同じ数字になった場合逆に行く分岐が必要で
    //複数の条件分岐が必要になる
    //モジュロ演算を使えば綺麗にまとまるらしい
    //1進めてN周期で割り余りが超えた分のになるのでそのマスに移動する

    int numbers = 0;
    int amount = 0;
    cin >> numbers, amount;

    char direction;
    int target = 0;
    int move_cnt = 0;
    int L = 1;
    int R = 2;
    int tmp = 0;

    for(int i = 0;i <amount;i++){
        
        cin >> direction >> target;

        if (direction == 'R')
        {   tmp = R;
            while (R != target)
            {
                if (R%numbers+1 != L)
                {
                    R = R%numbers+1;
                }else{
                    R = (R-2+numbers)%numbers+1;
                }
            
            }
            move_cnt = move_cnt + abs(tmp - R);
                
        }else if (direction == 'L')
        {
            tmp = L;
            while (L != target)
            {
                if (L%numbers+1 != R)
                {
                    L = L%numbers+1;
                }else{
                    L = (L-2+numbers)%numbers+1;
                }
                
            }
            move_cnt = move_cnt + abs(tmp - L+1)%numbers;
        }
    }
}