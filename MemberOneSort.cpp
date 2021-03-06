//
//MemberOneSort.cpp//  TeamMemberOneSorts
//
//  Created by RoJon Barnett on 4/8/21.
//


#include <iostream>
#include "MemberOneSort.h"
using namespace std;
const int RANGE = 1000;

MemberOneSort::MemberOneSort()
{
    
}

void MemberOneSort::swap(int* elemOne, int* elemTwo)
{
    int temp = *elemOne;
    *elemOne = *elemTwo;
    *elemTwo = temp;
}

/*Selection Sort (O(n^2) slow Sorting Style*/
void MemberOneSort::selectionSort(int array[], int index)
{
    int i, j, min_idx;
    //One by one move boundary of unsorted subarray
    for( i = 0; i < index - 1; i++)
    {
        //Find the minimum element in the unsorted array
        min_idx = i;
        for (j =  i + 1; j < index; j++)
        {
            if(array[j] < array[min_idx])
            {
                    min_idx = j;
            }
        }
        //Swap the found minimum element with the first swap
        swap(&array[min_idx], &array[i]);
    }
    
}

/*Bubble Sort (O(n^2) Slow Sorting Style*/
void MemberOneSort:: bubbleSort(int array[], int index)
{
    int i, j;
    bool swapped;
    for(i = 0; i < index - 1; i++)
    {
        swapped = false;
        for(j = 0; j < index - i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                swap(&array[j], &array[j+1]);
                swapped = true;
            }
            
           
        }
        //IF no two elements were swapped by inner loop, then break
        if (swapped == false)
            break;
    }
}
//New Fast (O(n)) Sorting Array
void MemberOneSort::countingSort( int array[], int size)
{
    //The size of count must at least be max+1
    int output[RANGE];
    int count[RANGE];
    int max = array[0];
    
    //Find the largest element of the array
    for( int i = 1; i < size; i++)
    {
        if(array[i] > max)
            max = array[i];
    }
    
    //Initialize count array with all zeros.
    for (int i = 0; i <= max; ++i)
    {
        count[i] = 0;
        
    }
    
    //Store the count of each element
    for(int i = 0; i < size; i++)
    {
        count[array[i]]++;
    }
    
    //Store the cummulative count of each array
    for (int i = 1; i<=max; i++)
    {
        count[i] += count[i-1];
        
    }
    //Find the index of each element of the original array in count array
    //place the elements in output array
    for(int i = size -1; i >= 0; i--)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }
    
    //copy the sorted elements into original array
    for (int i = 0; i < size; i++)
    {
        array[i] = output[i];
    }
}




 
//Display Array
void MemberOneSort::printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}




