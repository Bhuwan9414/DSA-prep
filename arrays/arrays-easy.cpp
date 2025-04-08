// arrays easy question striver a to z dsa sheet :

// 1 : find the largest element in an array :

// #include <iostream>
// using namespace std;

// int largestelement(int arr[], int n)
// {

//     int largest = arr[0];

//     for (int i = 0; i < n; i++){

//         if (arr[i] > largest){
//             largest = arr[i];
//         } 
//     }
//     cout << largest << endl; 
// }

// int main()
// {

//     int arr[5] = {3,6,2,9,1};
//     int n = 5;

//     largestelement(arr, n);
// }


// 2  finding the second largest and second smallest element in an array :

// #include<iostream>
// using namespace std;

// int second(int arr[], int n){

//     int largest = arr[0];
//     int slargest = -1;

//     for(int i=0;i<n;i++){
//         if(arr[i] > largest){
//             slargest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i] < largest && arr[i] > slargest){
//             slargest = arr[i];
//         }
//     }
//     return slargest;
// }

// int main(){

//     int arr[5] = {1,2,3,4,5};
//     int n = 5;

//     int ans = second(arr, n);
//     cout << ans << endl;
// }


// 3 : check if hte array is sorted or not :

// #include<iostream>
// using namespace std;

// int sorted(int arr[], int n){

//     for(int i=1;i<n;i++){
//         if(arr[i] >= arr[i-1]){
            
//         }
//         else{
//             return false;
//         }
//     }
//     return true;

// }

// int main(){

//     int arr[5] = {1,2,3,4,5};
//     int n = 5;

//     //  int ans = sorted(arr,n);
//     // cout << ans << endl;

//     if(sorted(arr,n) == true){
//         cout << "array is sorted" << endl;
//     }
//     else{
//         cout << "array is unsorted" << endl;
//     }
// }


// remove duplicate elements from the array :

// #include<iostream>
// using namespace std;

// int duplicate(int arr[], int n){

//     int i = 0;
//     for(int j=1;j<n;j++){
//         if(arr[j] != arr[i]){
//             arr[i+1] = arr[j];
//             i++;
//         }
//     }
//     return i+1;

// }

// int main(){

//     int arr[10] = {1,1,2,2,3,3,4,4,5,5};
//     int n = 10;
//     // int n = sizeof(arr) / sizeof(arr[0]);  // Correct way to get the size of a raw array


//     int ans = duplicate(arr, n);
//     cout << ans << endl;

// }


//  left rotate an array by 1 :

// #include<iostream>
// using namespace std;

// void rotate(int arr[], int n){

//     int temp = arr[0];   
//     for(int i=1;i<n;i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
// }

// int main(){

//     int arr[5] = {1,2,3,4,5};
//     int n = 5;

 
//     rotate(arr, n);

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }


// roatate the array by k elements :

// #include<iostream>
// using namespace std;

// void rotate(int arr[], int n, int k){

//     k = k % n;

//     int temp[k];
//     for(int i=0;i<k;i++){
//         temp[i] = arr[i];     // storing the elements from k index in the temp array 
//     }

//     for(int i=k;i<n;i++){
//         arr[i-k] = arr[i];  // shifting elements
//     }


//     for(int i=n-k;i<n;i++){
//         arr[i] = temp[i-(n-k)];    // putting the temp array elements back in the main array
//     }


// }

// int main(){
    
//     int arr[6] = {1,2,3,4,5,6};
//     int n = 6;
//     int k = 3;

//     rotate(arr,n,k);

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }

// }



// move all zeroes at the end of the array :

// #include<iostream>
// using namespace std;


// // brute force approach :
// void zeroes(int arr[], int n){

//     int k = 0;
//     int temp[n];
//     for(int i=0;i<n;i++){
//         if(arr[i] != 0){
//             temp[k++] = arr[i];
//         }
//     }

//     for(int i=0;i<k;i++){
//         arr[i] = temp[i];
//     }

//     for(int i=k;i<n;i++){
//         arr[i] = 0;
//     }

// }

// // optimal solution :

// void zero(int arr[], int n){

//     int j = -1;
//     for(int i=0;i<n;i++){
//         if(arr[i] == 0){
//             j = i;
//             break;
//         }
//     }

//     for(int i=j+1;i<n;i++){
//         if(arr[i] != 0){
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }

// }

// int main(){

//     int arr[6] = {1,0,0,4,5,6};
//     int n = 6;

//     zero(arr,n);

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }

// }


// #include<iostream>
// using namespace std;

// int linear(int arr[], int n, int key){


//     for(int i=0;i<n;i++){
//         if(arr[i] == key){
//             return i;
//             // return true;
//         }
//     }
//     return false;

// }

// int main(){

//     int arr[5] = {4,2,6,7,2};
//     int n = 5;
//     int key;

//     cout << "enter the element to search" << endl;
//     cin >> key;

//     int ans = linear(arr,n, key);
//     cout << ans << endl;

//     if(linear(arr,n,key) == true){
//         cout << "element is present" << endl;
//      }
//      else{
//         cout << "element is not present" << endl;
//      }

// }


// count the no of zeroes and ones in an array :

// #include<iostream>
// using namespace std;

// void count(int arr[], int n){

//     int zero = 0;
//     int ones = 0;

