//方針
//二次元配列使えますかって問題

#include <iostream>
#include <vector>
using namespace std;

int main(){
	int row, col, fix;
	cin >> row >> col >> fix;
	vector<vector<int>> source(row,vector<int>(col));
	vector<int> primal(col);

	int sum_code = 0;
	int pass_result = 0;

	for (int i = 0; i < col; i++)
	{
		cin >> primal[i];
	}
	

	for(int i =0;i<row;i++){
		for(int j = 0;j<col;j++){
			cin >> source[i][j];
		}
	}

	for(vector<int> code: source){

		for(int i = 0;i<col;i++){
			sum_code += code[i]*primal[i];
		}
	
		if(sum_code + fix > 0){
			pass_result++;
		}
		sum_code = 0;
	}

	cout << pass_result << endl;

}