#include<iostream>

using namespace std;

int main(){
    int a,b,i;
    cout<<"Enter 2 numbers :"<<endl;
    cin>>a>>b;                              //Taking input from the user(Integer)
    // If second int input is greater than first one (ascending order)
    if(b>a){
         for(i=a;i<=b;i++){
            if((i%3)==0)                        //To check if the number is divisible by 3
                cout<<"Foo"<<endl;
            else if((i%2)==0 && (i%3)!=0)       //To check if the number is even and not divisible by 3
                cout<<"Bar"<<endl;
            else if((i%2)!=0 && (i%3)!=0)       //To check if the number is odd and not divisible by 3
                cout<<"Baz"<<endl;
        } 
    }
    // If Second integer input is less than the first one (descending order) 
    else if(b<a){
        for(i=a;i>=b;i--){                      //Reverse iteration for loop
            if((i%3)==0)                        //To check if the number is divisible by 3
                cout<<"Foo"<<endl;
            else if((i%2)==0 && (i%3)!=0)       //To check if the number is even and not divisible by 3
                cout<<"Bar"<<endl;
            else if((i%2)!=0 && (i%3)!=0)       //To check if the number is odd and not divisible by 3
                cout<<"Baz"<<endl;
        } 
    }
    //If Both the integer inputs are same
    else{
        if((a%3)==0)                        //To check if the number is divisible by 3
                cout<<"Foo"<<endl;
            else if((a%2)==0 && (a%3)!=0)       //To check if the number is even and not divisible by 3
                cout<<"Bar"<<endl;
            else if((a%2)!=0 && (a%3)!=0)       //To check if the number is odd and not divisible by 3
                cout<<"Baz"<<endl;
    }
    return 0;
};