#include <iostream>
using namespace std;

int firstOccurrence(int a[], int size, int target)
{
  int result = -1;
  int start = 0;
  int end = size - 1;

  while(start <= end)
  {
    int mid = start + (end - start)/2;

    if(target == a[mid])
    {
      result = mid;
      end = mid - 1;
    }
    else if(target < a[mid])
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return result;
}

int lastOccurrence(int a[], int size, int target)
{
  int result = -1;
  int start = 0;
  int end = size - 1;

  while(start <= end)
  {
    int mid = start + (end - start)/2;

    if(target == a[mid])
    {
      result = mid;
      start = mid + 1;
    }
    else if(target < a[mid])
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return result;
}

int main() 
{
  int a[8] = {1,2,3,5,5,5,5,8};
  int size = 8;
  int target;

  cout << "Enter target element: " << endl;
  cin >> target;
  int count = 0;

  int first = firstOccurrence(a, size, target);
  int last = lastOccurrence(a, size, target);

  if(first == -1)
  {
    count = 0;
  }
  else
  {
    count = last - first + 1;
  }

  cout << "Element " << target << " occurred " << count << " times!" << endl;

  return 0;
}
