#include <iostream>
using namespace std;

int lowerbound(int arr[], int n, int target)
{

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

    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] >= target)
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int upperbound(int arr[], int n, int target)
{

    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {

        int mid = (low + high) / 2;
        if (arr[mid] > target)
        {
            high = mid - 1;
            ans = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int ceil(int arr[], int n, int target)
{

    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] >= target)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int floor(int arr[], int n, int target)
{

    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] <= target)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

// function to find the first and last occurence of an element in an array

pair<int, int> firstlast(int arr[], int n, int target)
{

    int first = -1, last = -1;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == target)
        {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    return {first, last};
}

// function to count the occurence of a element in the array :
int occurence(int arr[], int n, int target)
{

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count += 1;
        }
    }
    return count;
}

// printing a star pattern:


void printstar(int arr[], int n)
{
       int maxHeight = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxHeight)
            maxHeight = arr[i];
    }

    // Print row by row, from top to bottom
    for (int row = maxHeight; row > 0; row--) {
        for (int col = 0; col < n; col++) {
            if (arr[col] >= row)
                cout << "* ";
            else    
                cout << "  ";
        }
        cout << endl;
    }
}

int main()
{

    int arr[] = {5, 4, 3, 2, 8};
    ;
    int n = 5;
    // int target = 4;

    // pair <int, int> res = firstlast(arr, n, target);
    // cout << "indexes are " << res.first << "  " <<  res.second << endl;

    // occurence function
    // int ans = occurence(arr, n, target);
    // cout << "occurence is " << ans << endl;

    // pattern print function
    printstar(arr, n);
}