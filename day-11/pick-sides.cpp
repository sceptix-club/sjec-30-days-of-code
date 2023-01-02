#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int p,q,r,s,t;
    float cir,sqr,tri,rec;
    float low1,low2,middle1,middle2,high1,high2,lowest,highest;
    cout<<"Circle:";
    cin>>p;
    cout<<"Square:";
    cin>>q;
    cout<<"Triangle:";
    cin>>r;
    cout<<"Rectangle:";
    cin>>s>>t;
    
    cir=2*3.14*p*p;
    sqr=q*q;
    tri=(sqrt(3)/4)*r*r;
    rec=s*t;
    
    if (cir < sqr)
        {
            low1 = cir;
            high1 = sqr;
        }
        else 
            {
                low1 = sqr;
                high1 = cir;
            }

    if (tri < rec)
        {
            low2 = tri;
            high2 = rec;
        }
        else
            {
                low2 = rec;
                high2 = tri;
            }

    if (low1 < low2)
        {
            lowest = low1;
            middle1 = low2;
        }
        else
            {
                lowest = low2;
                middle1 = low1;
            }

    if (high1 > high2)
        {
            highest = high1;
            middle2 = high2;
        }
        else
            {
                highest = high2;
                middle2 = high1;
            }

    if (middle1 < middle2)
        {
            high1 = middle2;
            low1 = middle1;
        }
        else
            {
                low1 = middle2;
                high1 = middle1;
            }


        if(highest == cir)
            cout<<"Circle\n";
            
            else if(highest == sqr)
                cout<<"Square\n";
                
            else if(highest == tri)
                cout<<"Triangle\n";
            
            else if(highest == rec)
                cout<<"Rectangle\n";
                
        if(high1 == cir)
            cout<<"Circle\n";
            
            else if(high1 == sqr)
                cout<<"Square\n";
                
            else if(high1 == tri)
                cout<<"Triangle\n";
            
            else if(high1 == rec)
                cout<<"Rectangle\n";
                
        
        if(low1 == cir)
            cout<<"Circle\n";
            
            else if(low1 == sqr)
                cout<<"Square\n";
                
            else if(low1 == tri)
                cout<<"Triangle\n";
            
            else if(low1 == rec)
                cout<<"Rectangle\n";
        
        if(lowest == cir)
            cout<<"Circle\n";
            
            else if(lowest == sqr)
                cout<<"Square\n";
                
            else if(lowest == tri)
                cout<<"Triangle\n";
            
            else if(lowest == rec)
                cout<<"Rectangle\n";

    return 0;
}