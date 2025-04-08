// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int counting(int n){
//     // int count = 0;
//     // while(n > 0){
//     //     count = count + 1;
//     //     n = n/10;
//     // }
//     // return count;

//     // int count = 0;

//     // while(n>0){
//     //     n = n/10;
//     //     count = count + 1;
//     // }
//     // return count;


//     // another way of counting digits
//     // int count = (int)(log10(n) + 1);
//     // return count;

//     int digit = n % 10;
//     return digit;
// }

// int main(){

//     int n;
//     cout << "enter the value of n" << endl;
//     cin >> n;

//     int ans = counting(n);
//     cout << ans << endl;

// }



// reverse a number
// #include<iostream>
// using namespace std;
// int reverse(int n){
//     int revvalue = 0;
//     int ld = 0;
//     while(n>0 || n<0){
//          ld = n%10;
//         revvalue = (revvalue * 10) + ld;
//         n = n / 10;
//     }
//     return revvalue;
// }

// int main(){

//     int n;
//     cout << "enter the number" << endl;
//     cin >> n;


//     int ans = reverse(n);
//     cout << ans;
//     cout << INT8_MAX;
// }



// check if the given no is palindrome or not:

#include<iostream>
using namespace std;

bool ispalindrome(int n){
    int lastdigit = 0;
    int revno = 0;
    int dup = n;
    while(n!=0){
        lastdigit = n%10;
        revno = (revno * 10) + lastdigit;
        n = n/10;
        // return revno;
    }

    if(dup == revno){
        cout <<  "true" << endl;
    }
    else{
        cout <<  "false" << endl;
    }
}

int main(){
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    // ispalindrome(n);
    int ans = ispalindrome(n);
    cout << ans;

}