#include <iostream>
#include<string>

using namespace std;

int val(char a)
{
    if (a == 'I')
        return 1;
        
    if (a == 'V')
        return 5;
    
    if (a == 'X')
        return 10;
        
    if (a == 'L')
        return 50;
        
    if (a == 'C')
        return 100;
        
    if (a == 'D')
        return 500;
        
    if (a == 'M')
        return 1000;
    
        return 0;
}


int main()
{
    int i,n=0,n1,n2;
    string s;
    
    getline(cin,s);
    for(i=0;i<s.length();i++)
        s[i] = toupper(s[i]);
    
    for(i=0;i<s.length();i++)
        {   
            n1=val(s[i]);
            n2=val(s[i+1]);
            if(n1>=n2)
                 n += n1;
            else
            {
                n += n2-n1;
                i++;
            } 
        }   
    cout<<n;
}