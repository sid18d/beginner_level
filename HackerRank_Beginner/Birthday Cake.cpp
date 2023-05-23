//Function


int birthdayCakeCandles(vector<int> candles) {
    int count = 0;
    int size = candles.size();
    int max = 0;
    
    for(int i =0;i<size;i++)
    {
        if(candles[i]>max)
        {
            max = candles[i];
        }
    }
    
    for(int i = 0;i<size;i++)
    {
        if(candles[i]==max)
        {
            count++;
        }
    }
    
    return count;

}


//-------x----------x------------x-----------

//Full Code


#include <bits/stdc++.h>


using namespace std;
int main()
{
     int n;
   cin>>n;
   int i;
   int arr[n];
     int candle=0;
    int max=0;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
  
for(i=0;i<n;i++)
{
    if(arr[i]>max)
    max=arr[i];
  
}
     for (i=0;i<n;i++)
     {
     if(arr[i]==max)
    {
       candle++;
    }
    
    
} 
cout<<candle<<endl;
return 0;
    
}


