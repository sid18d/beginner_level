// Function 

long aVeryBigSum(vector<long> ar)
{
	long result = 0;
	for (int i = 0; i < ar.size(); i++) result += ar[i];
	return result;
}




 //x----------- -----------------x-------------- ---------------x-------------- ---------------x-----





// A Very Big Sum - Full code

#include <bits/stdc++.h>


using namespace std;


int main()
{
   int n;
   int i;
   cin>>n;
     long int arr[n];
    long  int sum=0;
    for(  i=0;i<n;i++)
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
