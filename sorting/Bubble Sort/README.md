# Bubble Sort

<h2 align="center"> <img src="https://github.com/OsemaFadhel/Algorithms/blob/main/sorting/Bubble%20Sort/bubble_sort.png" width="700" height="400" /> </h2>

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

## How it works:

- Start at the beginning of the array.
- Compare the current element with the next one.
- If the current element is larger than the next one, swap them.
- Move to the next pair of elements and repeat steps 2–3.
- Once the end of the array is reached, repeat the process from the beginning until no swaps are needed, indicating that the array is sorted.

## Time Complexity:

- **Best case:** O(n) (when the array is already sorted, and no swaps are required).
- **Average and Worst case:** O(n²), where n is the number of elements in the array (due to the nested loops comparing each element with others).

## Space Complexity:
- **O(1)** because bubble sort only uses a constant amount of extra memory for variables (i.e., for swapping).

### Bubble Sort is easy to implement but inefficient for large datasets compared to more advanced sorting algorithms like quicksort or mergesort.
