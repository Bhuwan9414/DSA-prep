#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
using namespace std;

// find the largest element in the array
int largest(vector<int> arr)
{

    int result = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > result)
        {
            result = arr[i];
        }
    }
    return result;
}

// finc second largest element in an array without sorting :

int secondlargest(vector<int> arr)
{

    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

// find the second smallest element in an array

int secondsmallest(vector<int> arr)
{

    int smallest = INT_MAX;
    int secondsmallest = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondsmallest && arr[i] != smallest)
        {
            secondsmallest = arr[i];
        }
    }
    return secondsmallest;
}

// check if the array is sorted or not

bool issorted(vector<int> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

// left rotate an array by one place

int leftrotate(vector<int> arr)
{

    int temp = arr[0];
    for (int i = 0; i < arr.size() - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = temp;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// left or right rotate an array by given D places:

void reverse(vector<int> &arr, int start, int end)
{

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rotatearray(vector<int> &arr, int n, int k)
{
    reverse(arr, 0, k - 1);

    reverse(arr, k, n - 1);

    reverse(arr, 0, n - 1);
}

// move all zeroes to the end of the array

vector<int> movezeroes(vector<int> &arr)
{

    int n = arr.size();

    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    return arr;
}

// find maximum consecutive ones in an array

int consones(vector<int> arr)
{

    int n = arr.size();
    int maxcount = 0;
    int currcount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            currcount += 1;
            maxcount = max(currcount, maxcount);
        }
        else if (arr[i] != 1)
        {
            currcount = 0;
        }
    }

    return maxcount;
}

// find the missing number in the array

int missing(vector<int> arr)
{

    int n = arr.size();
    // int sum = (n*(n+1))/2;

    // int s1 = 0;
    // for(int i=0;i<n;i++){
    //     s1 += arr[i];
    // }

    // return sum - s1;

    // 2nd approach using xor

    int once = 0;
    for (int i = 0; i < n; i++)
    {
        once = once ^ arr[i];
    }
    return once;
}

// find the number that only appear once in the array

int once(vector<int> arr)
{

    int n = arr.size();

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mpp[arr[i]] == 1)
        {
            return arr[i];
        }
    }
    return -1;
}

// GKMIT CODING ROUND QUESTION

int minMergeOperations(vector<int> arr)
{
    int i = 0, j = arr.size() - 1;
    int count = 0;

    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else if (arr[i] < arr[j])
        {
            arr[i + 1] += arr[i];
            i++;
            count++;
        }
        else
        {
            arr[j - 1] += arr[j];
            j--;
            count++;
        }
    }

    return count;
}

//  find the longest subarray with sum k

int longestsubarr(vector<int> arr, int k)
{

    int n = arr.size();
    int maxlen = 0;
    int sum = 0;
    int i = 0, j = 0;

    // run j till lesser than n
    while (j < n)
    {

        sum += arr[j];

        // run this loop if i is lesser than j and sum becomes greater than k
        while (i <= j && sum > k)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == k)
        {
            maxlen = max(maxlen, j - i + 1);
        }

        j++;
    }

    return maxlen;
}

// two sum problem

bool twosum(vector<int> arr, int k)
{

    int n = arr.size();
    int left = 0, right = n - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if (sum == k)
        {
            return true;
        }
        else if (sum < k)
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

int majorelement(vector<int> arr)
{

    int n = arr.size();
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int mid = n / 2;

    for (auto pair : mpp)
    {
        if (pair.second > mid)
        {
            return pair.first;
        }
    }
    return -1;
}

// find the sum of the subarray that contains the maximum sum in the array:

int sumofsubarr(vector<int> arr)
{

    int max = INT_MIN;
    int n = arr.size();
    int sum = 0;

    // iterrating through each element in the array
    for (int i = 0; i < n; i++)
    {

        // adding element in the sum
        sum += arr[i];

        // if anytime the sum becomes grater than max then do max = sum
        if (sum > max)
        {
            max = sum;
        }

        // if anytime the sum becomes lesser than 0 reintialize sum with 0
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return max;
}

// best time to buy and sell stock

int stock(vector<int> arr, int n)
{
    int minprice = INT_MAX;
    int maxprofit = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minprice)
        {
            minprice = arr[i];
        }

        maxprofit = max(arr[i] - minprice, maxprofit);
    }
    return maxprofit;
}

// find the length of longest contigous sequence of either 1s or 0s in an array

int contigous(vector<int> arr, int n)
{

    int maxcount = INT_MIN;
    int currentcount = 1;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == arr[i + 1])
        {
            currentcount += 1;
        }
        else
        {
            maxcount = max(currentcount, maxcount);
            currentcount = 1;
        }
    }

    return maxcount;
}


// wave sort an array

void wavesort(vector<int> &arr, int n){

    for(int i=0;i<n-1;i+=2){

        swap(arr[i], arr[i+1]);

    }

}

// remove all occurence of element in an array

int occur(vector<int> arr, int n, int k){

    int count = 0;
    int i=0;
    while(i<n){
        if(arr[i] == k){
            count += 1;
        }
        i++;
    }

    return count;

}

void addnumber(vector<int> &arr, int n){

      for(int i = n-1; i >= 0; i--){

            arr[i] += 1;

            if(arr[i] < 10) return;

            else{
                arr[i] = 0;
                arr[i-1] += 1;
            }
      }
}

int main()
{
    vector<int> arr = {1,2,9};
    int n = arr.size();

    addnumber(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i]  << " ";
    }
}