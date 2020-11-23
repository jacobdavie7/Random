#include <iostream>
#include "bogo.h"
#include <ctime>
using namespace std;

int main()
{
  int n;
  cout << "How many numbers do you want to sort?" << endl;
  cin >> n;
  int array[n];
  clock_t start, end; //start and end are vars of type clock
  double milli_time;

  fillArray(array, n);
  cout << endl << "Random Unsorted Data:" << endl;
  printArray(array, n);

  start = clock();
  bogoSort(array, n);
  end = clock();
  milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
  cout << endl << endl << "Sorted:" << endl;
  printArray(array, n);
  printf("\nStart time: %ld, End time: %ld, Total Time Taken (Seconds): %f\n\n",start, end, milli_time);
}
