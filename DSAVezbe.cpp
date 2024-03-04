#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>

using namespace std;


// ----------------------------------------------------------------------------------------------------------------------------------
// Two Sum (1. Leetcode) TREBA OPTIMIZACIJA▭ 

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// RESENJE
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//     for (int i = 0; i < nums.size(); i++) {
//          for (int j = i+1; j < nums.size(); j++) {
//             if ( nums[i] +  nums[j] == target) {
//                 return {i, j}; 
//             }
//     };
        
//     } return {};
// }};

// ----------------------------------------------------------------------------------------------------------------------------------
// Squares of a Sorted Array (977. Leetcode) TREBA OPTIMIZACIJA▭ 

// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]

// RESENJE

// int squares(int nums[], int &n) {
//     for (int i = 0; i < n; i++) {
//         nums[i] = nums[i] * nums[i];
        
//     }

//      for (int i = 0; i < n; i++) {
//         cout << nums[i] << " ";
        
//     }
// }
// int sort(int nums[], int &n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1; j < n; j++) {
//             if (nums[i] > nums[j]) {
//                 int temp = nums[i];
//                 nums[i] = nums[j];
//                 nums[j] = temp;
//             }
//         }
//     }
//      for (int i = 0; i < n; i++) {
//         cout << nums[i] << " ";  
//     }
// }
// int main(){
//     int nums[] = {-7,-3,2,3,11};
//     int n = sizeof(nums)/sizeof(int);

//     squares(nums, n);
//     sort(nums, n);

//     return 0;
// }

// ----------------------------------------------------------------------------------------------------------------------------------
// Palindrome Number (9. Leetcode) TREBA OPTIMIZACIJA▭  al pod hitno

// Given an integer x, return true if x is a 
// palindrome and false otherwise.

// Example 1:

// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.
// Example 2:

// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

// RESENJE

int main() {
     int x = -121;
     int digit;
     string digits;

     if (x < 0) {
      return false;
     }
    
      while (x>0) {
        digit = x%10;                      // 121 % 10 = 1 -> 1 % 10 = 2 -> 2 % 10 = 2
        digits += to_string(digit);
        x = x/10;
      }

      string reversed = digits;
      reverse(reversed.begin(), reversed.end());

      if (reversed == digits) {
        cout << "true";
      } else cout << "false";

       

    return 0;
}

// ----------------------------------------------------------------------------------------------------------------------------------

// Merge Two Sorted Lists (21. Leetcode)

// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

// Example 1:
//  Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: list1 = [], list2 = []
// Output: []
// Example 3:

// Input: list1 = [], list2 = [0]
// Output: [0]