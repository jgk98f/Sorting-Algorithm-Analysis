/************************************************************
 Author: Jason Klamert                                      *
 Date: 3/11/2016                                            *
 Description: Bubblesort with swaps counting to satisfy     *
 project 2 requirements.                                    *
 ************************************************************/

void BubbleSortS(int * arr, int size) {
      //Declarations and flag to indicate if sorted/not sorted.
      bool swapped = true;
      int j = 0;
      int tmp;
      
      //Loop through array swapping elements in increasing order until no swaps occur. (sorted array))
      while (swapped) {
            swapped = false;
            j++;
            for (int i = 0; i < size - j; i++) {
                  if (arr[i] > arr[i + 1]) {
                        tmp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = tmp;
                        swapped = true;
                  }
            }
      }
}