/************************************************************
 Author: Jason Klamert                                      *
 Date: 3/11/2016                                            *
 Description: Bubblesort without swaps counting             *
 to satisfy project 2 requirements.                         *
 ************************************************************/

void BubbleSortNS(int * num, int size)
{
    //Standard Declarations
    int i, j;    
    int temp;             
    
    //Loop through whole array swapping elements in increasing order until sorted.
    for(i = 1; (i <= size); i++)
    {
        for (j = 0; j < (size - 1); j++)
        {
            if (num[j+1] < num[j])      
            { 
                temp = num[j];             // swap elements
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
}