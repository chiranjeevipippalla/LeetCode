#include <iostream>
using namespace std;

int BinarySearch(int a[], int size, int target)
{
  int start = 0;
  int end = size - 1;
  
  while(start <= end)
  {
    int mid = start + (end - start)/2;
    
    if(a[mid] == target)
    {
      return mid;
    }
    else if(a[mid] < target)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}

int main() 
{
  int a[6] = {1,2,3,4,5,6};
  int size = 6;
  int target;
  
  cout << "Enter element to be found: " << endl;
  cin >> target;
  
  int index = BinarySearch(a, size, target);

  if(index != -1)
  {
    cout << "Element " << target << " is found at index " << index << endl;
  }
  else
  {
    cout << "Element " << target << " is not found!" << endl;
  }
  
  return 0;
}
