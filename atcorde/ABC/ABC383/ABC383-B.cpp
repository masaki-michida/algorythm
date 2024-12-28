#include <iostream>
using namespace std;

int main() {
    int row,col,range;
    cin >> row >> col>>range;
    char arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> arr[i][j];
        }
    }
   int machine1 = 0;
   int machine2 = 0;
   int temp = 0;

   for(int i = 0; i < row; i++){
        for(int j = 0; j<col; j++){
            if(arr[i][j]=='.'){
                temp++;
                for(int k = 0; k<=range; k++){
                    for(int l = 1; l<=range-k; l++){
                        if (i + k < row && j + l < col && arr[i + k][j + l] == '.') {
                            temp++;
                        }
                        if (i - k >= 0 && j - l >= 0 && arr[i - k][j - l] == '.') {
                            temp++;
                        }
                        if (i - k >= 0 && j + l < col && arr[i - k][j + l] == '.') {
                            temp++;
                        }
                        if (i + k < row && j - l >= 0 && arr[i + k][j - l] == '.') {
                            temp++;
                        }
                    }
                }
                if(temp>machine1){
                    machine2 = machine1;
                    machine1 = temp;
                }
                temp = 0;
            }
        }
   }

   cout << machine1+machine2 << endl;

}