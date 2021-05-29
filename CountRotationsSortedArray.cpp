#include <iostream>
using namespace std;

int rotationsCount(int a[], int size)
{
  int start = 0;
  int end = size - 1;

  while(start <= end)
  {
    int mid = start + (end - start)/2;

    if(a[start] <= a[end])
    {
      return start;
    }

    int next = (mid + 1) % size;
    int prev = (mid + size - 1) % size;

    if(a[mid] <= prev && a[mid] <= next)
    {
      return mid;
    }
    else if(a[mid] <= a[end])
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  
  return 0;
}

int main() 
{
  int a[6] = {4,5,6,1,2,3};
  int size = 6;

  int rotations = rotationsCount(a, size);
  
  cout << "The array has been rotated " << rotations << " times!" << endl;
  
  return 0;
}
