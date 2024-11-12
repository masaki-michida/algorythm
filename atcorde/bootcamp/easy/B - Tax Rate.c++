//方針
//与えられた値を1.08で割る
//割った値とその両隣の値に1.08をかける(重要な発想)
//そのうちどれかが与えられた値と同じなら
//与えられた値の税抜き金額は存在する

#include <iostream>
using namespace std;

int main(){
	int taxed = 0;
	cin >> taxed;
	
	int retaxed_c = static_cast<int>(taxed / 1.08);
	int retaxed_p = retaxed_c+1;
	int retaxed_m = retaxed_c-1;
	
	if(taxed == static_cast<int>(retaxed_c*1.08)){
		cout << retaxed_c<<endl;
	}else if(taxed == static_cast<int>(retaxed_p*1.08)){
		cout << retaxed_p<<endl;
	}else if(taxed == static_cast<int>(retaxed_m*1.08)){
		cout << retaxed_m<<endl;
	}else{
		cout << ":("<<endl;
	}
}