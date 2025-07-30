#include <iostream>
#include <vector>
using namespace std;

// reate an array of 10 elements, input 10 elements and then search an element into array.

int search(vector<int> arr, int n, int target)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
}

// Create an array of 50 elements, store 10 elements and then insert an element at the first location of array...

int insertatfirst(vector<int> &arr, int n, int target)
{

    arr.insert(arr.begin(), target);
}

// Create an array of 50 elements, store 10 element and then insert an element at the last location of array.

void inseratend(vector<int> &arr, int n, int target)
{

    arr.push_back(target);
}

//  Create an array of 50 elements, store 10 elements and then insert an element at the desired location of array..

void insertatmid(vector<int> &arr, int n, int target, int location)
{

    // for(int i=0;i<n;i++){
    //     if(i == location){
    //         arr[i] = target;
    //     }
    // }

    arr.insert(arr.begin() + location, target);
}

bool twosum(vector<int> &arr, int n, int target)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}


// -----------------------------------------------//

//  24 july, 2025

void maximum(int arr[], int size)
{
    int freq[10] = {0};

    // Count digits from each number
    for (int i = 0; i < size; i++)
    {
        int num = arr[i];
        while (num > 0)
        {
            freq[num % 10]++;
            num /= 10;
        }
    }

    // Print digits in descending order
    for (int i = 9; i >= 0; i--)
    {
        while (freq[i] > 0)
        {
            cout << i;
            freq[i]--;
        }
    }
}

void maximumnumber(vector<int> arr, int n){

    int freq[10] = {0};
    for(int i=0;i<n;i++){
        int num = arr[i];

        while(num > 0){
            freq[num%10]++;
            num = num / 10;
        }
    }


    for(int i=9;i>=0;i--){
        while(freq[i] > 0){
            cout << i;
            freq[i]--;
        }
    }

}

// Majority Element: A majority element in an array A[] of size n is an element that 
// appears more than n/2 times (and hence there is at most one such element)(Use Moore’s Voting Algorithm)

bool moorevoting(vector<int> arr, int n){

    int el;
    int cnt = 0;

    for(int i=0;i<n;i++){
        if(cnt == 0){
            cnt = 1;
            el = arr[i];
        }
        else if(arr[i] == el){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    int cnt1 = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == el){
            cnt1++;
        }
        if(cnt1 > n/2){
            return true;
        }
    }

    return false;

}





int main()
{
    vector<int> arr = {3,3,4,2,4,4,2};
    int n = arr.size();

    // maximumnumber(arr, n);

    if(moorevoting(arr, n)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
}