#include<iostream>
#include<vector>
using namespace std;

// reate an array of 10 elements, input 10 elements and then search an element into array. 

int search(vector<int> arr, int n, int target){

    for(int i=0;i<n;i++){
        if(arr[i] == target){
            return i;
        }
    }

}


// Create an array of 50 elements, store 10 elements and then insert an element at the first location of array... 

int insertatfirst(vector<int> &arr, int n, int target){

    arr.insert(arr.begin(), target);

}


// Create an array of 50 elements, store 10 element and then insert an element at the last location of array.

void inseratend(vector<int> &arr, int n, int target){

    arr.push_back(target);

}


//  Create an array of 50 elements, store 10 elements and then insert an element at the desired location of array..

void insertatmid(vector<int> &arr, int n, int target, int location){

    // for(int i=0;i<n;i++){
    //     if(i == location){
    //         arr[i] = target;
    //     }
    // }

    arr.insert(arr.begin() + location, target);

}


bool twosum(vector<int> &arr, int n, int target){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == target){
                return true;
            }
        }
    }
        return false;
}


int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int n = arr.size();
    int target = 454;
    // int location = 3;

    if(twosum(arr, n, target)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}