/************************************************************
 Author: Jason Klamert                                      *
 Date: 3/11/2016                                            *
 Description: Merge sort to satisfy project 2 requirements. *
 ************************************************************/

#include<stdlib.h>
#include<stdio.h>
 
void Merge(int arr[], int left, int middle, int right)
{
    int i, j, k;
    int LeftSize = middle - left + 1;
    int RightSize = right - middle;
 
    //Our Left and Right sub arrays.
    int Left[LeftSize], Right[RightSize];
 
    //Transfer contents of array into our sub arrays.
    for (i = 0; i < LeftSize; i++)
        Left[i] = arr[left + i];
    for (j = 0; j < RightSize; j++)
        Right[j] = arr[middle + 1 + j];
 
    //Merge sub arrays back into one array.
    i = 0; //Index to track left subarray progress.
    j = 0; //Index to track right subarray progress.
    k = left; //Index of starting point.
    
    while (i < LeftSize && j < RightSize)
    {
        if (Left[i] <= Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }
 
   //Copy in any remaining elements starting with left sub array.
    while (i < LeftSize)
    {
        arr[k] = Left[i];
        i++;
        k++;
    }
 
    //Copy in the remaining elements of right sub array if any.
    while (j < RightSize)
    {
        arr[k] = Right[j];
        j++;
        k++;
    }
}
 
void MergeSort(int * arr, int left, int right)
{
    if (left < right)
    {
        int middle = (left + right) / 2;
 
        // Sort left and right arrays
        MergeSort(arr, left, middle);
        MergeSort(arr, middle + 1, right);
        //Merge back into one.
        Merge(arr, left, middle, right);
    }
}