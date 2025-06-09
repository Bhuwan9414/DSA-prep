#include<iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){

    // for intregers

    // int n = 5;
    // int arr[n] = {1,2,1,3,2};

    // // precompute
    // int hash[13] = {0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]] += 1;
    // }

    // // taking input of the numbers 
    // int q = 3;

    // while(q--){
    //     int number;
    //     cin >> number;

    //     cout << "apprearing for " << hash[number]  << " times " << endl;
    // }

    
    // for char arrays

    // string s = "aabbcd";

    // // precompute
    // int hash[256] = {0};
    // for(int i=0;i<s.length();i++){
    //     hash[s[i]]++;   // this will increase the count of that particular alphabet
    // }

    // int q = 4;
    // while(q--){
    //     char c;
    //     cin >> c;

    //     cout << c << " is appearing for " << hash[c] << " times" <<  endl;  // this will print the count of the indexes
    // }

    // return 0;


    // using hashmap

    // int n = 5;
    // int arr[n] = {1,2,3,1,3};

    // map<int, int> mpp;
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // }

    
  

    // int q = 3;

    // while(q--){
    //     int number;
    //     cin >> number;

    //     cout << number << " is appearing for " << mpp[number] << " times " << endl;
    // }

    // return 0;

    // unordered_map<int, int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }

//       for(auto it : mpp){
//         cout << it.first << "->" << it.second << endl;
//     }

//     int q = 2;
//     while(q--){
//         int number;
//         cin >> number;

//         cout << number << " is appearing " << mpp[number] << " times " << endl;
//     }


    // hashing revision

    // int n = 5;
    // int arr[n] = {1,2,3,1,2};

    // // compute
    // int hash[13] = {0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]++;
    // }

    
    // int q=3;
    // while(q--){
    //     // freq of numbers to find
    //     int number;
    //     cin >> number;

    //     // fetch the number
    //     cout << hash[number] << endl;

    // }


    // char hashing

    // string s = "aabccd";
    

    // precompute
    // int hash[26] = {0};
    // for(int i=0;i<s.size();i++){
    //     hash[s[i] - 'a']++;
    // }

    // int q = 3;
    // while(q--){
    //     char c;
    //     cin >> c;

    //     cout << hash[c - 'a'] << endl;
    // }

    // using map

    // int n = 7;
    // int arr[n] = {1,2,1,2,4,6,4};

    // map <int, int> mpp;
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // }

    // // iterating in the map
    // for(auto it : mpp){
    //     cout << it.first << " -> " << it.second << endl;
    // }

    // int q = 2;
    // while(q--){
    //     int number;
    //     cin >> number;

    //     cout << mpp[number] << endl;
    // }

    // using map for characters

    string s = "abbcccdddd";

    map <char, int> mpp;
    unordered_map <char, int> newmpp;

    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
        newmpp[s[i]]++;
    }

    cout << "ordered map" << endl;
    for(auto it : mpp){
        cout << it.first << " -> " << it.second << endl;
    }

    cout << "unordered map " << endl;
    for(auto it : newmpp){
        cout << it.first << " -> " << it.second << endl;
    }
}






// #include <iostream>
// #include <map>
// #include <unordered_map>
// using namespace std;

// int main() {
//     map<int, string> orderedMap;
//     unordered_map<int, string> unorderedMap;

//     orderedMap[3] = "Three";
//     orderedMap[1] = "One";
//     orderedMap[2] = "Two";

//     unorderedMap[3] = "Three";
//     unorderedMap[1] = "One";
//     unorderedMap[2] = "Two";

//     cout << "Ordered Map:\n";
//     for (auto &p : orderedMap)
//         cout << p.first << " -> " << p.second << endl;

//     cout << "\nUnordered Map:\n";
//     for (auto &p : unorderedMap)
//         cout << p.first << " -> " << p.second << endl;

//     return 0;
// }
