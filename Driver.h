#pragma once
/*-- Driver.h ---------------------------------------------------------------
  This header file defines the data type Driver creating and copying a nonsorted array.

  Basic operations are:
     Unsort:            creates an unsorted array
     Copy:   copies two arrays
Created By: Keaton Collatt------------------------------------------------------------------------*/
#ifndef Driver_h
#define Driver_h
#include <iostream>



class Driver {
public:


	int* Unsort(int x[], int size);
	void Copy(int x[], int y[], int size);
	

};





#endif
