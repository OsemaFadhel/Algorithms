# Merge Sort

<h2 align="center"> <img src="https://github.com/OsemaFadhel/Algorithms/blob/main/sorting/Merge%20Sort/merge_sort.png" width="450" height="500" /> </h2>

Merge Sort is a divide and conquer sorting algorithm that splits the array into smaller subarrays, sorts them, and then merges them back together in sorted order.

## How it works:

- Divide the array into two halves.
- Recursively apply merge sort to each half.
- Once both halves are sorted, merge them together to form a single sorted array.
- Repeat this process until the entire array is sorted.

## Time Complexity:

- **Best, Average, and Worst case:** O(n log n), where n is the number of elements in the array. The log n factor comes from dividing the array in half at each step, and the n factor comes from merging the subarrays.

## Space Complexity:

- **O(n)** because merge sort requires additional memory to store the temporary arrays during the merging process.

### Merge Sort is more efficient than bubble sort and works well for large datasets, but it uses more memory due to the need for auxiliary arrays.
