#include <iostream>
#include <ctime>
#include <chrono>
#include "MemberOneSort.h"
#include "MemberTwoSort.h"
#include "Driver.h"

using namespace std;
using namespace std::chrono;


int main() {

	MemberOneSort MemberOne;
	MemberTwoSort MemberTwo;
	Driver Driver1;
	//Create Two Identical Arrays with random numbers
	const int size = 2000;
	int TestArray[size];
	int CopyArray[size];
	Driver1.Unsort(TestArray, size);
	Driver1.Copy(TestArray,CopyArray, size);

	//Original Unsorted Array
	cout << "Original Unsorted Array: " << endl;
	MemberOne.printArray(TestArray, size);
	cout << "\n\n\n";


	//Member One:
	//Selection
	
	auto start = high_resolution_clock::now();
	MemberOne.selectionSort(TestArray, size);
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "The Selection Sort: \n" << "Time in microseconds: " << duration.count() << endl;
	MemberOne.printArray(TestArray, size);
	cout << "\n\n\n";
	Driver1.Copy(CopyArray, TestArray, size);
	//Bubble
	start = high_resolution_clock::now();
	MemberOne.bubbleSort(TestArray, size);
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "The Bubble Sort: \n" << "Time in microseconds: " << duration.count() << endl;
	MemberOne.printArray(TestArray, size);
	cout << "\n\n\n";
	Driver1.Copy(CopyArray, TestArray, size);
	//Counting
	start = high_resolution_clock::now();
	MemberOne.countingSort(TestArray, size);
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "The Counting Sort: \n" << "Time in microseconds: " << duration.count() << endl;
	MemberOne.printArray(TestArray, size);
	cout << "\n\n\n";
	Driver1.Copy(CopyArray, TestArray, size);
	
	
	//Member Two:
	//Heap Sort
	start = high_resolution_clock::now();
	MemberTwo.heapSort(TestArray, size);
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "The Heap Sort: \n" << "Time in microseconds: " << duration.count() << endl;
	MemberTwo.display(TestArray, size);
	cout << "\n\n\n";
	Driver1.Copy(CopyArray, TestArray, size);

	//Quick Sort
	start = high_resolution_clock::now();
	MemberTwo.quickSort(TestArray, 0, size-1);
	stop = high_resolution_clock::now();
	duration = duration_cast<microseconds>(stop - start);
	cout << "The Quick Sort: \n" << "Time in microseconds: " << duration.count() << endl;
	MemberTwo.display(TestArray, size);
	cout << "\n\n\n";
	Driver1.Copy(CopyArray, TestArray, size);



	return 0;
}
