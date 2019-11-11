/*****************************************************************************
  Authors:       Izak Bounds, IUSB, student
  Class:         C243 Data Structures
  File name:     main.cc
  Last updated:  November 7, 2019.
  Description:   Main function + user interface
******************************************************************************/

#include <iostream>
using namespace std;
#include <cstdlib>

#include "sort.h"

void inputSize(int& size);
void inputNumbers(int numbers[],int size);
void outputNumbers(int numbers[],int size);
void outputTiming(double timing, int size);

/************************  M A I N   F U N C T I O N  **********************/

int main()
{
    int arraySize;
    inputSize(arraySize);
    const int SIZE = arraySize;
    int *numbers = new int[arraySize];
    double timing;
    inputNumbers(numbers, arraySize);
    if (sortIntegerArray(numbers, arraySize, timing))
    {
        outputNumbers(numbers, arraySize);
        outputTiming(timing, arraySize);
    }
    else
        cout << "fail to sort" << endl;
    return 0;
}

/************************  inputSize  *********************
takes a user input and sets it to size
*/
void inputSize(int& size)
{
    cout << "Enter size of array: ";
    cin >> size;
}

/************************  inputNumbers  *********************
takes user input of a given amount of numbers (size) and inputs
them into an array (numbers)
*/
void inputNumbers(int numbers[], int size)
{
    cout << "Input " << size << " number(s)" << endl;
    for (int i = 0; i < size; ++i)
        cin >> numbers[i];
}

/************************  outputNumbers  *********************
outputs an array of numbers with a given size
*/
void outputNumbers(int numbers[], int size)
{
    cout << "after sorting: " << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

/************************  outputTiming  *********************
outputs the time taken for the sorting algorithm to finish
*/
void outputTiming(double timing, int size)
{
    cout << "Sorting of " << size <<
        " integers took " << timing << " ms" << endl;
}