#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main() {
    int round,rating;
    cin >> round >> rating;

    vector<pair<int,int>> divandrate(round);

    for(int i = 0; i < round; i++){
        cin >> divandrate[i].first >> divandrate[i].second;
    }

    for(int i = 0; i < round; i++){
        if(divandrate[i].first == 1){
            if(rating<=2799&&rating>=1600){
                rating += divandrate[i].second;
            }
        }else if(divandrate[i].first == 2){
            if(rating<=2399&&rating>=1200){
                rating += divandrate[i].second;
            }
        }
    }

    cout << rating << endl;
    
}