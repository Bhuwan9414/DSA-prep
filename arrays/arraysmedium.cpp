#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// function to check whether there is a pair or not in a array equals to the given target :

// brute force appraoch :
bool twosum(vector <int> arr, int target){

    int n = arr.size();

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i] + arr[j] == target){
                return true;
            }
        }
    }
    return false;

}



// optimal approach : using two pointers left and right :

bool pairsum(vector <int> &arr, int target){

    int n = arr.size();
  

    sort(arr.begin(), arr.end());

    int left = 0;
    int right = n - 1;

    while(left<right){

        int sum = arr[left] + arr[right];

        if(sum == target){
            return true;
        }
        else if(sum < target) {
            left++;
        }
        else{
            right--;
        }

    }
    return false;

}

// sort an array of 0s, 1s and 2s:

int sorting(vector <int> &arr, int n){

    // int n = arr.size();
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            cnt0++;
        }
        else if(arr[i] == 1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }

    for(int i=0;i<cnt0;i++){
        arr[i] = 0;
    }

    for(int i=cnt0;i<cnt0+cnt1;i++){
        arr[i] = 1;
    }

    for(int i=cnt0 + cnt1;i<n;i++){
        arr[i] = 2;
    }
    

}

// finding the majority element that appears more than n/2 times:

int majority(vector <int> arr){

    
    int n = arr.size();

    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=i;j<n;j++){
            if(arr[j] == arr[i]){
                cnt++;
            }
        }
        if(cnt > n/2){
            return arr[i];
        }
    }
    return -1;
}


int main(){

    vector <int> arr = {2,2,3,3,1,3,3};
    int n = arr.size();
    // if(twosum(arr,17)){
    //     cout << "pair is present" << endl;
    // }
    // else{
    //     cout << "pair is not present" << endl;
    // }

   
    // for optiamal app :

    // if(pairsum(arr,9)){
    //     cout << "present " << endl;
    // }
    // else{
    //     cout << "not present" << endl;
    // }

    // sorting of array :

    // sorting(arr, n);
    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }


    int ans = majority(arr);
    cout << ans << endl;

}