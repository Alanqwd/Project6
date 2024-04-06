#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) // Cортировка пузырьком (Bubble sort)
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(int arr[], int n) // Сортировка выбором (Selection sort)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) 
    {
        min_idx = i;
        for (j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_idx]) 
            {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}

void insertionSort(int arr[], int n) // Сортировка вставками (Insertion sort)
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() 
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorting using Bubble Sort : ";
    for (int i = 0; i < n; i++)  
    {
        cout << arr[i] << " " ;
        
    }
    cout << "\n";


    selectionSort(arr, n);

    cout << "Sorting using Selection Sort: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    insertionSort(arr, n);
    cout << "Sorting using Insertion Sort: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}