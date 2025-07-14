// Find maximum sum of colummn in a 2D array
#include <iostream>
#include <climits>
int findcolSum(int array[][3], int row, int col){
    int maxcolSum = INT_MIN;
    for(int i = 0; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){
            sum += array[j][i];
        }
        maxcolSum = std::max(maxcolSum, sum);
    }
    return maxcolSum;
}
int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    std::cout << findcolSum(arr, row, col) << std::endl;
    return 0;
}
