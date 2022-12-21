#include<iostream>

using namespace std;
int main(){
    int a[50],i,n,sum=0;
    float avg;
    cout<<"Enter the number of terms"<<endl;
    cin>>n;                                             //Number of terms of array from user
    cout<<"Enter the numbers"<<endl;
    for(i=0;i<n;i++){                                   
        cin>>a[i];                                      //Entering Array elements
        sum=sum+a[i];                                   //Computing sum of array elements
    }
    avg=sum / n;                                        //Computing Average
    for(i=0;i<n;i++){                                   
        if(a[i]>avg)                                    //Cheking whether the array element is greater than the average 
            cout<<a[i]<<endl;                           //Printing array terms which are greater than the average 
    }
    return 0;
}
