#include <iostream>
#include<algorithm>
using namespace std;

void brute(int arr[][4], int row, int col)
{

    int ans[4][4];
    int m = 0;

    for(int i = 0; i < row; i++){

        for(int j = 0; j < col; j++){

            ans[j][row-i-1] = arr[i][j];

        }

    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void optimise(int arr[][4], int row, int col){

    // Transpose
    for(int i = 0; i < row; i++){

        for(int j = 0; j < col;j++){

            if(i >= j){
                continue;
            }
            else{
                swap(arr[i][j], arr[j][i]);
            }

        }

    }

    //Reverse
    for(int i = 0; i< row; i++){

        // int first = 0;
        // int last = col-1;

        // while(first < last){
        //     swap(arr[i][first], arr[i][last]);
        //     first++;
        //     last--;
        // }

        reverse(arr[i] , arr[i] + col);

    }

    


    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}


int main()
{

    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int row = 4;
    int col = 4;

    // brute(arr, row, col);

    optimise(arr, row, col);

    return 0;
}