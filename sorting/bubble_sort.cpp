#include <iostream>

// Bubble Sort
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Stable: Yes
// Method: Exchanging


void bubbleSort(int arr[], int size)
{
	for (int i = 0; i < size; i++) //loop through the array
	{
		for (int j = 0; j < size - i;  j++) //loop through the array again. The size - i is used to reduce the number of comparisons.
		{
			if (arr[j] > arr[j + 1]) //if the current element is greater than the next element, then swap them.
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;
}

int main(void)
{
	std::cout << "Bubble Sort" << std::endl;
	std::cout << "----------" << std::endl;
	int arr[] = {5, 25, 11, 15, 3, 63, 2, 1, 9, 13};
	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Unsorted array: " << std::endl;
	printArray(arr, size);

	bubbleSort(arr, size);

	std::cout << "Sorted array: " << std::endl;
	printArray(arr, size);

	return 0;
}
