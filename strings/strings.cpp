//  string begins :

// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
   
//     string str;

//     cout << "enter the string " << endl;
//     cin >> str;

//     cout << "u entered " << str << endl;


//     // function to find the length of the string
//     cout << "length is " << str.length() << endl;

//     // function to insert a new character in a string :
//     str.push_back('S');
//     cout << "edited string is " << str << endl;

//     // function to remove a char from a string :
//     str.pop_back();
//     cout << "after popping " << str << endl;
     
// }


// checking if given two strings are same or not :

// #include<iostream>
// using namespace std;

// bool compare(string str1, string str2){

//     // int j = 0;
//     for(int i=0;i<str1.length();i++){
//         if(str1[i] != str2[i]){
//             return false;
//         }
//         i++;
//     }

//     return true;

// }

// int main(){

//     string str1 = "bhuwan";
//     string str2 = "bhusdwan";


//     if(compare(str1, str2)){
//         cout << "strings are same " << endl;
//     }
//     else{
//         cout << "strings are not same " << endl;
//     }

// }




// remove all adjacent duplicates in a string :

// #include<iostream>
// #include<string.h>
// using namespace std;

// string adjacent(string str, int n){

//     string ans = "";
//     for(int i=0;i<n;i++){
        
//         if(ans[ans.length()-1] == str[i]){
//             ans.pop_back();
//         }
//         else{
//             ans.push_back(str[i]);
//         }
//     }

//     return ans;

// }

// string duplicate(string str, int n){

//     string ans = "";
//     int i = 0;

//     while(i < str.length()){
        
//         if(ans.length() > 0){
//             if(ans[ans.length()-1] == str[i]){
//                 ans.pop_back();
//             }
//             else{
//                 ans.push_back(str[i]);
//             }
//         }
//         else{
//             ans.push_back(str[i]);
//         }
//         i++;
//     }

//     return ans;
// }

// int main(){

//     string str = "aabbccghiffggyy";
//     int n = str.length();

//     string result = duplicate(str, n);
    
//     cout << "resultant string is " << result << endl;

// }




// removing a given substring from a string :

// #include<iostream>
// #include<string.h>
// using namespace std;

// string removeocc(string str, string part){

//     int pos = str.find(part);
//     while(pos != string :: npos){
//         str.erase(pos, part.length());
//         pos = str.find(part);
//     }

//     return str;

// }

// int main(){

//     string str = "axxxxyyyyb";
//     string part = "xy";

//     string ans = removeocc(str, part);
//     cout << "resultant string is " << ans << endl;

// }


// checking for a valid palindrome by removing atmost one character:

// #include<iostream>
// using namespace std;

// bool palindrome(string str, int start, int end){

//     while(start<=end){
//         if(str[start] != str[end])
//             return false;
//             start++;
//             end--; 
//         }
//         return true;
//     }



// bool palindrome2(string str, int n){

//     int start = 0;
//     int end = n - 1;

//     while(start <= end){
//         if(str[start] != str[end]){
//             return palindrome(str, start+1,end) || palindrome(str, start, end-1);
//         }
//         else{
//             start++;
//             end--;
//         }
        
//     }
// }

// int main(){

//     string str = "abab";
//     int n = str.length();

//     if(palindrome2(str,n)){
//         cout << "can be a valid palindrome " << endl;
//     }
//     else{
//         cout << "not a valid palindrome" << endl;
//     }
// }


// #include<iostream>
// #include<string.h>
// using namespace std;

// int mins(string time){

//     int minutes[10];

//     for(int i=0;i<time.size();i++){
//         string curr = time[i];

//         int hours = stoi(curr.substr(0,2));
//     }

// }

// int main(){

//     string time;

// }