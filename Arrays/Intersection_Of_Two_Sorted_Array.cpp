#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {1, 1,2,3,4,4,5,7};
    int arr1[] = {1,2,2,3,4,4,5,6,7,7};

    int n1 = 8;
    int n2 = 10;

    bool visited[n2+1] = {false};

    vector<int> ans;

    for(int i = 0; i < n1; i++){

        for(int j = 0; j < n2; j++){

            if(arr[i] == arr1[j] && visited[j] == false){
                ans.push_back(arr[i]);
                visited[i] = true;
                break;
            }
            if(arr1[j] > arr[i]){
                break;
            }

        }
    }

    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    int i = 0;
    int j = 0;
    vector<int> sol;

    while(i < n1 && j < n2){

        if(arr[i] == arr1[j]){
            sol.push_back(arr[i]);  
            i++;
            j++;  
        }
        else if(arr[i] > arr1[j]){
            j++;
        }
        else{
            i++;
        }

    }

    cout<<endl;
    for(int i = 0; i < ans.size(); i++){
        cout<<sol[i]<<" ";
    }


    
    return 0;
}