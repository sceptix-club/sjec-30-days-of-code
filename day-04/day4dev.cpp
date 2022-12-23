#include<iostream>

using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of colums :"<<endl;
    cin>>m;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    if(m%3==0 && n%2==0)
        cout<<"Yes"<<endl;
    else if(m%2==0 && n%3==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;                                                                                                                                                                                                                          
    return 0;
}