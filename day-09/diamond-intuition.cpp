#include <iostream>
using namespace std;

int main()
{
    int n,m,i,j;
    
    cout<<"Enter width:";
    cin>>n;
    if(n>0 && n<=200)
    {
        m=n-1;
        for(i=0;i<n;i++)
            {   
                for(j=0;j<=m;j++)
                    cout<<" ";
            
                for(j=0;j<=i;j++)
                    cout<<"# ";
                cout<<endl;
                m--;
            }
        m=2;
        for(i=n-1;i>0;i--)
            {   
                for(j=0;j<m;j++)
                    cout<<" ";
                
                for(j=0;j<i;j++)
                    cout<<"# ";
                cout<<endl;
                m++;
            }
    }
    return 0;
}