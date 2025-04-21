
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, x;
  cin >> n >> x;
  int flag = 0;
  int arr[n];
  for (int i=0l; i<n; i++)
    {
      cin >> arr[i];
    }
  for (int i=0; i<n; i++)
    {
      if (arr[i] == x)
      {
        flag = 1;
      }
    }
  if (flag)
    cout << "Found" << endl;
  else
    cout << "Not Found" << endl;
  return 0;
}