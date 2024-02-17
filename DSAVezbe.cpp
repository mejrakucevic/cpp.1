#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// Check for Balanced Bracket expression using Stack

bool balancedBracketChecker(string brackets, int n) {
    stack<char>temp;

    for (int i = 0; i < n; i++) {
        if(temp.empty()) {
            temp.push(brackets[i]);
        }
     else if ( 
           (temp.top() == '(' && brackets[i] == ')')
        || (temp.top() == '{' && brackets[i] == '}')
        || (temp.top() == '[' && brackets[i] == ']'))
       {
        temp.pop();
     }
    }
    if (temp.empty()) {
        return true;

    } else return false;
}
int main() {

    string brackets = "([{})";
    int n = brackets.length();

    if (balancedBracketChecker(brackets, n)) {
        cout << "Balanced";
    } else cout << "Unbalanced";

    return 0;
}