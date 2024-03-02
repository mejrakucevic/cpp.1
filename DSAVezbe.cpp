#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>

using namespace std;


// ----------------------------------------------------------------------------------------------------------------------------------
// Two Sum (1. Leetcode)

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
// Squares of a Sorted Array (977. Leetcode)

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


// ----------------------------------------------------------------------------------------------------------------------------------
// Palindrome Number (9. Leetcode)

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

// ----------------------------------------------------------------------------------------------------------------------------------
