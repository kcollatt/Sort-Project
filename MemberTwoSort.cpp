//Eric Jaison
//MemberTwoSort.cpp
//Two Fast Sort cpp files

#include <iostream>
using namespace std;
#include "MemberTwoSort.h"

MemberTwoSort::MemberTwoSort()
{

}

//Swap two elements
void MemberTwoSort::swap(int* element1, int* element2)
{
    int temp = *element1;
    *element1 = *element2;
    *element2 = temp;
}

//Heap Sort - First fast sort
void MemberTwoSort::heapify(int array[], int index, int i)
{
    // Initialize the largest number as root
    int largest = i; 

    // left child
    int l = 2 * i + 1; 

    // right child 
    int r = 2 * i + 2; 

    // If left child is larger than root
    if (l < index && array[l] > array[largest])
        largest = l;

    // If right child is larger than largest 
    if (r < index && array[r] > array[largest])
        largest = r;

    // If the largest number is not root
    if (largest != i) 
    {
        swap(&array[i], &array[largest]);

        // Recursively heapify the affected sub-tree
        heapify(array, index, largest);
    }
}

// Heap sort main function
void MemberTwoSort::heapSort(int array[], int index)
{
    // Build heap (rearrange array)
    for (int i = index / 2 - 1; i >= 0; i--)
    {
        heapify(array, index, i);
    }
    
    // One by one extract an element from heap
    for (int i = index - 1; i > 0; i--) 
    {
        // Move current root to the end
        swap(&array[0], &array[i]);

        // calling max heapify on the reduced heap
        heapify(array, i, 0);
    }
}

// This function arranging the elements to smallest to largest
int MemberTwoSort::partition(int array[], int low, int high)
{
    int pivot = array[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (array[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

//Quick Sort
void MemberTwoSort::quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(array, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

//Display the elements in the array 
void MemberTwoSort::display(int array[], int index)
{
    for (int i = 0; i < index; i++)
        cout << array[i] << " ";
    cout << endl;
}

