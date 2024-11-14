#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main(){
	vector<int> bingo_card(9,0);

	for(int i = 0; i<9; i++){
		cin >> bingo_card[i];
	}
	int N;
	cin >> N;
	vector<int> bingo_bucket(N,-1);
	vector<int> bingo(N, 0);
	for(int i = 0; i<N; i++){
		cin >> bingo[i];
	}
	
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j <= 9; ++j)
		{
			if(bingo_card[j] == bingo[i]){
				bingo_bucket.push_back(j);
			}
		}
	}

	sort(bingo_bucket.begin(), bingo_bucket.end());

	vector<vector<int>> bingo_pattern = {
		{0,1,2},
		{3,4,5},
		{6,7,8},
		{0,3,6},
		{1,4,7},
		{2,5,8},
		{0,4,8},
		{2,4,6}
	};
	
	for(vector<int> pattern: bingo_pattern){
		if(includes(bingo_bucket.begin(), bingo_bucket.end(), pattern.begin(), pattern.end())){
			cout << "Yes" << endl;
			return 0;

		}
	}

	cout << "No" << endl;

}

//ビンゴのパターンの組み合わせを比較する方法が分からなかったのでcopilotに教えてもらった。
//includes関数で比較することで、ビンゴのパターンが揃っているかどうかを判定することができる。
//bingo_bucketの初期値に0を入れて(0,1,2)のパターンが1,2が入ってる時点でビンゴ判定されていたので
//bingo_bucketの初期値に-1を入れることで解決した。