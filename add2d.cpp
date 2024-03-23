#include <iostream>
using namespace std;

int main()
{
    cout<<"\nthis is first matrix\n\n";
    int arr[2][2]={1,3,3,4};
    int secondarr[2][2]={6,5,4,3};
    int result[2][2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<arr[i][j]<<" ";
           
        }
         cout<<endl;
    }
cout<<"\nthis is second matrix\n\n";
for (int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<secondarr[i][j]<<" ";
        }
         cout<<endl;
    }

    cout<<"\nresult\n\n";
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            result[i][j]=arr[i][j]+secondarr[i][j];
            cout<<result[i][j]<<" ";
        }
         cout<<endl;
    }

    

    return 0;
}



