/*-- MemberOneSort.h ---------------------------------------------------------------
  This header file defines the data type MemberOneSort processing a
  non sorted list.
  
  Basic operations are:
     swap:            Swaps two elements in the list
     selectionSort:   Slowly (O(n^2) sorts list
     bubbleSort:      Another method for slowly sorting a list
     display:         Outputs the sorted list
Created By: RoJon A. Barnett------------------------------------------------------------------------*/

#ifndef MemberOneSort_h
#define MemberOneSort_h
#include <iostream>


class MemberOneSort
{
public:
    /*Constructor*/
    MemberOneSort();
    
    /*Swaps two elements in the list*/
    void swap(int* elemOne, int* elemTwo);
    
    /* (O(n^2) slow Sorting Style*/
    void selectionSort(int array[], int index);
    
    /*Bubble Sort (O(n^2) Slow Sorting Style*/
    void bubbleSort(int array[], int index);
    
    /*New Fast (O(n)) Sorting Array*/
    void countingSort( int array[], int size);
    
    /*Display Array*/
    void printArray(int array[], int size) ;
        
};

#endif /* MemberOneSort_h */
