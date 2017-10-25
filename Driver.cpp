/************************************************************
 Author: Jason Klamert                                      *
 Date: 3/11/2016                                            *
 Description: Driver to satisfy project 2 requirements.     *
 ************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <sys/time.h>
#include <iostream>
#include "BubblesortNS.cpp"
#include "BubblesortS.cpp"
#include "Insertionsort.cpp"
#include "Mergesort.cpp"
#include "Quicksort.cpp"
#include "Selectionsort.cpp"
using namespace std;
 
void getSortedArray(int * array, int size);
void getRandArray(int * array, int size);
void getPartialSortedArray(int * array, int size);
void printArray(int * array, int size);
void printArray2(int * array, int size);

int main(){
    
    //Creating 6 Test Arrays for each algorithm.
    int randarray1[100];
    getRandArray(randarray1, 100);
    
    int sortedarray1[100];
    getSortedArray(sortedarray1, 100);
    
    int partialsortedarray1[100];
    getPartialSortedArray(partialsortedarray1, 100);
    
    int randarray2[1000];
    getRandArray(randarray2, 1000);
    
    int sortedarray2[1000];
    getSortedArray(sortedarray2, 1000);
    
    int partialsortedarray2[1000];
    getPartialSortedArray(partialsortedarray2, 1000);
    
    int randarray3[10000];
    getRandArray(randarray3, 10000);
    
    int sortedarray3[10000];
    getSortedArray(sortedarray3, 10000);
    
    int partialsortedarray3[10000];
    getPartialSortedArray(partialsortedarray3, 10000);
             
    int randarray12[100];
    getRandArray(randarray12, 100);
    
    int sortedarray12[100];
    getSortedArray(sortedarray12, 100);
    
    int partialsortedarray12[100];
    getPartialSortedArray(partialsortedarray12, 100);
    
    int randarray22[1000];
    getRandArray(randarray22, 1000);
    
    int sortedarray22[1000];
    getSortedArray(sortedarray22, 1000);
    
    int partialsortedarray22[1000];
    getPartialSortedArray(partialsortedarray22, 1000);
    
    int randarray32[10000];
    getRandArray(randarray32, 10000);
    
    int sortedarray32[10000];
    getSortedArray(sortedarray32, 10000);
    
    int partialsortedarray32[10000];
    getPartialSortedArray(partialsortedarray32, 10000);
    
    int randarray13[100];
    getRandArray(randarray13, 100);
    
    int sortedarray13[100];
    getSortedArray(sortedarray13, 100);
    
    int partialsortedarray13[100];
    getPartialSortedArray(partialsortedarray13, 100);
    
    int randarray23[1000];
    getRandArray(randarray23, 1000);
    
    int sortedarray23[1000];
    getSortedArray(sortedarray23, 1000);
    
    int partialsortedarray23[1000];
    getPartialSortedArray(partialsortedarray23, 1000);
    
    int randarray33[10000];
    getRandArray(randarray33, 10000);
    
    int sortedarray33[10000];
    getSortedArray(sortedarray33, 10000);
    
    int partialsortedarray33[10000];
    getPartialSortedArray(partialsortedarray33, 10000);
            
    int randarray14[100];
    getRandArray(randarray14, 100);
    
    int sortedarray14[100];
    getSortedArray(sortedarray14, 100);
    
    int partialsortedarray14[100];
    getPartialSortedArray(partialsortedarray14, 100);
    
    int randarray24[1000];
    getRandArray(randarray24, 1000);
    
    int sortedarray24[1000];
    getSortedArray(sortedarray24, 1000);
    
    int partialsortedarray24[1000];
    getPartialSortedArray(partialsortedarray24, 1000);
    
    int randarray34[10000];
    getRandArray(randarray34, 10000);
    
    int sortedarray34[10000];
    getSortedArray(sortedarray34, 10000);
    
    int partialsortedarray34[10000];
    getPartialSortedArray(partialsortedarray34, 10000);
    
    int randarray15[100];
    getRandArray(randarray15, 100);
    
    int sortedarray15[100];
    getSortedArray(sortedarray15, 100);
    
    int partialsortedarray15[100];
    getPartialSortedArray(partialsortedarray15, 100);
    
    int randarray25[1000];
    getRandArray(randarray25, 1000);
    
    int sortedarray25[1000];
    getSortedArray(sortedarray25, 1000);
    
    int partialsortedarray25[1000];
    getPartialSortedArray(partialsortedarray25, 1000);
    
    int randarray35[10000];
    getRandArray(randarray35, 10000);
    
    int sortedarray35[10000];
    getSortedArray(sortedarray35, 10000);
    
    int partialsortedarray35[10000];
    getPartialSortedArray(partialsortedarray35, 10000);
    
    int randarray16[100];
    getRandArray(randarray16, 100);
    
    int sortedarray16[100];
    getSortedArray(sortedarray16, 100);
    
    int partialsortedarray16[100];
    getPartialSortedArray(partialsortedarray16, 100);
    
    int randarray26[1000];
    getRandArray(randarray26, 1000);
    
    int sortedarray26[1000];
    getSortedArray(sortedarray26, 1000);
    
    int partialsortedarray26[1000];
    getPartialSortedArray(partialsortedarray26, 1000);
    
    int randarray36[10000];
    getRandArray(randarray36, 10000);
    
    int sortedarray36[10000];
    getSortedArray(sortedarray36, 10000);
    
    int partialsortedarray36[10000];
    getPartialSortedArray(partialsortedarray36, 10000);
    
    hrtime_t start1, start2, start3, start4, start5, start6;
    hrtime_t end1, end2, end3, end4, end5, end6;
    
        
	//Our call to SelectionSort and start the timer.
        start1 = gethrtime();
	SelectionSort(randarray1, 100);
        end1 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Selection Sort with Random Array (100) Took: " << (end1 - start1) << " nanoseconds." << endl;

	//Our call to SelectionSort with sortedarray and start the timer.
        start1 = gethrtime();
	SelectionSort(sortedarray1, 100);
        end1 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Selection Sort with Sorted Array (100) Took: " << (end1 - start1) << " nanoseconds." << endl;

        //Our call to SelectionSort with sortedarray and start the timer.
        start1 = gethrtime();
	SelectionSort(partialsortedarray1, 100);
        end1 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Selection Sort with Partial Sorted Array (100) Took: " << (end1 - start1) << " nanoseconds." << endl;

        //Our call to SelectionSort with sortedarray and start the timer.
        start1 = gethrtime();
	SelectionSort(randarray2, 1000);
        end1 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Selection Sort with Random Array (1000) Took: " << (end1 - start1) << " nanoseconds." << endl;

        //Our call to SelectionSort with sortedarray and start the timer.
        start1 = gethrtime();
	SelectionSort(sortedarray2, 1000);
        end1 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Selection Sort with Sorted Array (1000) Took: " << (end1 - start1) << " nanoseconds." << endl;

        //Our call to SelectionSort with sortedarray and start the timer.
        start1 = gethrtime();
	SelectionSort(partialsortedarray2, 1000);
        end1 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Selection Sort with Partial Sorted Array (1000) Took: " << (end1 - start1) << " nanoseconds." << endl;

        //Our call to SelectionSort with sortedarray and start the timer.
        start1 = gethrtime();
	SelectionSort(randarray3, 10000);
        end1 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Selection Sort with Random Array (10000) Took: " << (end1 - start1) << " nanoseconds." << endl;

        //Our call to SelectionSort with sortedarray and start the timer.
        start1 = gethrtime();
	SelectionSort(sortedarray3, 10000);
        end1 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Selection Sort with Sorted Array (10000) Took: " << (end1 - start1) << " nanoseconds." << endl;

        //Our call to SelectionSort with sortedarray and start the timer.
        start1 = gethrtime();
	SelectionSort(partialsortedarray3, 10000);
        end1 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Selection Sort with Partial Sorted Array (10000) Took: " << (end1 - start1) << " nanoseconds." << endl;

        cout << "\n************************************************************************************************" << endl; 
        
        //Our call to BubbleSortS and start the timer.
        start2 = gethrtime();
	InsertionSort(randarray12, 100);
        end2 = gethrtime();
        
        cout << "Insertion Sort with Random Array (100) Took: " << (end2 - start2) << " nanoseconds." << endl;
        
        //Our call to InsertionSort and start the timer.
        start2 = gethrtime();
	InsertionSort(sortedarray12, 100);
        end2 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Insertion Sort with Sorted Array (100) Took: " << (end2 - start2) << " nanoseconds." << endl;
        
                //Our call to InsertionSort and start the timer.
        start2 = gethrtime();
	InsertionSort(partialsortedarray12, 100);
        end2 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Insertion Sort with Partial Sorted Array (100) Took: " << (end2 - start2) << " nanoseconds." << endl;
        
        //Our call to InsertionSort and start the timer.
        start2 = gethrtime();
	InsertionSort(randarray22, 1000);
        end2 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Insertion Sort with Random Array (1000) Took: " << (end2 - start2) << " nanoseconds." << endl;
        
        //Our call to InsertionSort and start the timer.
        start2 = gethrtime();
	InsertionSort(sortedarray22, 1000);
        end2 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Insertion Sort with Sorted Array (1000) Took: " << (end2 - start2) << " nanoseconds." << endl;
        
        //Our call to InsertionSort and start the timer.
        start2 = gethrtime();
	InsertionSort(partialsortedarray22, 1000);
        end2 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Insertion Sort with Partial Sorted Array (1000) Took: " << (end2 - start2) << " nanoseconds." << endl;
        
        //Our call to InsertionSort and start the timer.
        start2 = gethrtime();
	InsertionSort(randarray32, 10000);
        end2 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Insertion Sort with Random Array (10000) Took: " << (end2 - start2) << " nanoseconds." << endl;
        
        //Our call to InsertionSort and start the timer.
        start2 = gethrtime();
	InsertionSort(sortedarray32, 10000);
        end2 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Insertion Sort with Sorted Array (10000) Took: " << (end2 - start2) << " nanoseconds." << endl;
        
        //Our call to InsertionSort and start the timer.
        start2 = gethrtime();
	InsertionSort(partialsortedarray32, 10000);
        end2 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Insertion Sort with Partial Sorted Array (10000) Took: " << (end2 - start2) << " nanoseconds." << endl;
        
        cout << "\n************************************************************************************************" << endl;

                
        //Our call to BubbleSortS and start the timer.
        start3 = gethrtime();
	BubbleSortS(randarray13, 100);
        end3 = gethrtime();
        
        cout << "Bubble Sort (Swaps Counting)  with Random Array (100) Took: " << (end3 - start3) << " nanoseconds." << endl;
        
        //Our call to BubbleSortS and start the timer.
        start3 = gethrtime();
	BubbleSortS(sortedarray13, 100);
        end3 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (Swaps Counting)  with Sorted Array (100) Took: " << (end3 - start3) << " nanoseconds." << endl;
        
                //Our call to BubbleSortS and start the timer.
        start3 = gethrtime();
	BubbleSortS(partialsortedarray13, 100);
        end3 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (Swaps Counting)  with Partial Sorted Array (100) Took: " << (end3 - start3) << " nanoseconds." << endl;
        
        //Our call to BubbleSortS and start the timer.
        start3 = gethrtime();
	BubbleSortS(randarray23, 1000);
        end3 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (Swaps Counting)  with Random Array (1000) Took: " << (end3 - start3) << " nanoseconds." << endl;
        
        //Our call to BubbleSortS and start the timer.
        start3 = gethrtime();
	BubbleSortS(sortedarray23, 1000);
        end3 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (Swaps Counting)  with Sorted Array (1000) Took: " << (end3 - start3) << " nanoseconds." << endl;
        
        //Our call to BubbleSortS and start the timer.
        start3 = gethrtime();
	BubbleSortS(partialsortedarray23, 1000);
        end3 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (Swaps Counting)  with Partial Sorted Array (1000) Took: " << (end3 - start3) << " nanoseconds." << endl;
        
        //Our call to BubbleSortS and start the timer.
        start3 = gethrtime();
	BubbleSortS(randarray33, 10000);
        end3 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (Swaps Counting)  with Random Array (10000) Took: " << (end3 - start3) << " nanoseconds." << endl;
        
        //Our call to BubbleSortS and start the timer.
        start3 = gethrtime();
	BubbleSortS(sortedarray33, 10000);
        end3 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (Swaps Counting)  with Sorted Array (10000) Took: " << (end3 - start3) << " nanoseconds." << endl;
        
        //Our call to BubbleSortS and start the timer.
        start3 = gethrtime();
	BubbleSortS(partialsortedarray33, 10000);
        end3 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (Swaps Counting)  with Partial Sorted Array (10000) Took: " << (end3 - start3) << " nanoseconds." << endl;
        
        cout << "\n************************************************************************************************" << endl;
    
        
                
        //Our call to BubbleSortNS and start the timer.
        start4 = gethrtime();
	BubbleSortNS(randarray14, 100);
        end4 = gethrtime();
        
        cout << "Bubble Sort (No Swaps Counting)  with Random Array (100) Took: " << (end4 - start4) << " nanoseconds." << endl;
        
        //Our call to BubbleSortNS and start the timer.
        start4 = gethrtime();
	BubbleSortNS(sortedarray14, 100);
        end4 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (No Swaps Counting)  with Sorted Array (100) Took: " << (end4 - start4) << " nanoseconds." << endl;
        
                //Our call to BubbleSortNS and start the timer.
        start4 = gethrtime();
	BubbleSortNS(partialsortedarray14, 100);
        end4 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (No Swaps Counting)  with Partial Sorted Array (100) Took: " << (end4 - start4) << " nanoseconds." << endl;
        
        //Our call to BubbleSortNS and start the timer.
        start4 = gethrtime();
	BubbleSortNS(randarray24, 1000);
        end4 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (No Swaps Counting)  with Random Array (1000) Took: " << (end4 - start4) << " nanoseconds." << endl;
        
        //Our call to BubbleSortNS and start the timer.
        start4 = gethrtime();
	BubbleSortNS(sortedarray24, 1000);
        end4 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (No Swaps Counting)  with Sorted Array (1000) Took: " << (end4 - start4) << " nanoseconds." << endl;
        
        //Our call to BubbleSortNS and start the timer.
        start4 = gethrtime();
	BubbleSortNS(partialsortedarray24, 1000);
        end4 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (No Swaps Counting)  with Partial Sorted Array (1000) Took: " << (end4 - start4) << " nanoseconds." << endl;
        
        //Our call to BubbleSortNS and start the timer.
        start4 = gethrtime();
	BubbleSortNS(randarray34, 10000);
        end4 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (No Swaps Counting)  with Random Array (10000) Took: " << (end4 - start4) << " nanoseconds." << endl;
        
        //Our call to BubbleSortNS and start the timer.
        start4 = gethrtime();
	BubbleSortNS(sortedarray34, 10000);
        end4 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (No Swaps Counting)  with Sorted Array (10000) Took: " << (end4 - start4) << " nanoseconds." << endl;
        
        //Our call to BubbleSortNS and start the timer.
        start4 = gethrtime();
	BubbleSortNS(partialsortedarray34, 10000);
        end4 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Bubble Sort (No Swaps Counting)  with Partial Sorted Array (10000) Took: " << (end4 - start4) << " nanoseconds." << endl;
        
        cout << "\n************************************************************************************************" << endl;
            
        
                
        //Our call to MergeSort and start the timer.
        start5 = gethrtime();
	MergeSort(randarray15,0,99);
        end5 = gethrtime();
        
        cout << "Merge Sort  with Random Array (100) Took: " << (end5 - start5) << " nanoseconds." << endl;
        
        //Our call to MergeSort and start the timer.
        start5 = gethrtime();
	MergeSort(sortedarray15,0,99);
        end5 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Merge Sort  with Sorted Array (100) Took: " << (end5 - start5) << " nanoseconds." << endl;
        
                //Our call to MergeSort and start the timer.
        start5 = gethrtime();
	MergeSort(partialsortedarray15,0,99);
        end5 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Merge Sort  with Partial Sorted Array (100) Took: " << (end5 - start5) << " nanoseconds." << endl;
        
        //Our call to MergeSort and start the timer.
        start5 = gethrtime();
	MergeSort(randarray25,0,999);
        end5 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Merge Sort  with Random Array (1000) Took: " << (end5 - start5) << " nanoseconds." << endl;
        
        //Our call to MergeSort and start the timer.
        start5 = gethrtime();
	MergeSort(sortedarray25,0,999);
        end5 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Merge Sort  with Sorted Array (1000) Took: " << (end5 - start5) << " nanoseconds." << endl;
        
        //Our call to MergeSort and start the timer.
        start5 = gethrtime();
	MergeSort(partialsortedarray25,0,999);
        end5 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Merge Sort  with Partial Sorted Array (1000) Took: " << (end5 - start5) << " nanoseconds." << endl;
        
        //Our call to MergeSort and start the timer.
        start5 = gethrtime();
	MergeSort(randarray35,0,9999);
        end5 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Merge Sort  with Random Array (10000) Took: " << (end5 - start5) << " nanoseconds." << endl;
        
        //Our call to MergeSort and start the timer.
        start5 = gethrtime();
	MergeSort(sortedarray35,0,9999);
        end5 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Merge Sort  with Sorted Array (10000) Took: " << (end5 - start5) << " nanoseconds." << endl;
        
        //Our call to MergeSort and start the timer.
        start5 = gethrtime();
	MergeSort(partialsortedarray35,0,9999);
        end5 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "MergeSort  with Partial Sorted Array (10000) Took: " << (end5 - start5) << " nanoseconds." << endl;
        
        cout << "\n************************************************************************************************" << endl;
        
        //Our call to QuickSort and start the timer.
        start6 = gethrtime();
	QuickSort(randarray16,0,99);
        end6 = gethrtime();
        
        cout << "Quick Sort  with Random Array (100) Took: " << (end6 - start6) << " nanoseconds." << endl;
        
        //Our call to QuickSort and start the timer.
        start6 = gethrtime();
	QuickSort(sortedarray16,0,99);
        end6 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Quick Sort  with Sorted Array (100) Took: " << (end6 - start6) << " nanoseconds." << endl;
        
                //Our call to QuickSort and start the timer.
        start6 = gethrtime();
	QuickSort(partialsortedarray16,0,99);
        end6 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Quick Sort  with Partial Sorted Array (100) Took: " << (end6 - start6) << " nanoseconds." << endl;
        
        //Our call to QuickSort and start the timer.
        start6 = gethrtime();
	QuickSort(randarray26,0,999);
        end6 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Quick Sort  with Random Array (1000) Took: " << (end6 - start6) << " nanoseconds." << endl;
        
        //Our call to QuickSort and start the timer.
        start6 = gethrtime();
	QuickSort(sortedarray26,0,999);
        end6 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Quick Sort  with Sorted Array (1000) Took: " << (end6 - start6) << " nanoseconds." << endl;
        
        //Our call to QuickSort and start the timer.
        start6 = gethrtime();
	QuickSort(partialsortedarray26,0,999);
        end6 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Quick Sort  with Partial Sorted Array (1000) Took: " << (end6 - start6) << " nanoseconds." << endl;
        
        //Our call to QuickSort and start the timer.
        start6 = gethrtime();
	QuickSort(randarray36,0,9999);
        end6 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Quick Sort  with Random Array (10000) Took: " << (end6 - start6) << " nanoseconds." << endl;
        
        //Our call to QuickSort and start the timer.
        start6 = gethrtime();
	QuickSort(sortedarray36,0,9999);
        end6 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Quick Sort  with Sorted Array (10000) Took: " << (end6 - start6) << " nanoseconds." << endl;
        
        //Our call to QuickSort and start the timer.
        start6 = gethrtime();
	QuickSort(partialsortedarray36,0,9999);
        end6 = gethrtime();
        cout << "________________________________________________________________________________________________" << endl;
        
        cout << "Quick Sort  with Partial Sorted Array (10000) Took: " << (end6 - start6) << " nanoseconds." << endl;
        
        cout << "\n************************************************************************************************" << endl;  
}

void printArray(int * array, int size){
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void printArray2(int * array, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(i % 10 == 0)
        cout << endl;
        
        cout << array[i] << "  ";
        
    }
}

void getRandArray(int * array, int size){
    unsigned seed = time(0);
    srand(seed);
	
	for( int index = 0; index < size; index++ )
	{
		array[index] = 1 + rand() % 10000;
	}
}

void getSortedArray(int * array, int size){
    unsigned seed = time(0);
    srand(seed);
	
	for( int index = 0; index < size; index++ )
	{
		array[index] = 1 + rand() % 10000;
	}
    
    SelectionSort(array,size);
}

void getPartialSortedArray( int * array, int size){
    unsigned seed = time(0);
    srand(seed);
    
    for( int index = 0; index < size; index++ )
    {
	array[index] = 1 + rand() % 10000;
    }
    
    SelectionSort(array,size);
    
    for( int index = 0; index < size; index++)
    {
        if(index % 10 == 0)
            array[index] = 1 + rand() % 10000;
    }
}