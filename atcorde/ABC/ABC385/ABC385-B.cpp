#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int w,h,x,y;
    cin >> h >> w >> x >> y;
    vector<vector<char>> matrix(h,vector<char>(w));
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> matrix[i][j];
        }
    }
    string movement;

    cin >> movement;

    int total_move = movement.size();
    
    x = x - 1;
    y = y - 1;
    int tmp_pos_x = x;
    int tmp_pos_y = y;
    int count = 0;
    bool flag = true;
    vector<pair<int, int>> path = {{-1,-1}};


    for(int i = 0; i < total_move;i++){
        if(movement[i]=='U'){
            tmp_pos_x = tmp_pos_x - 1;
            if(matrix[tmp_pos_x][y]=='#'){
                tmp_pos_x = x;
            }else if(matrix[tmp_pos_x][y]=='.'){
                x = tmp_pos_x;
            }else if(matrix[tmp_pos_x][y]=='@'){
                x = tmp_pos_x;
                for(int i = 0; i < path.size();i++){
                    if(path[i].first == x && path[i].second == y){
                        flag = false;
                    }
                }
                if(flag){
                    count++;
                    path.push_back(make_pair(x,y));
                }
                flag = true;
            }
        }else if(movement[i]=='D'){
            tmp_pos_x = tmp_pos_x + 1;
            if(matrix[tmp_pos_x][y]=='#'){
                tmp_pos_x = x;
            }else if(matrix[tmp_pos_x][y]=='.'){
                x = tmp_pos_x;
            }else if(matrix[tmp_pos_x][y]=='@'){
                x = tmp_pos_x;
                for(int i = 0; i < path.size();i++){
                    if(path[i].first == x && path[i].second == y){
                        flag = false;
                    }
                }
                if(flag){
                    count++;
                    path.push_back(make_pair(x,y));
                }
                flag = true;
            }
        }else if(movement[i]=='L'){
            tmp_pos_y = tmp_pos_y - 1;
            if(matrix[x][tmp_pos_y]=='#'){
                tmp_pos_y = y;
            }else if(matrix[x][tmp_pos_y]=='.'){
                y = tmp_pos_y;
            }else if(matrix[x][tmp_pos_y]=='@'){
                y = tmp_pos_y;
                for(int i = 0; i < path.size();i++){
                    if(path[i].first == x && path[i].second == y){
                        flag = false;
                    }
                }
                if(flag){
                    count++;
                    path.push_back(make_pair(x,y));
                }
                flag = true;
            }
        }else if(movement[i]=='R'){
            tmp_pos_y = tmp_pos_y + 1;
            if(matrix[x][tmp_pos_y]=='#'){
                tmp_pos_y = y;
            }else if(matrix[x][tmp_pos_y]=='.'){
                y = tmp_pos_y;
            }else if(matrix[x][tmp_pos_y]=='@'){
                y = tmp_pos_y;
                for(int i = 0; i < path.size();i++){
                    if(path[i].first == x && path[i].second == y){
                        flag = false;
                    }
                }
                if(flag){
                    count++;
                    path.push_back(make_pair(x,y));
                }
                flag = true;
            }
        }
    }

    cout <<x+1<<" "<<y+1<<" "<<count << endl;
}