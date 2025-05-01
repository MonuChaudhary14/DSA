#include<iostream>
#include<algorithm>
using namespace std;

void brute(int arr[], int n){



}

void better(int arr[], int n){   /* We can also use vector here */

    next_permutation(arr,arr+n);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void optimise(int arr[], int n){

    int mini = n-1;

    for(int i = n-2; i >= 0; i--){

        if((arr[i] < arr[mini] || (arr[mini] == 0 )) && arr[i] != 0){
            mini = i;
        }

        else if(arr[i] < arr[mini] && arr[i] != 0){
            swap(arr[i], arr[mini]);


            sort(arr+i+1, arr+n);

            break;
        }

    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void moreoptimised(int arr[], int n) {
    int index = -1;

    // Step 1: Find the first decreasing element from end
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] < arr[i+1]) {
            index = i;
            break;
        }
    }

    if(index != -1) {
        // Step 2: Find element just greater than arr[index]
        for(int i = n-1; i > index; i--) {
            if(arr[i] > arr[index]) {
                swap(arr[i], arr[index]);
                break;
            }
        }
        // Step 3: Reverse the elements from index+1 to end
        int i = index + 1;      /* Find out why it is not working when i = index+1 and works fine when i = index */
        int j = n-1;
        while(i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    } else {
        // Special case: if index == -1, reverse whole array
        int i = 0;
        int j = n-1;
        while(i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    // Print final array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main(){
 
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
    
        int arr[n];
        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
          
    better(arr, n);
    // optimise(arr,n);
    moreoptimised(arr, n);


    

    return 0;
}