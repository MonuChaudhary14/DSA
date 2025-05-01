#include<iostream>
#include<vector>
using namespace std;

void brute(int arr[], int n){

    vector<int> positive;
    vector<int> negative;

    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            positive.push_back(arr[i]);
        }
        else{
            negative.emplace_back(arr[i]);
        }
    }

    
    if(positive.size() > negative.size()){

        for(int i = 0; i < negative.size(); i++){
            arr[2*i] = positive[i];
            arr[2*i+1] = negative[i];
        }

        int index = negative.size()*2;
        for(int i = negative.size(); i < positive.size(); i++){
            arr[index++] = positive[i];
        }

    }
    else{
        for(int i = 0; i < positive.size(); i++){
            arr[2*i] = positive[i];
            arr[2*i+1] = negative[i];
        }
        int index = positive.size()*2;

        for(int i = positive.size(); i < negative.size(); i++){
            arr[index] = negative[i];
            index++;
        }

    }
    
}

void print(int arr[], int n){

    for(int i = 0; i < n; i++){

        cout<<arr[i]<<" ";

    }

}
 
int main(){
 
    int arr[] = {-1,2,3,4,-3,1};
    int n = 6;

    brute(arr, n);
    print(arr ,n);


    return 0;
}