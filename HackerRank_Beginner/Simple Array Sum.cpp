

// Function :-


int simpleArraySum(vector<int> ar) 
{
int sum = 0;
for(int i = 0; i < ar.size(); i++)
{
    sum += ar[i];
}
return sum;

}


//  --------x----------x--------x----------x--------x----------x--------x----------x--------x----------

// Complete code :-


#include <bits/stdc++.h>
using namespace std;

int main()
{    int n;
cin>>n;
    int arr[n];
    int i;
int sum=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
    
}













