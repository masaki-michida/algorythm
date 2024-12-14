#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main() {
    
    vector<pair<char, int>> playersandscores(5);
    for(int i = 0; i < 5; i++){
        playersandscores[i].first = 'A' + i;
        cin >> playersandscores[i].second;
    }

    vector<pair<string, int>> playersandscores2;

    for(int i = 0; i<5; i++){
        playersandscores2.push_back(make_pair(string(1, playersandscores[i].first),playersandscores[i].second));
    }

    for(int i = 0; i<4; i++){
        for(int j = i+1; j<5;j++){
            string members = string(1, playersandscores[i].first) + string(1, playersandscores[j].first);
            playersandscores2.push_back(make_pair(members,playersandscores[i].second + playersandscores[j].second));
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = i+1; j<4;j++){
            for(int k = j+1; k<5;k++){
                string members = string(1, playersandscores[i].first) + string(1, playersandscores[j].first)+ string(1, playersandscores[k].first);
                playersandscores2.push_back(make_pair(members,playersandscores[i].second + playersandscores[j].second+playersandscores[k].second));
            }
        }
    }

    for(int i = 0; i<2; i++){
        for(int j = i+1; j<3;j++){
            for(int k = j+1; k<4;k++){
                for(int l = k+1;l<5;l++){
                    string members = string(1, playersandscores[i].first) + string(1, playersandscores[j].first)+ string(1, playersandscores[k].first)+string(1, playersandscores[l].first);
                    playersandscores2.push_back(make_pair(members,playersandscores[i].second + playersandscores[j].second+playersandscores[k].second+playersandscores[l].second));
                }
            }
        }
    }

    playersandscores2.push_back(make_pair("ABCDE",playersandscores[0].second+playersandscores[1].second+playersandscores[2].second+playersandscores[3].second+playersandscores[4].second));

     sort(playersandscores2.begin(), playersandscores2.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second != b.second) {
            return a.second > b.second; // 数字は降順
        }
        return a.first < b.first; // 文字列は昇順
    });

    for(int i = 0; i<playersandscores2.size();i++){
        cout << playersandscores2[i].first << endl;
    }
}