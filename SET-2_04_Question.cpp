/*
4)A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and
removing all non-alphanumeric characters, it reads the same forward and backward.
Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:
Input: s = “A man, a plan, a canal: Panama”
Output: true
Explanation: “amanaplanacanalpanama” is a palindrome.
Example 2:
Input: s = “race a car”;
Output: false.
*/
#include <iostream>
using namespace std ;

class Solution {
public:
    bool isPalindrome(string s) {
        // Convert to lowercase and remove non-alphanumeric characters
        string cleaned;
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }

        // Check if cleaned string is a palindrome
        int left = 0, right = cleaned.size() - 1;
        while (left < right) {
            if (cleaned[left] != cleaned[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

   int main() {
    Solution solution;
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";

    cout << boolalpha << solution.isPalindrome(s1) << endl; 
    cout << boolalpha << solution.isPalindrome(s2) << endl; 

    return 0;
}


