#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int moves = 0;
    cin >> moves;
    vector<vector<int>> positions(moves+2, vector<int>(2));

    for (int i = 1; i <= moves; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> positions[i][j];
        }
        
    }


    double ans = 0;
    for (int i = 0; i <= moves; i++)
    {
       double x = (positions[i+1][0]-positions[i][0]);
       double y (positions[i+1][1]-positions[i][1]);
       ans += sqrt(x*x + y*y);
        
    }
    
    cout<<fixed<<setprecision(20);
    cout << ans<< endl;
}