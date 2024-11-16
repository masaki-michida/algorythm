#include <iostream>
#include <vector>
using namespace std;



int main() {
    int howstring,target1;
    string bin;
    cin >> howstring >> target1 >> bin;
    int cnt = 0;
    vector<vector<int>> vec(target1,vector<int>(0));
    for (int i = 0; i < howstring; i++)
    {
        if(cnt == target1){//修正箇所
            break;
        }
        if(bin[i] == '1'){
            vec[cnt].push_back(i);//reの原因cntで範囲外アクセス
            if (i+1 < howstring&&bin[i+1] == '0')
            {
                    cnt++;
            }
           
        } 
    }
    
    int target_ele = vec[target1-1].size();
    int target_start = vec[target1-1][0];
    int target_end_col = vec[target1-2].size()-1;
    int target_end = vec[target1-2][target_end_col]+1;
    
    for(int i = target_start;i<(target_start+target_ele);i++){
        bin[i] = '0';
    }

    for (int i = target_end; i < (target_end+target_ele); i++)
    {
        bin[i] = '1';
    }
    

    cout << bin << endl;
}

//方針
//二次元配列に1が連続してる部分の添え字を入れいて
//途中で0が来たら行を次に進めて格納していく
//指定された塊の番号を0に変えてその一つ前の行の番号から要素数分1にする

//re
//原因　vector<vector<int>> vec(target1,vector<int>(0));の部分
//target1は前に持っていきたい1の場所を示すので、そこから先の1の塊
//を格納する時vecが範囲外になる
//対策 cnt > target1になったらbreakするようにした
//vec(target1)なのでvec[cnt]の時に範囲外にならなくなった

//AC