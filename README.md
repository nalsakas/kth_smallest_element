# kth_smallest_element
Find kth smallest element for a given array

# Problem Statement
For any given vector of integers find smallest kth element

# Solution:
- Instead of sorting whole array and accessing kth element, Sort only k element and return result
- Bubble sort is a good candidate to selectively sort a few items
- Use bubble sort to sort only kth smaller items
- Return result