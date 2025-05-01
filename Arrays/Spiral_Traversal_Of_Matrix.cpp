#include<iostream>
using namespace std;
 
int main(){
 
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int total = 16;
    int count = 0;

    int rowstart = 0;
    int colstart = 0;
    int rowend = 3;
    int colend = 3;

    while(count < total){

        for(int i = colstart; i <= colend && count < total; i++){
            cout<<arr[rowstart][i]<<" ";
        }
        rowstart++;
        count++;

        for(int i = rowstart; i <= rowend && count < total; i++){
            cout<<arr[i][colend]<<" ";
        }
        colend--;
        count++;

        for(int i = colend; i >= colstart && count < total; i--){
            cout<<arr[rowend][i]<<" ";
        }
        rowend--;
        count++;

        for(int i = rowend;i >= rowstart && count < total; i--){
            cout<<arr[i][colstart]<<" ";
        }
        colstart++;
        count++;

    }


    return 0;
}