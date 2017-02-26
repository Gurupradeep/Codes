#include<bits/stdc++.h>
using namespace std;


//Kadane algo for max sum subarray

int max_sum(int a[],int* start1, int* end1, int n)
{
	int max_ending_here = 0;
	int max_so_far = 0;
	int start = 0, end = 0, s = 0;
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
	*start1 = start;
	*end1 = end;
	return max_so_far; 
}

int main()
{
	int a[100][100];
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	int start,finish;
	int max_rectangle_sum = -1000000;
	int left,right,top,bottom;
	int temp[1000];
	for(int i=0;i<n;i++)
	{
		for(int p=0;p<m;p++)
			temp[p] = 0;
		for(int j=i;j<n;j++)
		{
			for(int k=0;k<m;k++)
				temp[k] = temp[k] + a[k][j];
			int sum = max_sum(temp,&start,&finish,m);
		//	cout<<sum<<endl;
		//	cout<<start<<" "<<finish<<endl;
			if(sum>max_rectangle_sum)
			{
				left = i;
				right = j;
				top = start;
				bottom = finish;
				max_rectangle_sum = sum;
			}
		}
	}
	cout<<"max rectangle sum is "<<max_rectangle_sum<<endl;
	cout<<"top left "<<top<<" "<<left<<endl;
	cout<<"bottom right "<<bottom<<" "<<right<<endl;
}


