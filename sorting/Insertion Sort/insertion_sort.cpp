#include <iostream>

// Insertion Sort
	// Time Complexity: O(n^2)
	// Space Complexity: O(1)
	// Stable: Yes
	// Method: Insertion

void insertionSort(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int temp = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
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
	std::cout << "Insertion Sort" << std::endl;
	std::cout << "----------" << std::endl;
	int arr[] = {5, 25, 11, 15, 3, 63, 2, 1, 9, 13};
	int n = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Unsorted array: " << std::endl;
	printArray(arr, n);

	insertionSort(arr, n);

	std::cout << "Sorted array: " << std::endl;
	printArray(arr, n);

	return 0;
}
