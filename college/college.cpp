#include <iomanip>
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size();

//         for (int i = n - 1; i >= 0; i--) {
//             digits[i] += 1;
//             if (digits[i] < 10)
//                 return digits;
//             digits[i] = 0;
//         }

//         digits.insert(digits.begin(), 1);
//         return digits;
//     }
// };

// int main() {
//     Solution sol;
//     vector<int> test = {9, 9, 9}; // test input
//     vector<int> result = sol.plusOne(test);

//     for (int digit : result) {
//         cout << digit << " ";
//     }
//     cout << endl;
//     return 0;
// }

// int gcd(int x, int y){

//     int largest = INT_MIN;

// }

// int factorial(int n){

//     int fact;

//     if(n==1) return 1;

//     // fact = factorial(n*(n-1));

//     fact = n * factorial(n-1);

//     return fact;

// }

// int fact(int n){

//     for(int i=n;i>=1;i--){

//     }
// }

// int main() {
// int amount;
// cout << "Enter the amount: ";
// cin >> amount;

// int denominations[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
// int n = sizeof(denominations) / sizeof(denominations[0]);

// cout << "Currency breakdown:\n";
// for (int i = 0; i < n; ++i) {
//     if (amount >= denominations[i]) {
//         int count = amount / denominations[i];
//         amount %= denominations[i];
//         cout << denominations[i] << " x " << count << endl;
//     }
// }

// int n;
// int largest = INT_MIN;
// int secondlergest = INT_MIN;

// cout << "enter n" << " " ;

// while(true){
//     cin >> n;
//     if(n == -1) break;

//     if(n > largest){
//         secondlergest = largest;
//         largest = n;
//     }
//     else if(n > secondlergest && n < largest){
//         secondlergest = n;
//     }
// }

// cout << secondlergest << endl;

// int n = 3;

// int ans = factorial(n);

// cout << ans << endl;

// return 0;

// }

// zero matrix
// unit matrix
// diagonal matrix
// traingular matrix
// tri diagonal matrix
// sparese matrix
// upper and lower traingular matrix

// 1:

// int main(){

//     int a, b, c;

//     cout << "enter a and b" << endl;
//     cin >> a >> b;

//     cout << a << " " << b << " " << c;

//     // output of c will be garbage value

// }

// int main(){

//     char str[10];
//     cin >> str;

//     cout << setw(4) << str << endl;  // sets the width as 4 chars if the string is lesser than four chars it provides space at the left side

// }

// covert lowercase letter to uppercase letter

// int main(){

//     char a;

//     cout << "enter any char" << endl;
//     cin >> a;

//     a = a-('a' - 'A');   // 'a' - 'A' is done becoz all lowercase and uppercase letters are 32 apart
//                         // 'a' - 'A' = 32
//     cout << a << endl;

// }

// printing ASCII value of every char

// int main(){

//     for(int i=32;i<128;i++){
//         cout << char(i) << " " << i << endl;
//     }

// }

// sizeof
// int main(){

//     int a = 10;
//     int b = 'A';
//     int arr[5] = {1,2,3};
//     float c = 3.5;
//     double d = 10.01;
//     cout << sizeof(a) << endl;
//     cout << sizeof(b) << endl;
//     cout << sizeof(arr) << endl;
//     cout << sizeof(c) << endl;
//     cout << sizeof(d) << endl;

// }

// relational operator
// int main(){

//     int a = 1, b = 1, x;

//     // if a is greater than b
//     x = a>b;    // will return 1 if this condition is true else 0 if false
//     cout << x << endl;

//     // if a is smaller than b
//     x=a<b;
//     cout << x << endl;

//     // if a = b
//     x = (a=b);
//     cout << x << endl;

// }

// pre increment and post increment

// int main(){

//     int a = 5, x;

//     // x = a++;

//     // cout << a << " " << x << endl;

//     x = ++a;

//      cout << a << " " << x << endl;

// }

// logical AND and OR operator

// int main(){

//     int a = 0, b = 0, x;

//     // only a is incremented becoz of OR operator and control never reached to ++b
//     x = ++a||++b;
//     cout << a << " " << b << endl;

//     // both a and b are incremented coz there is a AND condition
//     x = ++a&&++b;
//     cout << a << " " << b << endl;

// }

// int main(){

//     int a = 10, b = 15;

//    while(b != 0){    // run till b!=0

//     int temp = b;    // store the current value of b in temp

//     b = a%b;        // update b with a%b value

//     a = temp;       // update value of a

//    }

//             cout << "GCD is " << a << endl;

// }

//  Find the sum on N integer number to terminate input user will input -1, do  not consider -1 as input. Do not use array.
// int add(int n){

//     int sum = 0;

//     while(true){

//         cin >> n;

//         if(n == -1) break;

//         sum += n;

//     }

//     return sum;

// }

// program to find factorial of a number

int factorial(int n)
{

    int fact;

    if (n == 1)
        return 1;

    fact = n * factorial(n - 1);

    return fact;
}

bool linearsearch(vector<int> arr, int n, int k)
{

    for (int i = 0; i < n; i++)
    {

        if (arr[i] == k)
            return true;
    }

    return false;
}

int binarysearch(vector<int> arr, int n, int k){

    int low = 0, high = n-1;

    while(low<=high){

        int mid = (low+high)/2;

        if(arr[mid] == k){
            return true;
        }
        else if(arr[mid] < k){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return false;

}


// Problem 6) Write a function rotate(arr[], d, n) that rotates arr[] of size n by d elements.

int reverse(vector<int> &arr, int start, int end){

  
    
    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int rotatebyd(vector<int> &arr, int n, int k){

        reverse(arr,0,k-1);

        reverse(arr, k, n-1);

        reverse(arr, 0, n-1);

}


// Problem 1) Write a program to print all the LEADERS in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. 

vector <int> leader(vector<int> arr, int n){

    vector<int> ans;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(arr[i] > arr[j]){
                ans.push_back(arr[i]);
            }
            else{
                i++;
            }
        }
    }

    return ans;

}

int student(string str){

    int count = 0;

    for(int i=0;i<str.length();i++){
        if(str[i] == ' '&& str[i+1] != ' '){
            count++;
        }
    }

    return count;

}

    




int main()
{

    //     int n;
    //     cout << "enter input number" << endl;

    //     cin >> n;

    //    cout <<  factorial(n);

    // int ans = add(n);
    // cout << ans << endl;

    // vector<int> arr = {1,2,3,4,5,6,7};
    // int n = arr.size();
    // int k = 2;

    // rotatebyd(arr, n, k);

    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }

    string str = { "a fox jumps over the lazy    dog"};

    int ans = student(str);
    cout << ans << endl;


   
}