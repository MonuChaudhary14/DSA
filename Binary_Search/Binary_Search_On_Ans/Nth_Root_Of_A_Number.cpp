#include<bits/stdc++.h>
using namespace std;

int root(int n, int m){    // This will not work on large value like 10 ^9

    int ans = -1;

    int start = 1;
    int end = m;

    while(start <= end){

        int mid = (start+end)/2;

        int val = pow(mid, n);

        if(val == m){
            ans = mid;
            break;
        }

        else if (val > m){
            end = mid-1;
        }
        else{
            start = mid +1;
        }


    }
    return ans;
}



// Optimsed Code

int power(int n, int m, int mid){

    long long ans = 1;

    for(int i = 1; i <= n; i++){

        ans = ans *mid;

        if(ans > m){
            return 2;
        }

    }

    if(ans == m){
        return 0;
    }
    else{
        return 1;
    }

}

int NthRoot(int n, int m) {
      int ans = -1;

    int start = 1;
    int end = m;

    while(start <= end){

        int mid = (start+end)/2;

        int val = power(n, m , mid);

        if(val == 0){
            ans = mid;
            break;
        }

        else if (val == 2){
            end = mid-1;
        }
        else{
            start = mid +1;
        }


    }
    return ans;
}

 
int main(){
    
    int n;
    cin>>n;

    int m;
    cin>>m;

    cout<<root(n, m);

    

    return 0;
}