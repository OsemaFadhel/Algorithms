# Algorithms

Collection of different Sorting and Searching Algorithms in C++

## Table of Contents

- [Time Complexity](#time-complexity)
- [Space Complexity](#space-complexity)
- [Logarithmic Time (O(log n))](#understanding-logarithmic-time-olog-n)
- [Sorting Algorithm](#sorting-algorithm)
- [Searching Algorithm](#searching-algorithm)

## Time Complexity

- **Definition:** It measures how the execution time of an algorithm increases with the size of the input. </br>

- **Example:** If you have a list of n numbers and want to find the largest number:
  - In a **loop** through all n numbers, you check each one to see if it's the largest.
  - The more numbers (n) you have, the longer it takes.
  - This process has a **time complexity of O(n)**, meaning the time grows **linearly** with the input size.

### Time Complexity Hierarchy (from fastest to slowest growth):

- **O(1) – Constant Time:**
  - **Why**: The algorithm takes the same amount of time regardless of the input size.
  - **Example**: Accessing an element in an array by index.

- **O(log n) – Logarithmic Time:**
  - **Why**: The algorithm reduces the problem size by a constant factor at each step.
  - **Example**: Binary search, where the search space is halved at each iteration.

- **O(sqrt(n)) – Square Root Time:**
  - **Why**: The algorithm performs operations proportional to the square root of the input size.
  - **Example**: Trial division for finding factors of a number.

- **O(n) – Linear Time:**
  - **Why**: The algorithm’s time grows directly in proportion to the input size.
  - **Example**: Iterating through all elements of a list once.

- **O(n log n) – Log-Linear Time:**
  - **Why**: The algorithm sorts or processes input using both linear and logarithmic factors.
  - **Example**: Mergesort and quicksort (on average), which divide and merge data.

- **O(n²) – Quadratic Time:**
  - **Why**: The algorithm involves two nested loops, processing every pair of elements.
  - **Example**: Bubble sort, where each element is compared with every other element.

- **O(n³) – Cubic Time:**
  - **Why**: The algorithm has three nested loops, processing triplets of elements.
  - **Example**: Algorithms that involve multiple layers of nested operations, such as matrix multiplication.

- **O(2^n) – Exponential Time:**
  - **Why**: The algorithm’s time doubles with each additional element in the input.
  - **Example**: Recursive algorithms like solving the traveling salesman problem by brute force.

- **O(n!) – Factorial Time:**
  - **Why**: The algorithm generates all permutations of the input, leading to extremely high growth.
  - **Example**: Exhaustive search algorithms that generate all possible combinations.

## Space Complexity

- **Definition:** It measures how much **memory** an algorithm needs as the input size grows. </br>

- **Example:** If you need to store a list of n numbers and you don’t create any extra large data structures, your algorithm uses space proportional to n.
  - This process has a **space complexity of O(n)**, meaning it uses memory in proportion to the input size.

### Space Complexity Notations:

**- O(1) – Constant Space:**
  - **Why:** The algorithm uses a fixed amount of memory, regardless of the input size.
  - **Example:** Simple algorithms that only use a few variables, no matter how large the input.

**- O(n) – Linear Space:**
  - **Why:** The algorithm requires memory that grows in direct proportion to the input size.
  - **Example:** Storing an array of n elements.

**- O(n log n) – Log-Linear Space:**
  - **Why:** The algorithm requires memory proportional to both the input size and the logarithm of the input size.
  - **Example:** Mergesort, which needs extra memory to divide and merge the input.

**- O(n²) – Quadratic Space:**
  - **Why:** The memory required grows as the square of the input size.
  - **Example:** Storing a matrix of size n x n.

## Understanding Logarithmic Time (O(log n)):

**- Why it’s common:** Logarithmic time complexity occurs in algorithms that **divide the problem in half** at each step, making it efficient for large datasets.

**- Binary Search:** In binary search, the search space is halved each time, leading to logarithmic growth.

**- Balanced Trees:** Data structures like AVL or red-black trees have insertion and search operations that work in logarithmic time because the height of the tree is proportional to log n.

**- Divide and Conquer Algorithms:** Algorithms like mergesort and quicksort follow the divide-and-conquer principle, where the input is recursively divided into smaller parts.

## Sorting Algorithm

<h1 align="center"> Sort 🔀 📶 </h1>

| Name | Time Complexity | Short Description |
|:-------------:|:---------:|:---------:|
| [Bubble Sort](https://github.com/OsemaFadhel/Algorithms/tree/main/sorting/Bubble%20Sort) | O(n^2) | Compares two adjacent elements and swaps them until they are in the intended order. |
| [Ford-Johnson / Merge-Insertion Sort](https://github.com/OsemaFadhel/Algorithms/tree/main/sorting/Ford%20Johnson) | O(nmlog n) | recursively divides the list into smaller segments, sorting each segment and merging them in a way that minimizes comparisons. |
| [Merge Sort](https://github.com/OsemaFadhel/Algorithms/tree/main/sorting/Merge%20Sort) | O(n log n) | Divide and conquers algorithm, it divides the given array into equal parts and then merges the 2 sorted parts.  |
| [Quick Sort](https://github.com/OsemaFadhel/Algorithms/tree/main/sorting/Quick%20Sort) | O(n log n) | Divide and Conquer that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array. |

## Searching Algorithm

<h1 align="center"> Search 🔎</h1>

| Name | Time Complexity | Short Description |
|:-------------:|:---------:|:---------:|
| [Binary Search](https://github.com/OsemaFadhel/Algorithms/tree/main/searching/Binary%20Search) | O(log n) | Algorithm used in a sorted array by repeatedly dividing the search interval in half. |
| [Linear Search](https://github.com/OsemaFadhel/Algorithms/tree/main/searching/Linary%20Search) | O(N) | Sequentially checks each element of the list until a match is found or the whole list has been searched. |



