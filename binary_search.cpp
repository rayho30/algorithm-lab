#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, x;
  cin >> n >> x;
  int arr[n];
  for (int i=0; i<n; i++)
    {
      cin >> arr[i];
    }
  int l=0, r= n-1;
  int flag = 0;
  while (l<=r)
    {
      int mid = (l+r)/2;
      if (arr[mid] == x)
      {
        flag = 1;
        break;
      }
      else if (arr[mid] < x)
        l = mid+1;
      else 
        r = mid-1;
    }
  if (flag)
    cout << "Found" << endl;
  else
    cout << "Not Found" << endl;
  return 0;
}