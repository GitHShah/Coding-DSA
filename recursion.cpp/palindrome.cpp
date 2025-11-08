#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(string word, int start , int end ){
if(start>=end)
return true;

if(word[start]!=word[end])
return false;

return isPalindrome(word, start+1 , end-1 );

}




int main() {
    string word1 = "racecar";
    string word2 = "level";
    string word3 = "hello";

    cout << word1 << " is a palindrome: " << (isPalindrome(word1,0,word1.length()-1) ? "True" : "False") << endl;
    cout << word2 << " is a palindrome: " << (isPalindrome(word2,0,word2.length()-1) ? "True" : "False") << endl;
    cout << word3 << " is a palindrome: " << (isPalindrome(word3,0,word3.length()-1) ? "True" : "False") << endl;

    return 0;
}