// Function

int countingValleys(int steps, string path) {
    int sea,c =0;
    
    for(int i=0;i<path.length();i++){
        if(path[i]=='D'){
            sea--;
        }
        else if(path[i]=='U'){
            sea++;
        }
        if(path[i]=='U' && sea==0){
            c++;
        }
    }
    return c;

}



// ------------x--------------x--------------

// Full code


#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,c=0,sea=0;
	string a;
	cin>>l;
	cin>>a;
	for(int i=0;i<a.length();i++){
		if(a[i]=='D'){
			sea--;
		}
		else if(a[i]=='U'){
			sea++;
		}
		if(a[i]=='U' && sea==0)                   // This line makes sure that that the counter 'c' is zero for hikking a valley and not a mounting [since Q asks count of valleys only !]
		{
			c++;
		}
	}
	cout<<c<<endl;
}