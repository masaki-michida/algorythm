#include <iostream>
#include <vector>

using namespace std;

int main() {
       
       int a,b;
       cin >> a >> b;

       vector<pair<int,int>> pair;

       for(int i = 0; i < a;i++){
              int x,y;
              cin >> x >> y;
              pair.push_back(make_pair(x,y));

       }

       int result = 0;

       for(int i = 1; i <= b;i++){
              for(int j = 0; j< a;j++){
                     int second = pair[j].second + i;
                     int temp = pair[j].first*second;
                     if(temp>result){
                            result = temp;
                     }
              }
              cout << result << endl;
              result = 0;
       }

}
