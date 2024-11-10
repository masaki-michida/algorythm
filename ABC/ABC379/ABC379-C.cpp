#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x,y;
    cin >> x >> y;
    vector<int> space(x, 0);
    vector<int> where_filled(y, 0);

    for (int i = 0; i < y; i++)
    {
        cin >> where_filled[i];
    }

    for (int i = 0; i < y; i++)
    {
        cin>>space[where_filled[i]-1];
    }
    
    int sum = 0;
    for (int i : space)
    {
        sum += i;
    }//マスの数が石の総数より少ない時

    if (sum < x)
    {
        cout << -1 << endl;
        return 0;
    }
    
    

    int space_count = -1;
    int operation_count = 0;

    for (int i = x-1; 0 <= i; i--)
    {
        space_count++;
       if (space[i] != 0)
       {
            if (space[i] >= space_count)
            {
                for (int j = i+space_count; i<j  ; j--)
                {
                    space[j]++;
                    operation_count = operation_count + j -i;
                }
                space[i] = space[i] - space_count;
                space_count = -1;
            }else
            {
                cout << -1 << endl;
                return 0;
            }
            
       }
       
    }
    cout << operation_count << endl;

}

//RE MLE