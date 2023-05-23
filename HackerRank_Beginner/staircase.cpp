// Function

void staircase(int n) {
    for(int i =0 ;i<n;i++)
    {
        int space = n-i-1;
        for(int j=0; j<space; j++) cout<<" ";
        for(int j=0; j<=i;j++) cout<< "#";
        
        cout<<endl;
    
    }

}

//-----------------x--------------


#include <bits/stdc++.h>


using namespace std;
int main()
{
    int row ;
    int col;
   int n;
   cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(col>=n+1-row)
            {
               cout<<"#"; 
            }
            else{
                cout<<" ";
                
            }
        }
        cout<<endl;
    }
}


