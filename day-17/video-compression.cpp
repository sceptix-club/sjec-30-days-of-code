#include <iostream>

using namespace std;

int main()
{
    int n,i,a[50];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
        
    for(i=0;i<n;i++)
        {
            if(a[i]!=a[i+1])
                cout<<a[i]<<" ";
        }

    return 0;
}