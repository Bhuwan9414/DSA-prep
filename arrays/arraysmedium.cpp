#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// function to check whether there is a pair or not in a array equals to the given target :

// brute force appraoch :
bool twosum(vector<int> arr, int target)
{

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

// optimal approach : using two pointers left and right :

bool pairsum(vector<int> &arr, int target)
{

    int n = arr.size();

    sort(arr.begin(), arr.end());

    int left = 0;
    int right = n - 1;

    while (left < right)
    {

        int sum = arr[left] + arr[right];

        if (sum == target)
        {
            return true;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return false;
}

// sort an array of 0s, 1s and 2s:

int sorting(vector<int> &arr, int n)
{

    // int n = arr.size();
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
        }
        else if (arr[i] == 1)
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }

    for (int i = 0; i < cnt0; i++)
    {
        arr[i] = 0;
    }

    for (int i = cnt0; i < cnt0 + cnt1; i++)
    {
        arr[i] = 1;
    }

    for (int i = cnt0 + cnt1; i < n; i++)
    {
        arr[i] = 2;
    }
}

// finding the majority element that appears more than n/2 times:

int majority(vector<int> arr)
{

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                cnt++;
            }
        }
        if (cnt > n / 2)
        {
            return arr[i];
        }
    }
    return -1;
}

// rearrange all elements in array by alternate signs

vector<int> rearrange(vector<int> &arr)
{

    int n = arr.size();
    vector<int> ans(n, 0);
    int posindex = 0, negindex = 1;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < 0)
        {
            ans[negindex] = arr[i];
            negindex = negindex + 2;
        }
        else
        {
            ans[posindex] = arr[i];
            posindex = posindex + 2;
        }
    }
    return ans;
}

// find the longest consecutive subsequence in an array:

int consecutive(vector<int> &arr)
{

    sort(arr.begin(), arr.end());

    int n = arr.size();
    int longest = 1;
    int countcurr = 0;
    int lastsmall = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] - 1 == lastsmall)
        {
            countcurr = countcurr + 1;
            lastsmall = arr[i];
        }
        else if (arr[i] != lastsmall)
        {
            countcurr = 1;
            lastsmall = arr[i];
        }
        longest = max(longest, countcurr);
    }

    return longest;
}

// majority element ||

int maj(vector<int> arr)
{

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = i; j < n; j++)
        {

            if (arr[i] == arr[j])
            {
                cnt++;
            }
        }
        if (cnt > n / 3)
        {
            return arr[i];
        }
    }
}

int main()
{

    vector<int> arr = {1,2};

    // int n = arr.size();
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

    // int ans = majority(arr);
    // cout << ans << endl;

    // vector <int> result = rearrange(arr);
    // for(int i=0;i<n;i++){
    //     cout << result[i] << " ";
    // }

    // int ans = consecutive(arr);
    // cout << "length is " << ans << endl;

    int ans = maj(arr);
    cout << "element is " << ans << endl;
}