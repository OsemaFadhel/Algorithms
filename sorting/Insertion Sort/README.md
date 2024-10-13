# Insertion Sort

<h2 align="center"> <img src="" width="400" height="700" /> </h2>


Insertion Sort is a simple sorting algorithm that builds the final sorted array one element at a time. It is much like sorting a deck of cards by repeatedly taking one card and inserting it into its correct position among the already-sorted cards.

## How it works:

- Start with the second element in the array, treating the first element as a sorted subarray.
- Compare the current element with the elements in the sorted subarray, moving elements that are larger than the current element one position to the right.
- Insert the current element into its correct position.
- Repeat for all elements in the array.

## Time Complexity:

- **Best case:** O(n) (when the array is already sorted, and no shifting is needed).
- **Average and Worst case:** O(n²), where n is the number of elements in the array. This occurs when every new element needs to be compared with every other element already in the sorted subarray.

## Space Complexity:

- **O(1)** because insertion sort only requires a constant amount of extra memory for storing variables (e.g., for swapping).

### Insertion Sort is efficient for small datasets or nearly sorted arrays but is not suitable for large datasets due to its quadratic time complexity.
