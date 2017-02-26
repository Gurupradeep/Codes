#include<bits/stdc++.h>

using namespace std;


int main()
{

	int n;
	int a[1000];
	cin>>n;
	int max_ending_here = 0;
	int max_so_far = 0;
	int start = 0, end = 0, s = 0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		max_ending_here = max_ending_here + a[i];
		if(max_ending_here < 0)
		{
			//Incrementing s as we can't find a positive subarray
			s = i+1;

			//reintialising 
			max_ending_here = 0;
		}
		else
		{
			if(max_ending_here > max_so_far)
			{
				start = s;
				end = i;
				max_so_far = max_ending_here;
			}
		}	
	}
	cout<<"Max_sum is "<<max_so_far<<endl;
	cout<<"indices "<<start<<" "<<end<<endl;

}