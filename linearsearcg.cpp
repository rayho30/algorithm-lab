#include <iostream>
using namespace std;

int main ()
{
    int n,i;
    cout<<"How many elements you want: ";
    cin >>n;
    int arr[n];
    for(i=0;i<n;i++)
    {

        cin >>arr[i];
    }
    cout<<"Enter the number that you want to search :";
    int num;
    cin >>num;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            cout<<num<<" is present at location"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"the number is not present in the array"<<endl;
    }
    return 0;

}
