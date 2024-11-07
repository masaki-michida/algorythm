#include <iostream>
#include <vector>
using namespace std;

int main() {
    int total_pushes = 0;
    int count_limit = 0;
    cin >> total_pushes >> count_limit;
    vector<int> pushes_seconds(total_pushes);

    for (size_t i = 0; i < total_pushes; i++)
    {
        cin >> pushes_seconds[i];
    }
    
    int get_candies_count = 1;
    int current_time = pushes_seconds[0];

    for (size_t i = 1; i < total_pushes; i++)
    {
       
        int time_distance = pushes_seconds[i] - current_time;
        
        if (time_distance >= count_limit)
        {
            get_candies_count++;
            current_time = pushes_seconds[i];
        }
        
    }
    cout << get_candies_count << endl;
}