// * //

//Function




string timeConversion(string s)
 {
    
    if(s[8]=='A')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]=s[1]=0;
        }
    }
    
    else{
        if(s[1]=='8')
        {
           s[0]=2;
           s[1]=0; 
        }
        if(s[1]=='9')
        {
           s[0]=2;
           s[1]=1; 
        }
        else if(!(s[0]=='1' && s[1]=='2'))
       {
        s[0]+=1;
        s[1]+=2;
       }
    }
    s.erase(8,2);
    return s;

}















// ----------x-----------x-------------x-------------x------------

// Full Code


#include<iostream>
using namespace std;


int main() {
    string s;
    cin >> s;


    int n = s.length();
    int hh, mm, ss;
    hh = (s[0] - '0') * 10 + (s[1] - '0');
    mm = (s[3] - '0') * 10 + (s[4] - '0');
    ss = (s[6] - '0') * 10 + (s[7] - '0');


    if (hh < 12 && s[8] == 'P') hh += 12;
    if (hh == 12 && s[8] == 'A') hh = 0;


    printf("%02d:%02d:%02d\n", hh, mm, ss);


    return 0;
}


