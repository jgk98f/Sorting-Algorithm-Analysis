/************************************************************
 Author: Jason Klamert                                      *
 Date: 3/11/2016                                            *
 Description: Quick sort to satisfy project 2 requirements.  *
 ************************************************************/

void QuickSort(int * arr, int left, int right) {
      int i = left, j = right;
      int tmp;
      
      //Find generic pivot value.
      int pivot = arr[(left + right) / 2];
 
      //Partition our array.
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      //Perform Recursive Call.
      if (left < j)
            QuickSort(arr, left, j);
      if (i < right)
            QuickSort(arr, i, right);
}