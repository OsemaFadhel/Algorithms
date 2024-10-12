# Linear Search

<h2 align="center"> <img src="https://github.com/OsemaFadhel/Algorithms/blob/main/searching/Linear%20Search/linear_search.png" width="450" height="600" /> </h2>

Linear Search is a simple algorithm used to find the position of a target element in an unsorted or sorted array. It works by checking each element in the array, one by one, until the target is found or the end of the array is reached.

## How it works:

- Start from the first element of the array.
- Compare the current element with the target value.
- If the current element matches the target, return its position.
- If not, move to the next element and repeat steps 2–3.
- Continue until the target is found or all elements have been checked.

## Time Complexity:

- **Best case:** O(1) (when the target is the first element).
- **Average and Worst case:** O(n), where n is the number of elements in the array.

## Space Complexity:

- **O(1)** since linear search only requires a constant amount of extra memory to store variables (e.g., index, target).

### Linear Search is simple and works on both sorted and unsorted arrays, but it is less efficient than Binary Search for large datasets.
