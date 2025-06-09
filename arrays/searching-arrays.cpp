#include<iostream>
using namespace std;

int lowerbound(int arr[], int n, int target){


    // first approach 

    // int val = 0;
    // for(int i=0;i<n;i++){
    //     if(arr[i] >= target){
    //         val = i;
    //         break;
    //     }
    // }
    // return val;


    // approach using binary search

    int low = 0, high = n-1;
    int ans = n;

    while(low<=high){

        int mid = (low+high)/2;

        if(arr[mid] >= target){
            high = mid - 1;
            ans = mid;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;

}

int upperbound(int arr[], int n, int target){

    int low = 0, high = n-1;
    int ans = n;

    while(low <= high){

        int mid = (low + high)/2;
        if(arr[mid] > target){
            high = mid - 1;
            ans = mid;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;

}

int floor(int arr[], int n, int target){

    int low = 0, high = n-1;
    int ans = n;

    while(low<=high){
        
        int mid = (low + high)/2;

        if(arr[mid] >= target){
            ans = arr[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;

}

int ceil(int arr[], int n, int target){

     int low = 0, high = n-1;
    int ans = n;

    while(low<=high){
        
        int mid = (low + high)/2;

        if(arr[mid] <= target){
            ans = arr[mid];
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;

}

int main(){

    int arr[] = {10,20,30,40,50};
    int n = 5;
    int target = 25;

    int res = ceil(arr, n, target);
    cout << "ceil is " << res << endl;

}