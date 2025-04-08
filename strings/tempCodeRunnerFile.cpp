#include<iostream>
using namespace std;

bool palindrome(string str, int start, int end) {
    while (start <= end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

string palindrome2(string str, int n) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        if (str[start] != str[end]) {
            // Check by skipping either start or end character
            if (palindrome(str, start + 1, end) || palindrome(str, start, end - 1)) {
                return "YES";  // It can be a palindrome by removing one character
            } else {
                return "NO";  // It cannot be a palindrome by removing one character
            }
        }
        start++;
        end--;
    }

    return "YES"; // The original string is already a palindrome
}

int main() {
    string str = "abaesfd";
    int n = str.length();

    string result = palindrome2(str, n);
    cout << "Can it be a palindrome by removing one character? " << result << endl;

    return 0;
}
