/*****************************************************************************
  Authors:       Izak Bounds, IUSB, student
  Class:         C243 Data Structures
  File name:     sort.cc
  Last updated:  November 7, 2019.
  Description:   Sorting function for integer array.
******************************************************************************/

#include <iostream>
using namespace std;
#include <cstdlib>
#include <sys/time.h>   //linux

struct timeval before, after;

void quicksort(int a[], int first, int last)
{
    if (last <= first) return;
    int pivot = a[first];
    int i = first + 1, j = last;
    while (i < j)
    {
        while (a[i] < pivot && i < j) i++;
        while (a[j] > pivot) j--;
        if (i < j)
            swap(a[i++], a[j--]);
    }
    if (a[j] > pivot) j--;
    swap(a[j], a[first]);
    quicksort(a, first, j - 1);
    quicksort(a, j + 1, last);
} // quicksort()

bool sortIntegerArray(int array[], int size, double& timing)
{
    gettimeofday(&before, 0);

    /************** sorting algorithm **************/

    quicksort(array, 0, size-1);


    /***********************************************/

    gettimeofday(&after, 0);
    timing = (double)((double)after.tv_sec +
        (double)after.tv_usec / (1000 * 1000)) -
        (double)((double)before.tv_sec +
        (double)before.tv_usec / (1000 * 1000));

    return true;
}