#include <iostream>
#include <utility>
std::pair<int, int> linearSearch(int array[][3], int row, int col, int key){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(array[i][j] == key){
             return std::make_pair(i,j);   
            }
        }
    }
    return std::make_pair(-1,-1);
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    int key = 1;
    std::pair<int, int> result = linearSearch(arr, row, col, key);
    std::cout << "<" <<result.first << "," << result.second << ">" << std::endl;
    return 0;
}