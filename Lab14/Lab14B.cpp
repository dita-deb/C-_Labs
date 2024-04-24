/*
Class: CSE 1321L
Section : WE1 C++
Term : Summer 2021
Instructor : Mokter Hossain
Name : Anindita Deb
Lab# : 14B
*/


class Lab14B {};

#include <iostream>
using namespace std;

void BubbleSort(int arr[])
{
	int n = 11;
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void BinarySearch(int arr[], int target)
{
	int low = 0, n = 11, high = n;
	while (low <= high) {
		cout << "Low is " << low << endl;
		cout << "High is " << high << endl;
		int mid = (int)((low + high) / 2);
		cout << "Mid is " << mid << endl;
		cout << "Searching" << endl;
		if (arr[mid] == target)
		{
			cout << "The target is in the set.";
			break;
		}
		else if (arr[mid] > target)
			high = mid - 1;
		else
			low = mid;
	}
}
int main()
{
	cout << "Please enter 11 numbers:" << endl;
	int arr[11];
	for (int i = 0; i < 11; i++)
	{
		cout << "Integer " << i + 1 << ": ";
		cin >> arr[i];
	}
	int target;
	cout << "What is the target number: ";
	cin >> target;


	BubbleSort(arr);
	BinarySearch(arr, target);
	return 0;
}
