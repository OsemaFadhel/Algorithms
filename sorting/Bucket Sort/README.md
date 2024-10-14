# Bucket Sort

<h2 align="center"> <img src="https://github.com/OsemaFadhel/Algorithms/blob/main/sorting/Bucket%20Sort/Bucket_sort.png" width="700" height="400" /> </h2>

Bucket Sort is a **distribution sorting** algorithm that distributes elements into several "buckets" and then sorts each bucket individually, often using another sorting algorithm like insertion sort. After sorting, the elements from the buckets are concatenated to form the sorted array.

## How it works:

- Create a number of empty buckets.
- Distribute the elements from the array into these buckets based on a specific criterion (such as element ranges or hash functions).
- Sort the elements within each bucket individually.
- Concatenate the sorted elements from all buckets to form the final sorted array.

## Time Complexity:

- **Best case: O(n + k)**, where n is the number of elements in the array and k is the number of buckets. This occurs when the elements are uniformly distributed across the buckets, and sorting each bucket takes minimal time.
- **Average case: O(n + k)**, assuming uniform distribution and efficient sorting within each bucket.
- **Worst case: O(n²)**, which happens when all elements end up in one bucket, reducing the algorithm to an O(n²) sorting algorithm like insertion sort.

## Space Complexity:

- **O(n + k)**, where n is the number of elements and k is the number of buckets. This accounts for the additional memory needed to store the buckets and their contents.

### Bucket Sort is highly efficient for sorting elements with a uniform distribution and is useful in scenarios where the input elements fall within a known range.
