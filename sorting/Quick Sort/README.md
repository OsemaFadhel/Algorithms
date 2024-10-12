# Quick Sort

<h2 align="center"> <img src="https://github.com/OsemaFadhel/Algorithms/blob/main/sorting/Quick%20Sort/quick_sort.png" width="700" height="400" /> </h2>

Quick Sort is a divide and conquer sorting algorithm that selects a "pivot" element from the array and partitions the other elements into two subarrays, according to whether they are less than or greater than the pivot. The subarrays are then sorted recursively.

## How it works:

- Choose a pivot element from the array.
- Partition the array so that elements smaller than the pivot are on the left, and elements larger than the pivot are on the right.
- Recursively apply quick sort to the left and right subarrays.
- Combine the results to get a sorted array.

## Time Complexity:

- **Best and Average case:** O(n log n), where n is the number of elements in the array. This occurs when the pivot divides the array evenly.
- **Worst case:** O(n²), which happens when the pivot is the smallest or largest element, leading to an unbalanced partition.

## Space Complexity:

- **O(log n)** for the **best and average case** (due to recursive calls on the stack).
- **O(n)** for the **worst case**, where the recursion depth could be as deep as the number of elements in the array.

### Quick Sort is efficient and widely used for large datasets due to its average-case performance, but care must be taken to avoid worst-case scenarios (e.g., by using techniques like choosing a random pivot or median).
