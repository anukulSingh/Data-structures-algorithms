#include <iostream>
using namespace std;


// c++ strings
// void examples (string str) {
//     cout << str.length();
//     str += "xyz"; // concat
//     cout << str <<"\n";
//     cout << str.substr(2,4)<< "\n";
//     cout << str.find("eksf");

//     // we can use operators to compare two strings lexicographically unlike strcmp() (overloaded already)
//     // getline(cin, s) reads, getline(cin, s, 'b) reads till b is encountered
// }


//print frequencies of characters in a sorted array
// void printFreq(string s) {
//     int count[26] = {0}; // index acts as character and value acts as frequency of that char.
//     for (int i = 0; i < s.length(); ++i) {
//         count[s[i] - 'a']++;
//     }
//     for (int i = 0; i < 26; ++i) {
//         if(count[i] > 0) 
//             cout << (char)(i + 'a') << " "<< count[i] << "\n";
//     }
// }

// palindrome
// Naive reverse and check
// bool checkPalindrome(const string &str) {
//     int begin = 0;
//     int end = str.length() -1;
//     while (begin < end) {
//         if (str[begin] != str[end])
//             return false;
//         begin++;
//         end--;
//     }
//     return true;
// }

// check if a string is subsequence of main string
// bool isSubsequence (const string &str1, const string &str2) {
//     int j = 0;
//     for (int i = 0; i < str1.length() && j < str2.length(); i++)
//         if (str1[i] == str2[j])
//             j++;
//     return (j == str2.length());
// }

// check for anagrams
// naive - sort and compare
bool isAnagram (const string &str1, const string &str2) {
    if (str1.length() != str2.length()) return false;

    int count[26] = {0};
    for (int i = 0; i < str1.length(); ++i) {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for (int i = 0; i < 26; ++i)
        if (count[i] != 0)
            return false;
    return true;
}

int main() {
    // string s = "malayalam";
    // printFreq(s);

    // examples(s);

    // checkPalindrome(s) ? cout << "palindrome" : cout << "not a palindrome";

    // string s = "brinjal";
    // isSubsequence(s, "ral") ? cout << "A subsequence" : cout << "not a subsequence";

    isAnagram("silent","listen") ? cout << "An anagram" : cout << "not an anagram";

    return 0;
}