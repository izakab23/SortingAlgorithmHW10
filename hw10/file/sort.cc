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

bool sortIntegerArray(int array[], int size, double& timing)
{
    gettimeofday(&before, 0);

    /************** sorting algorithm **************/



    /***********************************************/

    gettimeofday(&after, 0);
    timing = (double)((double)after.tv_sec +
        (double)after.tv_usec / (1000 * 1000)) -
        (double)((double)before.tv_sec +
        (double)before.tv_usec / (1000 * 1000));

    return true;
}