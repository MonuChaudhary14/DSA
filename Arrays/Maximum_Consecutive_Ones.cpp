#include<iostream>
using namespace std;
 
int main(){
 
    int arr[] = {1,2,1,5,4,1,1,1,1,2,41,51,1,1,2,1,2,1,5,12};
    int n = 20;

    int maxi = 0;
    int count = 0;

    for(int i = 0; i < n; i++){

        if(arr[i] == 1){
            count++;
        }
        else{
            maxi = max(maxi, count);
            count = 0;
        }
    }

    cout<<maxi<<endl;

    return 0;
}