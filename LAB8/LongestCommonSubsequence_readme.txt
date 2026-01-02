EXPERIMENT TITLE
Longest Common Subsequence (LCS) Using Dynamic Programming in C

DESCRIPTION
This project implements the Longest Common Subsequence (LCS) algorithm using Dynamic Programming in the C programming language.
The program computes both:
• The length of the LCS
• The actual LCS string

The solution is suitable for Data Structures & Algorithms labs, exam preparation, and academic projects.

PROBLEM STATEMENT
Given two strings X and Y, find the Longest Common Subsequence such that:
• The subsequence appears in both strings
• Characters need not be contiguous
• Order of characters must be preserved

ALGORITHM USED
Dynamic Programming (Bottom-Up)

A 2D table dp[i][j] is constructed where:
• dp[i][j] stores the length of the LCS of the first i characters of X and the first j characters of Y

After building the table, backtracking is used to print the LCS string.

INPUT
• First string
• Second string

OUTPUT
• Longest Common Subsequence
• Length of the LCS

SAMPLE INPUT
Enter first string:
ABCBDAB

Enter second string:
BDCAB

SAMPLE OUTPUT
Longest Common Subsequence: BCAB
Length of LCS: 4

TIME COMPLEXITY

Let:
n = length of first string
m = length of second string

Time Complexity:
O(n × m)

SPACE COMPLEXITY

Uses a 2D DP table of size (n+1) × (m+1)

Space Complexity:
O(n × m)

FEATURES
• Efficient dynamic programming solution
• Prints both LCS length and sequence
• Easy to understand and modify
• Suitable for lab and exam use

LIMITATIONS
• Uses O(n × m) space
• Not optimized for very large strings
• Assumes strings contain no spaces

APPLICATIONS
• File comparison tools (diff utilities)
• DNA / protein sequence analysis
• Plagiarism detection
• Version control systems
• Text similarity analysis

COMPILATION & EXECUTION

Compile:
gcc lcs.c -o lcs

Run:
./lcs

FILES INCLUDED
• lcs.c – Source code for LCS implementation
• README – Project documentation

CONCLUSION
The Longest Common Subsequence problem was successfully implemented using Dynamic Programming. The approach efficiently computes the optimal solution and demonstrates the power of DP in solving overlapping subproblems.