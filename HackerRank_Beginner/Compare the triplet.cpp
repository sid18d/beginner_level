
//  Function

vector<int> compareTriplets(vector<int> a, vector<int> b) 
{
    vector<int> ans;
    int alice_count = 0;
    int bob_count = 0;
    
    for(int i =0; i < 3; i++ )
    {
        if(a[i] > b[i])
        {
            alice_count++;
        }
        else if(a[i] < b[i])
        {
            bob_count++;
        }
    }
    
    ans.push_back(alice_count);
    ans.push_back(bob_count);
    
    return ans;

}

//-----------x---------------x-----------------x-----------x---------------x-----------------


#include <bits/stdc++.h>


using namespace std;
int main()
{
 long long int aScore=0;
 long long int  bScore=0;
 long long int n=3;
 int i;
 int a[3],b[3];




for(int  i=0;  i<3; i++)
{
    cin>>a[i];
}
for(i=0;i<3;i++)
{
    cin>>b[i];
}


for(i=0;i<3;i++)
{
    if( a[i]> b[i])
    {
         aScore=aScore+1;
    }


    if( a[ i]< b[ i])
    {
         bScore=bScore+1;    
    }  
    if(a[i]==b[i])
    {
      
    } 
   
}
    cout<<aScore<<" " <<bScore;
    return 0;
    
}
