#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int sum_enelgy(vector<int> x,int p){
    int sum = 0;
    for(int xi : x)
    {
        sum += pow((xi-p),2);
    }
    return sum;
}
//全参加者の位置を渡してｐの値によって合計が変わる二次関数

int ternarysearch(int left, int right, vector<int> positions){
    
    while(right - left > 2){

        int m1 = left + (right - left) / 3;
        int m2 = right - (right - left) / 3;

        int f1 = sum_enelgy(positions,m1);
        int f2 = sum_enelgy(positions,m2);

        if(f1 < f2){
            right = m2;
        }else{
            left = m1;
        }
    }
    //do while(f1 != f2)のほうが関数が思い浮かびやすいけどf1f2はローカルなのでできない
    return (left + right) / 2;


}

int main() {
    int participants = 0;
    
    cin >> participants;

    vector<int> participants_addres(participants);

    for(int i =0; i < participants; i++)
    {
        cin >> participants_addres[i];
    }

    int min_position = *min_element(participants_addres.begin(),participants_addres.end());
    int max_position = *max_element(participants_addres.begin(),participants_addres.end());

    int best_position = ternarysearch(min_position,max_position,participants_addres);//三分探索で最小のPを求める
    int total_energy = sum_enelgy(participants_addres,best_position);//開催地までの総距離を求める

    cout << total_energy << endl;
}

//AC
///両端の座標から中心を求める
//点が寄っている場所に開催地を定める(点が多い場所によっていくと総距離は減るから)
//上記の考えだと求められない
//解説を確認したら三分探索を使うと解けるとあった
//三分探索は二次関数に対して使える解法で右端と左端を徐々に狭めていき値が最小になる点を求める
//プログラムで二次関数を表現する方法は自分で関数を作成すること