[TOC]
# general
如果能写出来递归树，那这题也就做完90%了

# knapsack
## 01
40 - Count all subsequences having product less than K  
I 15 - Dice Throw 优化的思想绝了 https://github.com/shaozhefeng/Contest/blob/master/geeks/I-15.cpp  
I 22 - Partition Problem
I 54 - Find all distinct subset sums of an array


## complete
55 - Maximum number of segments of lengths a, b and c  
79 - Find number of solutions of a linear equation of n variables

# Sequences
1. 第i个状态需要前两个状态求出（i-1，i-2），一般空间可以优化到 O(1)。
2. 两个序列的话，可以画图。
3. 二维dp，如果当前状态只用到了前一行，是不是可以优化空间？
4. trying to simplify

30 - Count even length binary sequences with same sum of first and second half bits: https://github.com/shaozhefeng/Contest/blob/master/geeks/30.cpp  
31 - every element is more than or equal to twice of previous: https://github.com/shaozhefeng/Contest/blob/master/geeks/B-31.cpp  
I 32 - Count All Palindromic Subsequence in a given String 这题可以按着最长回文序列来做，但是geeks给的答案也比较有意思。

## Similar
I 40 - Shortest Uncommon Subsequence: https://github.com/shaozhefeng/Contest/blob/master/geeks/I-40.cpp  
I 42 - Count Distinct Subsequences: https://leetcode.com/problems/distinct-subsequences/  
I 43 - Count distinct occurrences as a subsequence: https://leetcode.com/problems/distinct-subsequences-ii/

## LIS
34 - Longest Increasing Subsequence  
97 - Convert to Strictly increasing integer array with minimum changes  
I 19 - Box Stacking

## LCS
32 - Longest common subsequence  
35 - A Space Optimized Solution of LCS  
I 41 - Longest Repeating Subsequence 
I 55 - Print all longest common sub-sequences in lexicographical order (backtracking)  

# Bi
37 - Maximum sum Bi-tonic Sub-sequence  
I 13 - Temple Offerings

# subarray
52 - Size of The Subarray With Maximum Sum
93 - Largest Sum Contiguous Subarray

# submatrix
`54` - Maximum size square sub-matrix with all 1s

# 逆向思维
`48` - Maximum games played by winner

# 选当前element或者不选，(more generally，当前element满足某个条件或者不满足某个条件）
31 - Sequences of given length where every element is more than or equal to twice of previous  
41 - Maximum subsequence sum such that no three are consecutive  
53 - Maximum sum of pairs with specific difference `(trying to simplify)`  
62 - Maximize the sum of selected numbers from an array to make it empty  
78 - Find maximum possible stolen value from houses  
85 - Counting pairs when a person can form pair with at most one  
`88` - Count of arrays having consecutive element with different values 递归树  

# 递归树入手
69 - Minimum removals from array to make max – min <= K  
`I 18` - Tile Stacking https://iq.opengenus.org/tile-stacking-problem/

# Number
1 - Ungly number 羊毛出自羊身上  
I 5 - dearrangement https://en.m.wikipedia.org/wiki/Derangement  


# Interesting
75 - Sum of all substrings of a string representing a number | Set 1  
98 - Longest alternating (positive and negative) subarray starting at every index  
`101` - Number of n-digits non-decreasing integers  
`I 14` - Egg Dropping Puzzle

# String
I 16 - Word Break

# Tree
I 17 - Vertex Cover  
I 21 - Largest Independent Set

# Encouragement
102 - Number of ways to arrange N items under given constraints  
I 2 - Eulerian Number  
I 20 - Highway Billboard







