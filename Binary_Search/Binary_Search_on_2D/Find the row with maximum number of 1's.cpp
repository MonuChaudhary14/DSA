#include <iostream>
using namespace std;

int rowWithMaxOnes(int arr[][3], int row, int col){

        int ans = -1;

        int i = 0;

        for(int j = 0; j < col; j++){

            for(i = 0; i < row; i++){

                if(arr[i][j] == 1){
                    ans = i;
                    break;
                }

            }
            if(ans != -1){
                break;
            }


        }
        return ans;
}


int optimise(int arr[][3], int row , int col){  

    int position = col;
    int position_row = -1;
    int ans = col;

    for(int i = 0; i < row; i++){


        int start = 0;
        int end = col-1;
        position = col;

        while(start <= end){    // In this we can apply lowerbound of 1 , upperbound of 0 and position of 1 in each row

            int mid = (start+end)/2;

            if(arr[i][mid] == 1){
                position = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }

        }
        if(position < ans){
            position_row = i;
            ans = position;
        }

    }

    return position_row;
}

int main() {
    int n = 3, m = 3;  

    int mat[3][3] = {
        {0, 0, 1},
        {0, 1, 1},
        {0, 0, 0}
    };

    cout<<optimise(mat , 3, 3);

    return 0;
}
