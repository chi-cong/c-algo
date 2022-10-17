#include<iostream>
using namespace std;
int m, n; 
int a[100];

void init(){
	cout<<"Nhap n = "; cin>>n;
	cout<<"Nhap m = "; cin>>m;
}

void print(int m) 
{
	int t=0;
	for(int i=1; i<=m; i++) t=t+a[i];
	if(t==n) {
		cout<<n<<" = ";
		for(int i=1; i<m; i++)
			 cout<<a[i]<<"+";
		cout<<a[m]<<endl;
	}
	
}
void gen(int k) {
	if (k > m) 
	{
		print(m); 
		return;
	}
	int p=0;
	for(int i=1; i<=k-1; i++) p=p+a[i];
	for (int i = 1; i <= n-p-m+k; i++)
		{
			a[k] = i; 
			gen(k+1); 
		}
}
int main()
{
	init();
	gen(1);	
}
