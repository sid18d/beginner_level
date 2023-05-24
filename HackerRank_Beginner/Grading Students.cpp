// Function

vector<int> gradingStudents(vector<int> grades) {
    
        
    for(int i =0; i<grades.size(); i++)
    {
        if(grades[i]>=38)
        {
            int rem = 5 -(grades[i]%5);
            
            if(rem<3)
            {
                grades[i]+=rem;
            }
        }
        
    }
    
    return grades;

}
 

 //---------------x-------------------x---------------------x

// Full Code

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,i;
    int remind=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
{
    cin>>arr[i];
    
}
for(i=0;i<n;i++)
{
    if(arr[i]>=38)
    {
        remind=5-(arr[i]%5);
        if(remind<3)
        {
        arr[i]=remind+arr[i];
        }
    }
    cout<<arr[i]<<endl;
}
    return 0;
    
}
