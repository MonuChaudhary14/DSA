#include <iostream>
#include <vector>
using namespace std;

void brute(int arr[], int n)
{

    vector<int> positive;
    vector<int> negative;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] >= 0)
        {
            positive.emplace_back(arr[i]);
        }
        else
        {
            negative.emplace_back(arr[i]);
        }
    }

    for (int i = 0; i < n/2; i++)
    {

        arr[2 * i + 1] = negative[i];
        arr[2 * i] = positive[i];
    }
}

void better(int arr[], int n){

    int ans[n];
    int even = 0;
    int odd = 1;

    for(int i = 0; i < n; i++){

        if(arr[i] >= 0){
            ans[even] = arr[i];
            even = even+2;
        }
        else{
            ans[odd] = arr[i];
            odd = odd+2;
        }

    }

    for(int i = 0; i < n; i++){

        cout<<ans[i]<<" ";

    }

}

void print(int arr[], int n){

    for(int i = 0; i< n; i++){
        cout<<arr[i] <<" ";
    }

}

int main()
{

    int arr[] = {3, 1, -2, -5, 2, -4};
    int n = 6;

    // brute(arr, n);
    // print(arr, n);
    // cout<<endl;

    better(arr, n);

    return 0;
}