#include <iostream>
#include<algorithm>
using namespace std;

int maxWindowElement(int a[], int start, int end)
{
  int max_value = a[start];
  for(int i=start; i<end; i++)
  {
    max_value = max(max_value, a[i]);
  }
  return max_value;
}

int main() 
{
  int a[8] = {1,3,-1,-3,5,3,6,7};
  int k = 3;
  int n = 8;
  
  int result[6] = {0,0,0,0,0,0};
  int start = 0;
  
  for(int i=0; i<n-k+1; i++)
  {
    result[i] = maxWindowElement(a, start, start+k);
    start++;
  }

  for(int i=0; i<sizeof(result)/sizeof(result[0]); i++)
  {
    cout << " " << result[i]; 
  }
  return 0;
}
