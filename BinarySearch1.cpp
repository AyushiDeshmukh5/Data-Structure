#include<iostream>
using namespace std;
int main()
{
    int i, arr[10], num, low, high, mid;
    cout<<"Enter 5 Elements in ascending order: ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to be Search: ";
    cin>>num;
    low = 0;
    high = 5;
    mid = (low+high)/2;
    while(low <= high)
    {
        if(arr[mid]<num)
            low = mid+1;
        else if(arr[mid]==num)
        {
            cout<<"\n"<<num<<" found at Position "<<mid+1;
            break;
        }
        else
            high = mid-1;
        mid = (low+high)/2;
    }
    if(low>high)
        cout<<"\nThe number, "<<num<<" is not found.";
    cout<<endl;
