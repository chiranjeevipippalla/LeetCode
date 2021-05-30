#include <iostream>
using namespace std;

int findIndex(int a[], int size, int target)
{
  int start = 0;
  int end = size - 1;

  while(start <= end)
  {
    int mid = start + (end - start)/2;

    //case 1
    if(target == a[mid])
    {
      return mid;
    }

    //case 2
    if(a[mid] <= a[end]) //right half sorted
    {
      if(target > a[mid] && target <= a[end])
      {
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }

    //case 3
    else //left half sorted
    {
      if(target >= a[start] && target < a[mid])
      {
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }
  }
  return -1;
}

int main() 
{
  int a[6] = {4,5,6,1,2,3};
  int size = 6;
  int target;
  cout << "Enter target element: " << endl;
  cin >> target;
  int index = findIndex(a, size, target);

  if(index != -1)
  {
    cout << "Target found at index: " << index << endl;
  }
  else
  {
    cout << "Target not found!" << endl;
  }
  return 0;
}
