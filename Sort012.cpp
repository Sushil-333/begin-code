#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

void sort012(int arr[], int n) {
    int zeroCount=0,oneCount=0,twoCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        else if(arr[i]==1){
            oneCount++;
        } else {
          twoCount++;
        }
    }
    //cout<<zeroCount<<" "<<oneCount<<" "<<twoCount;
    for(int i=0;i<n;i++){
        if(zeroCount!=0){
            arr[i]=0;
            zeroCount--;
        }
        else if(oneCount!=0){
            arr[i]=1;
            oneCount--;
        } else{
          arr[i] = 2;
          twoCount--;
        }
    }
    
    
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}