//     for(int i=0;i<n;i++){
//         if(arr[i] == 0){
//             zero++;
          
//         }
//         if(arr[i] == 1){
//             ones++;
           
//         }
//     }

//     cout << "zeroes are " << zero << endl;
//     cout << "ones are " << ones << endl;
// }

// int main(){

//     int arr[5] = {0,1,0,1,1};
//     int n = 5;

//     count(arr,n);
// }



// some vector concepts :

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector <int> arr;

//     cout << arr.size() << endl;

// }



// love babbar :

// find unique element in an array :

// #include<iostream>
// #include<vector>
// using namespace std;

// int findunique(vector <int> arr){

//     int ans = 0;

//     for(int i=0;i<arr.size();i++){
//         ans = ans ^ arr[i];
//     }

//     return ans;

// }

// int main(){

//     int n = 7;
//     vector <int> arr(n);
   
//     arr = {1,1,2,2,3,3,4,4,3};

//     int ans = findunique(arr);

//     cout << "unique element is " << ans << endl;

// }


// intersection of two arrays :

// #include<iostream> 
// #include<vector>
// using namespace std;

// void intersection(vector <int> &ans, int arr1[], int arr2[], int n, int m){

//     for(int i=0;i<n;i++){
//         int element = arr1[i];
//         for(int j=0;j<m;j++){
//             if(element == arr2[j]){
//                 ans.push_back(element);
//                 break;
//             }
//         }
//     }

// }



// int main(){

//     vector <int> ans;
//     int arr1[4] = {1,2,3,4};
//     int arr2[3] = {2,3,6};
//     int n = 4;
//     int m = 3;
    
//     intersection(ans, arr1,arr2,n,m);

//    for(auto value : ans){
//     cout << value << " ";
//    }

// }


//  sum of pairs in an array :


// brute force approach :
// #include<iostream>
// #include<vector>
// using namespace std;

// // void add(vector<int> arr, int sum){

   
// //     for(int i=0;i<arr.size();i++){
// //         int element = arr[i];
// //         for(int j=i+1;j<arr.size();j++){
// //             // cout << "(" << element << "," << arr[j] << ")" <<endl;    // printing all the pairs in the array 

// //             if(element + arr[j] == sum){
// //                 cout << "pair is " << element << "," << arr[j] << endl;
// //             }
// //         }
// //     }

// // }

// // optimal approach :

// int add2(vector<int> arr, int sum){

//     int left = 0 , right = arr.size()-1;

//     while(left < right){
//         int currentsum = arr[left] + arr[right];

//         if(currentsum == sum){
//             cout << "pair is " << arr[left] << "," << arr[right] << endl;
//             left++;
//             right--; 
//         }
//         else if(currentsum < sum){
//             left++;
//         }
//         else{
//             right--;
//         }
//     }

// }

// int main(){

//     vector<int> arr{10,20,40,60,70};
//     int sum = 80;


//     add2(arr,sum);
//     // int ans = add2(arr, sum);
//     // cout << ans << endl;

// }


//  sort 0's and 1's in an array :

// #include<iostream>
// #include<vector>
// using namespace std;

// void sorting(vector <int> &arr){

//     int start = 0, end = arr.size()-1;
//     int i = 0;

//     while(i <= end){
//         if(arr[i] == 0){
//             swap(arr[start], arr[i]);
//             start++;
//             i++;
            
//         }
    
//         else{
//             swap(arr[end], arr[i]);
//             end--;
//         }
//     }
   

// }

// int main(){

//     vector <int> arr{0,1,0,0,1,0};

//     sorting(arr);

//     for(int i=0;i<arr.size();i++){
//         cout << arr[i] << " ";
//     }

// }



#include<iostream>
#include<vector>
using namespace std;


// finc the missing element in an array :
int missing(vector <int> &arr, int n){

    

    int s1 = (n*(n+1))/2;
    
    // cout << s1 << endl;

    int s2 = 0;
    for(int i=0;i<n;i++){
        s2 += arr[i];
    }
    return s1-s2;
    
}

// finc the max consecutive ones in an array :

int cons(vector <int> &arr, int n){

    int ones = 0;
    int maxones = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            ones = ones + 1;
            if(ones > maxones){
                maxones = ones;
            }
        }
        else{
            ones = 0;
        }
    }
    return maxones;

}

// find the no that appear only once in an array:

int single(vector <int> &arr, int n){

    int once = 0;

    for(int i=0;i<n;i++){
        once = once^arr[i];
    }
    return once;
}

int subarr(vector <int> arr, int n, int k){

    int right = 0, left = 0;
    int sum = arr[0];
    int maxlen = 0;

    while(right < n){
        while(left <= right && sum > k){
            sum = sum - arr[left];
            left++;
        }
        if(sum == k){
            maxlen = max(maxlen, right - left + 1);
        }
        right++;
        if(right < n){
            sum = sum + arr[right];
        }
    }
    return maxlen;
}



int main(){

    vector <int> arr = {1,2,3,1,1,1,1,3,3};
    int n = arr.size();

    // int ans = missing(arr, n);
    // cout << ans << endl;

    // int ans = cons(arr,n);
    // cout << ans << endl;

    // int ans = single(arr,n);
    // cout << ans << endl;

    int ans = subarr(arr, n, 6);
    cout << ans << endl;
}

