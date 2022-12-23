#include<iostream>

using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of colums :"<<endl;
    cin>>m;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    if(m%3==0 && n%2==0)                  //checking wether the colums are multiple of 3 and rows are even in number
        cout<<"Yes"<<endl;
    else if(m%2==0 && n%3==0)             //checking wether the rows are multiple of 3 and colums are even in number
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;                                                                                                                                                                                                                          
    return 0;
}
