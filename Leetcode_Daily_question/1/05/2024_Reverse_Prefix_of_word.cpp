#include<iostream>
#include<string>
#include<vector>
using namespace std;


string reversePrefix(string word, char ch) {
    string reverse_word;
    int wordLen = word.length();
    int last = -1; // Start from -1 to account for zero-based indexing

    // Find the index of the first occurrence of ch
    for (int i = 0; i < wordLen; i++) {
        if (word[i] == ch) {
            last = i;
            break;
        }
    }

    // If ch is not found, return the original word
    if (last == -1) {
        return word;
    }

    // Reverse the prefix
    for (int i = last; i >= 0; i--) {
        reverse_word.push_back(word[i]);
    }

    // Append the remaining characters after the prefix
    for (int i = last + 1; i < wordLen; i++) {
        reverse_word.push_back(word[i]);
    }

    return reverse_word;
}


int main(){
    string word;
    char ch;
    cout<<"Enter the string : ";
    cin>>word;
    cout<<"Enter the word  :";
    cin>>ch;
    string str = reversePrefix(word,ch);
    cout<<str;
    return 0;
}