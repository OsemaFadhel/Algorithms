#include <iostream>
#include <vector>
#include <algorithm>

// Bucket Sort
	// Time Complexity: O(n^2)
	// Space Complexity: O(1)
	// Stable: Yes
	// Method: Exchanging

void insertionSort(std::vector<int>& buck, int size)
{
	for (int i = 1; i < size; i++)
	{
		int temp = buck[i];
		int j = i - 1;

		while (j >= 0 && buck[j] > temp)
		{
			buck[j + 1] = buck[j];
			j--;
		}
		buck[j + 1] = temp;
	}
}

void bucketSort(int arr[], int size)
{
	std::vector<int> buck[size];

	// Create buckets
	int max_val = *std::max_element(arr, arr + size); // Find the maximum value in the array
	for (int i = 0; i < size; i++)
	{
		int bi = arr[i] * size / (max_val + 1); // Normalize the bucket index
		buck[bi].push_back(arr[i]);
	}

	// Sort individual buckets
	for (int i = 0; i < size; i++)
		insertionSort(buck[i], buck[i].size());

	// Concatenate all buckets into arr[]
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < buck[i].size(); j++)
			arr[index++] = buck[i][j];
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
	std::cout << "Bucket Sort" << std::endl;
	std::cout << "----------" << std::endl;
	int arr[] = {5, 25, 11, 15, 3, 63, 2, 1, 9, 13};
	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Unsorted array: " << std::endl;
	printArray(arr, size);

	bucketSort(arr, size);

	std::cout << "Sorted array: " << std::endl;
	printArray(arr, size);

	return 0;
}
