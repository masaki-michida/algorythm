#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
  int num = 0;
  vector<pair<int,int>> snakes;
  cin >> num;

  pair<int, int> p[num];
  int cmd = 0;
  for (int i = 0; i < num; i++) {
    cin >> cmd;
    if(cmd==2){
    p[i].first = cmd;
    p[i].second = 0;
    }else{
      p[i].first = cmd;
      cin  >> p[i].second;
    }
  }

  int head_snake = 0;

  for(int i = 0; i < num; i++){

    if(p[i].first == 1){
      if(snakes.empty()){
        snakes.push_back({0, p[i].second - 1});
      }else{
        int snake_head = snakes.back().second + 1;
        snakes.push_back(make_pair(snake_head,snake_head+p[i].second - 1));
      }
    }else if(p[i].first == 2){
      int minus = snakes[head_snake].second - snakes[head_snake].first + 1;
      for(int i = head_snake + 1; i < snakes.size(); i++){
        snakes[i].first -= minus;
        snakes[i].second -= minus;
      }
      head_snake++;
    }else if(p[i].first == 3){
      int target_snake = 0; 
      target_snake = p[i].second - 1 + head_snake;
      cout << snakes[target_snake].first << endl;
    }



  }

}