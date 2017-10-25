/*****************************************************************
 Author: Jason Klamert                                           *
 Date: 3/11/2016                                                 *
 Description: Insertion sort to satisfy project 2 requirements.  *
 Sorts array by copying element into a temp variable the finding *
 a place for it then shifting all contents down to accommodate.  *
 *****************************************************************/

void InsertionSort(int * arr, int length) {
      //Standard Declarations
      int i, j, tmp;
      
      for (i = 1; i < length; i++) {
            j = i;
            while (j > 0 && arr[j - 1] > arr[j]) {
                  tmp = arr[j];
                  arr[j] = arr[j - 1];
                  arr[j - 1] = tmp;
                  j--;
            }
      }
}