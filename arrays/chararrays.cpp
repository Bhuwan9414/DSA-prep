// #include<iostream>
// using namespace std;

// int main(){

//     char name[5];

//     cout << "enter your name " << endl;

//     cin >> name;

//     cout << "your name is " << name << endl;

//     int value = (int)name[6];
//     cout << "value is " << value << endl;

// }


// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){

//     char name[100];

//     cout << "enter your name " << endl;

//     // for taking the whole name as input even after having space in between:
//     cin.getline(name, 100);

//     // cin >> name;

//     cout << "your name is " << name << endl;

// }


// #include<iostream>
// #include<string.h>
// using namespace std;

// int getlength(char name[]){

//     int length = 0;
//     int i = 0;

//     while(name[i] != '\0'){
//         length++;
//         i++;
//     }

//     return length;
// }

// int main(){

//     char name[100];

//     cout << "enter name " << endl;

//     cin >> name;

//     cout <<  "length is " << getlength(name) << endl;

//     // predefined function for calculating the length of the string
//     cout << "length is => " << strlen(name) << endl;

// }


// reverse a string :

// #include<iostream>
// #include<string.h>
// using namespace std;

// void reverse(char name[]){

//     int start = 0;
//     int end = strlen(name) - 1;

//     while(start<=end){
//         swap(name[start], name[end]);
//         start++;
//         end--;
//     }

// }

// int main(){

//     char name[100];

//     cout << "enter the string " << endl;
//     cin >> name;

//     reverse(name);

//     cout << name << endl;

// }


// insert a @ in the given string :

// #include<iostream>
// #include<string.h>
// using namespace std;

// void replacewith(char name[]){

//     int n = strlen(name) - 1;

//     for(int i=0;i<n;i++){
//         if(name[i] == ' '){
//             name[i] = '@';
//         }
//     }

// }

// int main(){

//     char name[100];

//     cout << "enter the string " << endl;

//     cin.getline(name, 100);

//     replacewith(name);

//     cout << name << endl;

// }


// check whether given string is palindrome or not :

// #include<iostream>
// #include<string.h>
// using namespace std;

// bool palindrome(char name[]){

//     int start = 0;
//     int end = strlen(name) - 1;

//     if(name[start] == name[end]){
//         start++;
//         end--;
//     }
//     else{
//         return false;
//     }

//     return true;
// }

// int main(){

//     char name[100];

//     cout << "enter the name" << endl;
//     cin >> name;

//     if(palindrome(name)){
//         cout << "string is palindrome" << endl;
//     }
//     else{
//         cout << "string is not a palindrome" << endl;
//     }

// }



// convert the lowercase string into uppercase :

// #include<iostream>
// #include<string.h>
// using namespace std;

// void uppercase(char name[]){

//     int n = strlen(name);

    


//     for(int i=0;i<n;i++){
//         if(name[i] > 'a' && name[i] <= 'z'){   // if condition to check whether the letter is in lowercase or not
//             name[i] = name[i] - 'a' + 'A';    // conversion of lowercase letter to uppercase letter 
//         } 
//     }
// }

// int main(){

//     char name[100];
    
//     cout << "enter your name " << endl;
//     cin >> name;

//     uppercase(name);
//     cout << name << endl;

// }



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