// Sum of primary and secondary diagonal
#include <iostream>
#define N 3
int findDiagonal(int mat[][N]){
    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += mat[i][i];
        sum += mat[i][3 - 1 - i];
    }
    if(3%2 != 0){
        sum -= mat[N/2][N/2];
    }
    return sum;
}
int main(){
    int mat[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    std::cout << findDiagonal(mat) << std::endl;
    return 0;
}