EXPERIMENT TITLE
Implementation of Knuth–Morris–Pratt (KMP) Algorithm for Pattern Matching Using C

OBJECTIVE
To implement the Knuth–Morris–Pratt (KMP) string matching algorithm in C to efficiently find all occurrences of a pattern within a given text.

PROBLEM STATEMENT
Given a text string and a pattern string, design and implement an algorithm to determine all positions where the pattern occurs in the text using the KMP algorithm.

THEORY

String matching is a fundamental problem in computer science. The naïve pattern matching algorithm may require rechecking characters, leading to inefficient performance.

The Knuth–Morris–Pratt (KMP) algorithm improves efficiency by avoiding unnecessary comparisons. It preprocesses the pattern to create a Longest Prefix Suffix (LPS) array, which stores information about proper prefixes that are also suffixes.

Using the LPS array, KMP ensures that the text pointer never moves backward, achieving linear time complexity.

ALGORITHM

Step 1: Compute LPS Array

Initialize lps[0] = 0

Compare pattern characters to build longest prefix-suffix values

Store prefix lengths in the lps array

Step 2: Pattern Searching

Initialize indices i (text) and j (pattern)

Compare characters text[i] and pattern[j]

If they match, increment both i and j

If j reaches pattern length, report a match

If mismatch occurs, use lps[] to shift the pattern efficiently

INPUT

• Text string
• Pattern string

OUTPUT

• Index positions where the pattern is found in the text
OR
• Message indicating that the pattern is not found

TIME COMPLEXITY

Let:
n = length of text
m = length of pattern

• LPS computation: O(m)
• Pattern matching: O(n)

Overall Time Complexity:
O(n + m)

SPACE COMPLEXITY

• LPS array of size m

Space Complexity:
O(m)

ADVANTAGES

Linear time complexity.

No backtracking in the text.

Efficient for large texts.

Suitable for real-time pattern matching.

LIMITATIONS

Slightly complex preprocessing step.

Requires additional memory for LPS array.

Less intuitive than naïve algorithm.

APPLICATIONS

• Text editors and search utilities
• DNA sequence matching
• Intrusion detection systems
• Plagiarism detection
• Compiler design (lexical analysis)

RESULT

The Knuth–Morris–Pratt algorithm was successfully implemented in C. The program efficiently finds all occurrences of a given pattern in the input text using the LPS array.

CONCLUSION

The KMP algorithm significantly improves string matching efficiency by eliminating redundant comparisons. Its linear time complexity makes it suitable for applications requiring fast and reliable pattern searching.