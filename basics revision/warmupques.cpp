// find the largest element in an array

// #include<iostream>
// using namespace std;

// int largestelement(int arr[], int n){
    
//     int largest = arr[0];

//     for(int i = 1 ; i < n ; i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     }
//     return largest;
// }

// int main(){
//     int arr[5] = {2,6,4,8,5};
//     int n = 5;

//     int ans = largestelement(arr, n);

//     cout << "largest element is " << ans << endl;

// }




// find the second largest element in the array :

//  #include<iostream>
//  using namespace std;

// int max(int a, int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

//  int main(){
//     int a, b;

//     cout << "enter a and b" << endl;
//     cin >> a >> b;

//     int ans = max(a,b);

//     cout << "max is " << ans << endl;

//  }


// pass by value


// void dosomething(int a){   // here after adding &a we passed the original address of a thats why the value of a changed in the main function also
//     cout << a << endl;
//     a += 5;
//     cout << a << endl;
// }

// int main(){
//     int a = 10;
//     dosomething(a);
//     cout << a << endl;    // the value of a here remains 10 becoz the copy of a is passed to the function not the original value
// }


// pass by reference

// void dosomething(int &a){   // here after adding &a we passed the original address of a thats why the value of a changed in the main function also
//     cout << a << endl;
//     a += 5;
//     cout << a << endl;
// }

// int main(){
//     int a = 10;
//     dosomething(a);
//     cout << a << endl;   // the value of a is now changed here becoz we passed by refernce
// }


// int main(){
//     string s = "bhuwan";

//     cout << s[3];
// }


// pattern printing:

// int main(){
//     for(int i = 0 ; i < 4 ; i ++){
//         for(int j = 0 ; j < 4 ; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int print(int n){
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j <= i ; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// int print2(int n){
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=i ;j++){
//             cout << i;
//         }
//         cout << endl;
//     }
// }

// int print3(int n){
//     for(int i = 0 ; i<n ; i++){
//         for(int j = 0 ; j <= n ; j --){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// int main(){

//     int n;
//     cout << "enter n" << endl;
//     cin >> n;

//     print3(n);
// }


// vectors :

// #include<vector>
// int main(){
//     vector<int> number;

//     number.push_back(10);
//     number.push_back(20);
//     number.push_back(30);

//     cout << "first element is " << number[0] << endl;

// }