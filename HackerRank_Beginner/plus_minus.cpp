// function

void plusMinus(vector<int> arr) {
    
    int pos=0;
    int neg=0;
    int zero=0;
    int size = arr.size();
    
    
    for(int i = 0; i<size ; i++ )
    {
        if(arr[i]<0)
        {
            neg++;
        }
        else if (arr[i]>0)
        {
            pos++;
        }
        else if (arr[i]==0)
        {
            zero++;
        }
    }
    
    double ratio1 = double (pos)/double(size);
    double ratio2 = double (neg)/double(size);
    double ratio3 = double (zero)/double(size);
    
    cout << setprecision(6)<<ratio1<<endl;
    cout << setprecision(6)<<ratio2<<endl;
    cout << setprecision(6)<<ratio3<<endl;
}


// P.S. --> We use 'double' data type since o/p is required in decimal 
//
// P.S. --> 'setprecision[int n]' is used to show decimal value upto 6 points [as required by the Question]
//
// --------------x------------------x----------------x-----------------x------------





#include <bits/stdc++.h>


using namespace std;


int main()
{
    int n,i;
    cin>>n;
    
    float positive=0.0,negative=0.0,zero=0.0;
   
    int arr[n];
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            positive++;
        }
        if(arr[i]<0)
        {
            negative++;
        }
        if(arr[i]==0)
        {
            zero++;
        }
    }
    cout<<fixed<<setprecision(6)<<(float)positive/n<<endl;
    cout<<fixed<<setprecision(6)<<(float)negative/n<<endl;
    cout<<fixed<<setprecision(6)<<(float)zero/n;
    return 0;
    
}













