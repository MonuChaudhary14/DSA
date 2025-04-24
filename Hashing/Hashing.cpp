#include<iostream>
using namespace std;
 
int main(){
 
    // It is mostly used to find the frequency of elements in any list or array

    // In this method we create a map or array which stores the frequency of each element in the list or array.

    // The maximum size of int array we can declare is 10^6 inside main

    // The maximum size of int array we can declare is 1e7(10^7) when we declare it globally

    // The maximum size of boolean array we can declare is 1e7(10^7) in main function

    // The maximum size of int array we can declare is 1e8(10^8) when we declare it globally



    int arr[14] = {1,2,3,4,5,6,7,9,9,1,2,4,6,6};
    int n = 14;

    int hash[10] = {0};  // here 10 is defined on the basis of maximun value that can be appear in the array

    for(int i = 0;i < 14; i++){
        hash[arr[i]]++;
    }

    cout<<"The frequency of the element in arr is "<<endl;

    for(int i = 0; i < 10; i++){

        cout<<i<<" "<<hash[i]<<endl;
    }

    cout<<endl;

    string s = "abcabcdefdef";

    int frequency[26] = {0};

    // Here are 26 letters(lower case)

    for(int i = 0; i < 12; i++){
        // int num = s[i] - 'a';   Here the ASCII value of 'a' is 97 
        int num = s[i] - 97;  // This will also work
        frequency[num]++;
    }

    for(int i = 0; i < 10; i++){
        char ch = i + 'A';
        cout<<ch<<" "<<frequency[i]<<endl;

    }

    // When we have upper case as well then we can make a array of size 256

    int both[256] = {0};

    // There is no boundation for charcter array because the size of the array at max is 256

    string name = "MKNDNxsdskmccKOMDM";

    for(int i = 0; i < s.length(); i++){
        both[s[i]]++;
    }

    for(int i = 0; i < 256; i++){
        char p = i;
        cout<<p<<" "<<both[i]<<endl;

    }

    return 0;
}