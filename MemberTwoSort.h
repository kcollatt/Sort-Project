//Eric Jaison
/*-- MemberTwoSort.h ---------------------------------------------------------------
  Two Fast Sort header files containg the heap and quick sorts

  Basic operations are:
	 MemberTwoSort:   Constructor
	 swap:            Swaps two elements in the list
	 heapify:		  Heap sort function
	 heapSort:		  Heap sort
	 partition:       Quick sort function
	 quickSort:       Quick sort
	 display:         Display the elements in the array
----------------------------------------------------------------------------------*/

#ifndef MemberTwoSort_h
#define MemberTwoSort_h
#include <iostream>

class MemberTwoSort
{
public:
	//Constructor
	MemberTwoSort();

	//Swap two elements in the list
	void swap(int* element1, int* element2);

	//Heap sort function
	void heapify(int array[], int index, int i);

	//Heap Sort 
	void heapSort(int array[], int index);

	//Quick sort function
	int partition(int array[], int low, int high);

	//Quick Sort 
	void quickSort(int array[], int low, int high);

	//Display the elements in the array 
	void display(int array[], int index);

};

#endif