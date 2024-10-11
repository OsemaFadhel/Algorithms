#include <iostream>

// Linear Search
// Time Complexity: O(N)
// Space Complexity: O(1)
// Method: Iterative


int linearSearch(int arr[], int size, int n)
{
	for (int i = 0; i <= size; i++)
	{
		if (arr[i] == n)
			return i;
	}
	return -1;
}

void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		std::cout << A[i] << " ";
	std::cout << std::endl;
}

int main()
{
	std::cout << "Linear Search" << std::endl;
	std::cout << "----------" << std::endl;
	int arr[] = {5, 25, 11, 15, 3, 63, 2, 1, 9, 13};
	int n = 1;
	int size = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, size);
	std::cout << "Number to find " << n << std::endl;

	int index = linearSearch(arr, size - 1, n);

	if (index == -1)
		std::cout << "Element not found '404'" << std::endl;
	else
		std::cout << "Element found in " << index << std::endl;
	return 0;
}
