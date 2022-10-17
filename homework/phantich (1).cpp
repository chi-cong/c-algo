#include <iostream>
using namespace std;
int m, n; 
int a[100];

void init(){
	cout<<"Nhap M = "; cin>>m;
	cout<<"Nhap N = "; cin>>n;
}

void print(int n) 
{
	int t=0;
	for(int i=1; i<=n; i++) t=t+a[i];
	if(t==m) {
		for(int i=1; i<=n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
	
}
void gen(int k) {
	if (k > n) 
	{
		print(n); 
		return;
	}
	int p=0;
	for(int i=1; i<=k-1; i++) p=p+a[i];
	for (int i = 1; i <= m-p-n+k; i++)
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
