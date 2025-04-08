// basics

// #include<iostream>
// using namespace std;

// int count = 0;
// void counting(){
//     if(count == 3)
//     return;

//     cout << count << endl;

//     count++;
//     counting();

// }

// int main(){

//     // int ans = counting();
//     // cout << ans;
//     counting();
// }

// #include<iostream>
// using namespace std;

// // char str = 'bhuwan';
// int count = 0;
// void print(){

//     if(count == 3)
//     return;

//     cout << count << endl;
//     count++;
//     print();
// }

// int main(){

//     print();

// }

// program to print something n times:

// #include<iostream>
// using namespace std;

// // string str = "bhuwan";
// int i = 1;
// void print(int n){

//     if(i > n)
//     return;

//     cout << "bhuwan" << endl;
//     i = i + 1;
//     print(n);
// }

// int main(){
//     int n;
//     cout << "enter n" << endl;
//     cin >> n;

//     print(n);
// }

// print count from n to 1:

// #include<iostream>
// using namespace std;

// void print(int i){

//     // int i = n;

//     if(i < 1)
//     return;

//     cout << i << " ";
//     // i = i - 1;
//     print(i-1);

// }

// int main(){

//     int n;
//     cout << "enter n" << endl;
//     cin >> n;

//     print(n);
//     cout << "call" << endl;
// }

// print sum of first n numbers in reverse order :

// #include<iostream>
// using namespace std;

// void print(int i, int sum){

//     if(i < 1){
//         cout << sum << endl;
//         return;
//     }

//     print(i-1, sum+i);

// }

// int main(){

//     int n;

//     cout << "enter n" << endl;
//     cin >> n;

//     print(n, 0);
// }

// printing sum from 1 to n :

// #include<iostream>
// using namespace std;

// void print(int n ,int i, int sum){

//     if(i>n){
//         cout << sum << endl;
//         return;
//     }

//     print(n,i+1, sum+i);

// }

// below we used functional recursion :
// int print(int n){

//     if(n == 0)
//     return 0;
//     return n + print(n-1);

// }

// int main(){

//     int n;
//     cout << "enter n " << endl;
//     cin >> n;

//     int ans = print(n);
//     cout << "sum  is " << ans << endl;
// }

// factorial of n numbers :

// iterative approach:

// #include<iostream>
// using namespace std;

// int factorial(int n){

//     int fact = 1;

//     for(int i=1 ; i<=n ; i++){
//         fact = fact * i;
//     }
//     return fact;

// }

// int main(){
//     int n;
//     cout << "enter n" << endl;
//     cin >> n;

//     int ans = factorial(n);
//     cout << "factorial is "<< ans << endl;
// }

// using recursion :

// #include<iostream>
// using namespace std;

// int factorial(int n){

//     if(n == 0)
//     return 1;

//     return n * factorial(n-1);
// }

// int main(){
//     int n;

//     cout << "enter n" << endl;
//     cin >> n;

//    int ans = factorial(n);
//    cout << ans << endl;

// }

// reversing an array :

// without recursion:

// #include<iostream>
// using namespace std;

// int reverse(int arr[], int n){

//     int s = 0, e = n - 1;

//     for(int i=0 ; i<n ; i++){
//         if(s<e){
//             swap(arr[s], arr[e]);
//             s++;
//             e--;
//         }
//     }

// }

// int main(){

//     int arr[5] = {1,2,3,4,5};
//     int n = 5;

//      reverse(arr, n);

//     for(int i = 0 ; i < n ; i++){
//         cout << arr[i] << " ";
//     }
// }

// using recursion :

// #include<iostream>
// using namespace std;

// void reverse(int arr[], int s, int e){

//     // int s = 0, e = n - 1;

//     if(s>=e)
//     return;

//     swap(arr[s], arr[e]);
//     reverse(arr, s+1,e-1);

// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int n = 5;

//     reverse(arr, 0, n-1);

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }

// }

// iterative approach :

// #include <iostream>
// using namespace std;

// void palindrome(string str)
// {

//     int s = 0, e = str.length() - 1;

//     while (s < e)
//     {
//         if (str[s] != str[e])
//         {
//             cout << "not a palindrome" << endl;
//             return;
//         }
//         s++;
//         e--;
//     }

//     cout << "plaindrome" << endl;
// }

// int main()
// {

//     string str;

//     cout << "enter the string" << endl;
//     cin >> str;

//     palindrome(str);
// }



// using recursion :

// #include<iostream>
// using namespace std;

// bool palindrome(string str, int i){

//     int n = str.length();

//     if(i>=n/2)
//     return true;

//     if(str[i] != str[n-i-1])
//         return false;


//     return palindrome(str, i+1);

// }

// int main(){

//     string str;
//     cout << "enter the string" << endl;
//     cin >> str;

//    cout << palindrome(str,0) << endl;

//    if(palindrome(str,0)){
//     cout << "palindrome" << endl;
//    }
//    else{
//     cout << "not a palindrome" << endl;
//    }
//    return 0;

// }


// fibonacci number :

#include<iostream>
using namespace std;
int fib(int n){

    if(n<=1)
    return n;


    int start = fib(n-1);
    int last = fib(n-2);
    return start + last;

}

int main(){

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    int ans = fib(n);
    cout << ans << endl;

}