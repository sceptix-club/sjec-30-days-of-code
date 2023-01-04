#include <iostream>
using namespace std;

int main()
{
    int i,n,m,a[50],sum=0,csum;
    cin>>n;
    cin>>m;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for (i=0; i<m; i++)
        sum += a[i];
    csum = sum;
    for (i=m; i<n; i++)
        {
            csum += a[i] - a[i-m];
            sum = max(sum, csum);
        }
    
    cout << sum;
    return 0;
}