#include<iostream>
using namespace std;

int recursion(int i , int n){

    if(i == n){
        return n;
    }

    return i + recursion(i+1 , n);

}
 
int main(){
 
    int n; 
    cin>>n;

    int sum = recursion(1 , n);

    cout<<sum<<endl;


    return 0;
}