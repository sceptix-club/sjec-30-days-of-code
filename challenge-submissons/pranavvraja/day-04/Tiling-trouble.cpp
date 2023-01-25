#include <iostream.h>

int main()
{
    int m,n,p;
    cout<<"Enter number of rows:";
    cin>>m;
    cout<<"Enter number of columns:";
    cin>>n;
    p=m*n;
    if(p%6==0)
        cout<<"Yes";
        else
            cout<<"No";

    return 0;
}
