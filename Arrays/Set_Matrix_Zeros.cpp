#include <iostream>
using namespace std;

void brute(int arr[][4], int row, int col)
{
    // Time Complexity -> O(row*col)*(row+col) + (row*col)
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (arr[i][j] == 0)
            {

                for (int k = 0; k < row; k++)
                {
                    if (arr[k][j] == 1)
                        arr[k][i] = -1;
                }
                for (int l = 0; l < col; l++)
                {
                    if (arr[i][l] == 1)
                        arr[i][l] = -1;
                }
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void anotherbrute(int arr[][4], int row, int col)
{

    int ans[4][4];

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            ans[i][j] = 1;
        }
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (arr[i][j] == 0)
            {

                for (int k = 0; k < col; k++)
                {
                    ans[i][k] = 0;
                }
                for (int l = 0; l < row; l++)
                {
                    ans[l][j] = 0;
                }
            }
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

void better(int arr[][4], int row, int col)
{
    // Time complexity -> O(row*col) + O(row*col)
    // Space Complexity -> O(row+col)
    bool rows[row] = {0};
    bool cols[col] = {0};

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (arr[i][j] == 0)
            {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    // for(int i = 0; i < row; i++){

    //     if(rows[i]){

    //         for(int l = 0; l < col; l++){
    //             arr[i][l] = 0;
    //         }

    //     }

    // }

    // for(int j = 0; j < col;  j++){

    //     if(cols[j]){
    //         for(int k = 0; k < row; k++){
    //             arr[k][j] = 0;
    //         }
    //     }

    // }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (rows[i] == true || cols[j] == true)
            {
                arr[i][j] = 0;
            }
        }
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

void optimised(int arr[][4], int row, int col)
{
    // Time complexity -> O(row*col) + O(row*col)
    // Space Complexity -> O(1)

    int col0 = 1;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (arr[i][j] == 0)
            {
                arr[i][0] = 0; /*col in which the 0 is present*/

                if (j != 0)
                    arr[0][j] = 0; /*row in which the 0 is present*/
                else
                    col0 = 0;
            }
        }
    }

    for (int i = 1; i < row; i++)
    {

        for (int j = 1; j < col; j++)
        {

            if (arr[i][0] == 0 || arr[0][j] == 0)
                arr[i][j] = 0;
        }
    }

    if (arr[0][0] == 0)
    {
        for (int i = 0; i < col; i++)
            arr[0][i] = 0;
    }

    if (col0 == 0)
    {
        for (int i = 0; i < row; i++)
        {
            arr[i][0] = 0;
        }
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

    int arr[][4] = {{1, 1, 1, 1}, {1, 0, 0, 1}, {1, 1, 0, 1}, {1, 1, 1, 1}};
    int row = 4;
    int col = 4;

    // brute(arr, row, col);
    // cout<<endl;
    // cout<<endl;
    // anotherbrute(arr, row, col);
    cout << endl;
    cout << endl;
    // better(arr, row, col);
    cout << endl;
    cout << endl;
    optimised(arr, row, col);

    return 0;
}