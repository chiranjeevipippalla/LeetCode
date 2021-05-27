#include <iostream>
using namespace std;

int BinarySearch(int a[], int start, int end, int target)
{
  if(start > end)
  {
    return -1;
  }
  int mid = start + (end - start)/2;

  if(a[mid] == target)
  {
    return mid;
  }
  else if(a[mid] < target)
  {
    return BinarySearch(a, mid+1, end, target);
  }
  else
  {
    return BinarySearch(a, start, mid-1, target);
  }
  return -1;
}

int main() 
{
  int a[6] = {1,2,3,4,5,6};
  int target;
  int size = 6;

  int start = 0;
  int end = size - 1;

  cout << "Enter the element to be found: " << endl;
  cin >> target;

  int index = BinarySearch(a, start, end, target);

  if(index != -1)
  {
    cout << "Element " << target << " is found at index: " << index << endl;
  }
  else
  {
    cout << "Element " << target << " is not found!" << endl;
  }
  return 0;
}
