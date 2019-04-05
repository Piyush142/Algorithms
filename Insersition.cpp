#include "iostream"
using namespace std;

void InsertionSort(int arr[],int length);
void printArray(int arr[],int size);

int main()
{
	int A[5]={3,8,5,7,6};
	InsertionSort(A,5);
	return 0;
}

void InsertionSort(int arr[],int length)
{
	int i, j, key;
	for(i=0;i<length; i++)
	{
		key = arr[i];
		j = i-1;
		while(j >= 0 && arr[j]> key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	cout << "Sorted Array: ";
	printArray(arr, length);
}

void printArray(int array[], int size)
{ 
    int j;
    for (j = 0; j < size; j++)
    {
        cout <<" "<< array[j];  
    }
    cout << endl;
}