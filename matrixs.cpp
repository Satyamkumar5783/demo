#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of row and column :";
    cin>>n;
    int arr[n][n];
for(int i=0; i<n; i++)
{
    for(int j=0; j<n; j++)
    {
        cout<<"enter the element :";
        cin>>arr[i][j];
    }

}


for(int i=0; i<n; i++)
{
    for(int j=0; j<n; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

return 0;

}