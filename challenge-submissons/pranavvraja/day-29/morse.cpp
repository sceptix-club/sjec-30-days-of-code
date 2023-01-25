#include<string>
#include<iostream>

using namespace std;

string morse(char a)
{
    switch(a)
    {
        case 'a'    :   return ".-";
        case 'b'    :   return "-...";
        case 'c'    :   return "-.-.";
        case 'd'    :   return "-..";
        case 'e'    :   return ".";
        case 'f'    :   return "..-.";
        case 'g'    :   return "--.";
        case 'h'    :   return "....";
        case 'i'    :   return "..";
        case 'j'    :   return ".---";
        case 'k'    :   return "-.-";
        case 'l'    :   return ".-..";
        case 'm'    :   return "--";
        case 'n'    :   return "-.";
        case 'o'    :   return "---";
        case 'p'    :   return ".--.";
        case 'q'    :   return "--.-";
        case 'r'    :   return ".-.";
        case 's'    :   return "...";
        case 't'    :   return "-";
        case 'u'    :   return "..-";
        case 'v'    :   return "...-";
        case 'w'    :   return ".--";
        case 'x'    :   return "-..-";
        case 'y'    :   return "-.--";
        case 'z'    :   return "--..";
        default     :   return 0;
    }
}

int main()
{
   int i;
   string s;
   getline(cin,s);
   
    for(i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
        if(isspace(s[i]))
            cout<<"/ ";
        else if(ispunct(s[i]))
            cout<<"";
        else
            cout<<morse(s[i])<<" ";
    }
   return 0;
}

