#include <bits/stdc++.h>
using namespace std;
 //一つの駒につき8マスが危険になるので全体のマスから駒の数×8を引けばいい
 //ただし、駒を動かしたときに盤面の範囲外になるものはカウントできない
 //複数の駒の到着地点が同じマスの場合重複してカウントされてしまう
 //入力で与えられた駒を動かした位置が範囲外になっていないかチェック
 //重複のチェック

int main(){
    int numbers_nights,bord_size;
    cin >> bord_size >> numbers_nights;
    //マイナスになるかNより大きくなる場合盤上の範囲外になる
    vector<vector<int>> nights(numbers_nights,vector<int>(2));
    int row, col;
    for(int i = 0; i < numbers_nights; i++){
        cin >> row >> col;
        nights[i][0] = row;
        nights[i][1] = col;
    }

    int danger_space_cnt = 0;
    
    vector<vector<int>> night_moves = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
    vector<vector<int>> night_next_positions = nights;
    for (vector<int> night : nights)
    {
        int night_position_x = night[0];
        int night_position_y = night[1];
        for (vector<int> move: night_moves)
        {
            int total_move_x = night_position_x + move[0];
            int total_move_y = night_position_y + move[1];
            //盤面の範囲内にいるかチェック
            if((total_move_x <= bord_size&&1 <= total_move_x)&&(total_move_y <= bord_size&&1 <= total_move_y)){
                //重複していないかチェック
                for (vector<int> night_next_position : night_next_positions)
                {
                    int night_next_position_x = night_next_position[0];
                    int night_next_position_y = night_next_position[1];
                    if((night_next_position_x == total_move_x) && (night_next_position_y == total_move_y)){
                        night_next_positions.push_back({total_move_x,total_move_y});
                    }
                }
            
            }
        }
        
        
    }
    int result = bord_size*bord_size - danger_space_cnt;
    cout << result << endl; 
    
    
}