#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

void fillArray(int array[], int n)
{
  srand(time(0));
  for(int i = 0; i < n; i++)
  {
    array[i] = rand()%100;
  }
}

void printArray(int array[], int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << array[i] << " ";
  }
}

int order(int array[], int n)
{
  for(int i = 0; i < n-1; i++)
  {
    if(array[i] > array[i + 1])
    {
      return 0;
    }
  }
  return 1;
}

void bogoSort(int array[], int n)
{
  while(order(array, n) != 1)
  {
    random_shuffle(&array[0], &array[n]);
  }
}

#endif
