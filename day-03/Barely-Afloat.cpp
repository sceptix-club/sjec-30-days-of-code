#include<iostream.h>
#include<iomanip.h>
int main()
    {
            int i,ele,a[50];
            float avg,sum=0;
            cout<<"Enter number of elements:";
            cin>>ele;
            cout<<"Enter the elements:";
            for(i=0;i<ele;i++)
                cin>>a[i];
            for(i=0;i<ele;i++)
                {
                    sum=sum+a[i];
                }
            avg=sum/ele;
            for(i=0;i<ele;i++)
                {
                    if(a[i]>avg)
                        cout<<setw(4)<<a[i];
                }
        return(0);
    }