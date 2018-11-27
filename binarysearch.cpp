#include<iostream>
using namespace std;
void binarySearch(int arr[], int n, int c)
{
    int low=0;
    int high=n-1;
    bool valid=false;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==c)
        {
            cout<<"FOUND AT Position "<<mid+1<<endl;
            valid=true;
            break;
        }
        if(mid>c)
        {
            high=mid-1;
        }
        if(mid<c)
        {
            low=mid+1;
        }
    }
    if(!valid)
    {
        cout<<"NOT FOUND !"<<endl;
    }
}
int main()
{
    int n,c;
    cout<<"Enter size of your array";
    cin>>n;
    cout<<"Enter elements of your array";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element you want to search";
    cin>>c;
    binarySearch(arr,n,c);
    return 0;
}
