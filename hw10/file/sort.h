/*****************************************************************************
  Authors:       Izak Bounds, IUSB, student
                 Hoang Quang, IUSB, student
  Class:         C243 Data Structures
  File name:     sort.h
  Last updated:  November 12, 2019.
  Description:   Sorting function for integer array.
******************************************************************************/

#ifndef SORT_H
#define SORT_H

bool sortIntegerArray(int array[], int size, double& timing);
void quicksort(int a[], int first, int last);

#endif