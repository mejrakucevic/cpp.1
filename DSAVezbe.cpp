#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

// Check for Balanced Bracket expression using Stack (resi cu ga jednog dana)

// bool balancedBracketChecker(string brackets, int n) {
//     stack<char>temp;

//     for (int i = 0; i < n; i++) {
//         if(temp.empty()) {
//             temp.push(brackets[i]);
//         }
//      else if ( 
//            (temp.top() == '(' && brackets[i] == ')')
//         || (temp.top() == '{' && brackets[i] == '}')
//         || (temp.top() == '[' && brackets[i] == ']'))
//        {
//         temp.pop();
//      }
//     }
//     if (temp.empty()) {
//         return true;

//     } else return false;
// }
// int main() {

//     string brackets = "([{})";
//     int n = brackets.length();

//     if (balancedBracketChecker(brackets, n)) {
//         cout << "Balanced";
//     } else cout << "Unbalanced";

//     return 0;
// }

// Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value next to each other and preserving the original order of elements.

// For example:

// uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
// uniqueInOrder("ABBCcAD")         == {'A', 'B', 'C', 'c', 'A', 'D'}
// uniqueInOrder([1,2,2,3,3])       == {1,2,3}



 // BUBBLE SORT ALGORITHM
    // int arr[] = {7,6,99,20,1,5,3};
    // int n = sizeof(arr)/sizeof(int);

    // int temp;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n-1; j++) {
    //         if (arr[j] > arr[j+1]) {
    //             temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }