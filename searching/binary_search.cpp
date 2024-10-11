#include <iostream>
#include <algorithm>

// Binary Search
// Array needs to be sorted first
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Method: Divide and Conquer

int binarySearch(int arr[], int l, int r, int n)
{
	while (l <= r)
	{
		int m = l + (r - l) / 2; //find the middle element of the array

		if (arr[m] == n) //if the middle element is equal to the number we are searching for, return the index of the middle element.
			return m;

		if (arr[m] < n) //if the middle element is less than the number we are searching for, search the right half of the array.
			l = m + 1;

		else //if the middle element is greater than the number we are searching for, search the left half of the array.
			r = m - 1;
	}
	return -1; //if the number is not found, return -1.
}

void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;
}

int main()
{
	std::cout << "Binary Search" << std::endl;
	std::cout << "----------" << std::endl;
	int arr[] = {5, 25, 11, 15, 3, 63, 2, 1, 9, 13};
	int n = 5;
	int size = sizeof(arr) / sizeof(arr[0]);

	std::sort(arr, arr + size);
	printArray(arr, size);
	std::cout << "Number to find " << n << std::endl;

	int index = binarySearch(arr, 0, size - 1, n);

	if (index == -1)
		std::cout << "Element not found '404'" << std::endl;
	else
		std::cout << "Element found in " << index << std::endl;
	return 0;
}
