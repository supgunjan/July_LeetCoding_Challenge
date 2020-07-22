#include<bits/stdc++.h>
using namespace std;
int arr[3];

int solve(int n,int i , int sm)
{
	if(sm == n) return 0;
	if(i >2) return 0;
	int mini = 100000;
	for(int i = 0 ; i < 3 ; i++)
	{
		
		mini = min(mini,min(1+solve(n,i+1,sm+arr[i]),min(solve(n,i+1,sm))));
	}
	return mini;
}

int main()
{
	arr[0] = 1;
	arr[1] = 3;
	arr[2] = 4;
	int n;
	cin >> n;

	cout<<solve(n,0,0)<<endl;
}