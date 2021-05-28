#include <iostream>
using namespace std;

int firstOccurence(int a[], int size, int target)
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

int lastOccurence(int a[], int size, int target)
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
  int a[8] = {1,2,3,5,5,5,7,8};
  int size = 8;
  int target = 5;

  int first = firstOccurence(a, size, target);
  int last = lastOccurence(a, size, target);

  cout << "First occurence of " << target << " is: " << first << endl;
  cout << "Last occurence of " << target << " is: " << last << endl;
  return 0;
}
