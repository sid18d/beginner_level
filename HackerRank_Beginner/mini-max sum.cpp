// Function



void miniMaxSum(vector<int> arr) 

{

long long int max = INT_MIN;
long long int min = INT_MAX;
long long int sum = 0;
long long int sum_min = 0;
long long int sum_max = 0;

for(int i =0;i<5;i++)
{
    if(arr[i]<min)
    {
        min = arr[i];
    }
    if(arr[i]>max)
    {
        max = arr[i];
    }
}

for(int i = 0; i<5;i++)
{
    sum+=arr[i];
}

sum_max = sum - min;
sum_min = sum - max;

cout << sum_min << " " << sum_max <<endl;



}




//------------------x--------------------x----------------


// Full Code

#include <bits/stdc++.h>


using namespace std;


int main()
{
   long long int max=INT_MIN;
   long long int min=INT_MAX;
    long long int  sum=0;
   long long int n =5;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
    sum=sum+arr[i];
}
for(i=0;i<n;i++)
{
    if(arr[i]>max)
    
    {
 max=arr[i];
    }
    
    if(arr[i]<min)
    {
 min=arr[i];
    }
    
}


long long int ans=sum-max;
long long int ans1=sum-min;
cout<<ans <<" "<<ans1;
    return 0;
}




// Full code #2


#include <bits/stdc++.h>
using namespace std;
int main()
{
	int val, i;
	long long int sum = 0;
	vector<int> array;
	for (i = 0; i < 5; i++)
	{
		cin >> val;
		sum += val;
		//cout<<sum<<" ";
		array.push_back(val);
	}

	//cout<<endl;
	sort(array.begin(), array.end());

	/*for(i=0; i < 5; i++)
	{
	 cout<<array[i]<<endl;
	}*/
	cout << sum - array[4] << " " << sum - array[0];
	return 0;
}








