[TOC]
# general
如果能写出来递归树，那这题也就做完90%了  
如果 bottom up 很麻烦的话，直接递归树加 dp table  
问题规模很大的时候，如果这题用dp解决，那必然是从小往大计算，这时我们可以先关注大规模问题中的`比较小的子问题`  

# Focus
1. Init
2. Exist condition
3. Which dp value is final result

# knapsack
1. 初始状态
2. 边界状态
3. 转移时的越界
## 01
40 - Count all subsequences having product less than K  
I 15 - Dice Throw 优化的思想绝了 `has code`  
I 22 - Partition Problem  
I 54 - Find all distinct subset sums of an array  
I 58 - Non-decreasing subsequence of size k with minimum sum  
I 106 - Maximum number of trailing zeros in the product of the subsets of size k `has code`  
`I 124` - Clustering/Partitioning an array such that sum of square differences is minimum  


## complete
55 - Maximum number of segments of lengths a, b and c  
79 - Find number of solutions of a linear equation of n variables

## 
175 - Ways to arrange Balls such that adjacent balls are of different types `has code`  

# Sequences
1. 第i个状态需要前两个状态求出（i-1，i-2），一般空间可以优化到 O(1)。
2. 两个序列的话，可以画图。
3. 二维dp，如果当前状态只用到了前一行，是不是可以优化空间？
4. trying to simplify
5. 左右对称的题，一般就像剥洋葱一样

30 - Count even length binary sequences with same sum of first and second half bits `has code`  
31 - every element is more than or equal to twice of previous `has code`  
I 32 - Count All Palindromic Subsequence in a given String 这题可以按着最长回文序列来做，但是geeks给的答案也比较有意思。

## Similar
I 40 - Shortest Uncommon Subsequence `has code`  
I 42 - Count Distinct Subsequences: https://leetcode.com/problems/distinct-subsequences/  
I 43 - Count distinct occurrences as a subsequence: https://leetcode.com/problems/distinct-subsequences-ii/

## LIS
34 - Longest Increasing Subsequence  
97 - Convert to Strictly increasing integer array with minimum changes  
I 19 - Box Stacking
I 108 - Minimum insertions to sort an array  
`I 44` - LCS + LIS  

## LCS
32 - Longest common subsequence  
35 - A Space Optimized Solution of LCS  
I 41 - Longest Repeating Subsequence 
I 55 - Print all longest common sub-sequences in lexicographical order (backtracking)  
I 56 - Printing Longest Common Subsequence | Set 2 (Printing All)  
I 59 - Longest Common Subsequence with at most k changes allowed  
I 126 - Minimum cost to make Longest Common Subsequence of length k  

# Bi
37 - Maximum sum Bi-tonic Sub-sequence  
I 13 - Temple Offerings  
`I 101` - Maximum profit by buying and selling a share at most twice  
I 105 - Maximum points collected by two persons allowed to meet once  
`I 94` - Maximum sum subarray removing at most one element  


# Array subarray
52 - Size of The Subarray With Maximum Sum
93 - Largest Sum Contiguous Subarray
`I 96` - Maximum Product Subarray | Added negative product case  
I 180 - Pyramid form (increasing then decreasing) consecutive array using reduce operations `TODO`  

# Consecutive
I 125 - Minimum sum subsequence such that at least one of every four consecutive elements is picked  
I 138 - Find minimum sum such that one of every three consecutive elements is taken  

# Matrix
`54` - Maximum size square sub-matrix with all 1s  
`I 104` - Finding the maximum square sub-matrix with all equal elements  
I 65 - Collect maximum coins before hitting a dead end  
I 69 - Count number of paths with at-most k turns GOT IT  
I 107 - Minimum Sum Path In 3-D Array  
I 109 - Minimum sum submatrix in a given 2D array  


# Game
`48` - Maximum games played by winner  逆向思维
`I 66` - Coin game winner where every player has three choices  
I 152 - Optimal Strategy for a Game  


# 选当前element或者不选，(more generally，当前element满足某个条件或者不满足某个条件）
31 - Sequences of given length where every element is more than or equal to twice of previous  
41 - Maximum subsequence sum such that no three are consecutive  
53 - Maximum sum of pairs with specific difference `(trying to simplify)`  
62 - Maximize the sum of selected numbers from an array to make it empty  
78 - Find maximum possible stolen value from houses  
85 - Counting pairs when a person can form pair with at most one  
`88` - Count of arrays having consecutive element with different values 递归树  
I 60 - Weighted Job Scheduling https://leetcode.com/problems/maximum-profit-in-job-scheduling/description/ 查询用map的操作是真的骚  
I 155 - Largest divisible pairs subset  

# 递归树入手
69 - Minimum removals from array to make max – min <= K  
`I 18` - Tile Stacking https://iq.opengenus.org/tile-stacking-problem/

# Number
1 - Ungly number 羊毛出自羊身上  
I 5 - dearrangement https://en.m.wikipedia.org/wiki/Derangement  
I 84 - dearrangement  
I 159 - Non-crossing lines to connect points in a circle `catalan`  

# Digits
`101` - Number of n-digits non-decreasing integers  
`I 157` - Compute sum of digits in all numbers from 1 to n  
I - 164 Number of n digit stepping numbers  

# Interesting
`I 14` - Egg Dropping Puzzle  

# String
I 16 - Word Break
I 122 - Minimal moves to form a string by adding characters or appending string itself  
I 139 - Find number of times a string occurs as a subsequence in given string  
I 141 - Find length of longest subsequence of one string which is substring of another string  
I 143 - Wildcard Pattern Matching https://leetcode.com/problems/wildcard-matching/description/  


# Tree
I 17 - Vertex Cover  
I 21 - Largest Independent Set
I 167 - Number of ways to form a heap with n distinct integers  

# Backtracking
I 85 - Count total number of N digit numbers such that the difference between sum of even and odd digits is 1  

# Math
I 67 - Probability of getting at least K heads in N tosses of Coins  
I 73 - Count all triplets whose sum is equal to a perfect cube  
I 146 - Check if any valid sequence is divisible by M `has code`  
I 150 - Given a large number, check if a subsequence of digits is divisible by 8  
https://leetcode.com/problems/largest-multiple-of-three/description/  
I 156 - Sum of average of all subsets `combination`  
I 158 - Total number of non-decreasing numbers with n digits  
I 165 - Number of substrings divisible by 8 but not by 3  

# Bitmasking
I 79 - Count ways to assign unique cap to every person

# Bit
I 166 - Number of ordered pairs such that (Ai & Aj) = 0  

# Done
75 - Sum of all substrings of a string representing a number | Set 1  
102 - Number of ways to arrange N items under given constraints  
I 2 - Eulerian Number  
I 20 - Highway Billboard
I 153 - Optimal Binary Search Tree `has code`  
I 154 - Number of permutation with K inversions `has code`  

# Kidding
I 112 - Paper Cut into Minimum Number of Squares | Set 2  