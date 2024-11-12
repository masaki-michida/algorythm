class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
    int scale = grid.size();
    int max_xz = 0;
    int max_yz = 0;
    int result = 0;

    vector<int> xz(scale);
    vector<int> yz(scale);

    for(int i = 0; i < scale;i++){
        for(int j = 0; j < scale;j++){
            if(grid[i][j] !=0){
                result++;
            }
           if(max_xz<grid[j][i]){
              max_xz = grid[j][i];
           }
           if(max_yz <grid[i][j]){
            max_yz = grid[i][j];
           }
        }
        result += max_xz+max_yz;
        max_xz = 0;
        max_yz = 0;
    }



    return result;

    
    }
};