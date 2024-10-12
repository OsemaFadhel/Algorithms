# Binary Search

<h2 align="center"> <img src="https://github.com/OsemaFadhel/Algorithms/blob/main/searching/Binary%20Search/binary_search.png" width="800" height="380" /> </h2>

Binary Search is an efficient algorithm used to find the position of a target element in a sorted array. </br>
The main idea behind the algorithm is to repeatedly divide the search interval in half.

## How it works:

- Start by comparing the middle element of the array with the target value.
- If the target value matches the middle element, you've found the target.
- If the target value is smaller than the middle element, repeat the search on the left half of the array.
- If the target value is larger than the middle element, repeat the search on the right half of the array.
- Continue this process until the target is found or the search interval is empty.

## Time Complexity:

- **Best case:** O(1) (when the middle element is the target)
- **Average and Worst case:** O(log n), where n is the number of elements in the array.

## Space Complexity:

- **O(1)** for the iterative approach (since it only uses a few extra variables, regardless of input size).
- **O(log n)** for the recursive approach (due to the space used by the call stack during recursion).

### Binary Search is faster than a linear search for large datasets, but it only works on sorted arrays.
