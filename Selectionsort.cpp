/****************************************************************
 Author: Jason Klamert                                          *
 Date: 3/11/2016                                                *
 Description: Selection sort to satisfy project 2 requirements. *
 ****************************************************************/

void SelectionSort(int * arr, int size) {
    int i, j, minIndex, tmp; 
    //Assume 1st element is our minIndex. Loop through and perform swaps if minIndex is different from our sorted part of array.
    for (i = 0; i < size - 1; i++) 
    {
        minIndex = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            minIndex = j;
        }
           
        if (minIndex != i)
        {
            tmp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = tmp;
        }
    }
}