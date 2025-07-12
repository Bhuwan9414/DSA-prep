#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include<algorithm>
using namespace std;

// Given a string s, the task is to check if it is palindrome or not.

bool palindrome(string str)
{

    int low = 0;
    int high = str.length() - 1;

    while (low <= high)
    {
        if (str[low] != str[high])
        {
            return false;
        }
        else
        {
            low++;
            high--;
        }
    }
    return true;
}

// reverse a given string

string reverse(string str)
{

    if (str.length() == 0)
        return 0;

    int low = 0, high = str.length() - 1;

    while (low <= high)
    {

        swap(str[low], str[high]);

        low++;
        high--;
    }

    return str;
}

// Reverse Words in a String

string reversewords(string str)
{

    int i = 0;
    int n = str.length();
    vector<string> words;

    while (i < n)
    {

        while (i < n && str[i] == ' ')
            i++;
        int start = i;
        while (i < n && str[i] != ' ')
            i++;

        if (start < i)
        {
            words.push_back(str.substr(start, i - start));
        }
    }

    string result;

    for (int j = words.size() - 1; j >= 0; j--)
    {
        result += words[j];
        if (j > 0)
            result += ' ';
    }
    return result;
}

// check if the given string is the rotation of goal string or not after some no of shifts in the goal string

bool checkrotation(string str, string goal)
{

    if (str.length() != goal.length())
        return false;

    return (str + str).find(goal) != string ::npos;
}

// find first non repeating char in a given string:

void nonrepeat(string str)
{

    unordered_map<char, int> mpp;

    // string the frequency of each char in hashmap
    for (int i = 0; i < str.length(); i++)
    {
        mpp[str[i]]++;
    }

    // loop through the map with checking which char appear once and return that char
    for (char ch : str)
    {
        if (mpp[ch] == 1)
        {
            cout << "this is the first char appearing once : " << ch << endl;
            return;
        }
    }
    cout << "no char appearing once" << endl;
}

// find the longest common prefix in a array of strings :

string common(vector<string> strs)
{

    if (strs.empty())
        return "";

    int n = strs.size();

    for (int i = 0; i < n; i++)
    {
        char c = strs[0][i];
        for (int j = 1; j < strs.size(); j++)
        {
            if (i > strs[j].size() || strs[j][i] != c)
            {
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0];
}

// convert roman number into integers

int romantoint(string str)
{

    unordered_map<char, int> romanMap = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

    int total = 0;
    for(int i=0;i<str.length();i++){

        int val = romanMap[str[i]];
        int nextval = romanMap[str[i+1]];

        if(val<nextval){
            total -= val;
        }
        else{
            total += val;
        }
    }
    return total;
}

// check if two strings are isomorphic of each other or not

bool isomorphic(string st, string ts){

    unordered_map<char,char> mapst;
    unordered_map<char, char> mapts;

    for(int i=0;i<st.length();i++){
        char s = st[i];
        char t = ts[i];
        if(mapst.count(s)){
            if(mapst[s] != t) return false;

        }
        else{
            mapst[s] = t;
        }

        if(mapts.count(t)){
            if(mapts[t] != s) return false;
        }
        else{
            mapts[t] = s;
        }
    }
    return true;
}

// sort given characters in a string by their frequency:

// string sorting(string str){

//     unordered_map<char, int> mpp;

//     for(char ch : str){
//         mpp[ch]++;
//     }

//     vector<string> bucket(str.length() + 1);
//     for(auto [ch, count] : mpp){
//         bucket[count] += string(count,ch);
//     }

//     string result;
//     for (int i = bucket.size() - 1; i >= 0; i--) {
//         if (!bucket[i].empty()) {
//             result += bucket[i];
//         }
//     }

//     return result;

// }

int main()
{

    string str = "tree";


}