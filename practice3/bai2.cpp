#include<iostream>
using namespace std;
int a[100];
int n, temp = 0;
bool dieukien(int i,int m)
{
	if (m==0)
		return true;
	else
	{
		if (i<=a[m-1])
			return true;
		else
			return false;
	}
}

void print(int m)
{
	cout<<n<<" = "<<a[0];
	for(int i=1;i<=m;i++)
		cout<<"+"<<a[i];
	cout<<endl;
}


void phantu(int m=0)
{
	for (int i=n;i>=1;i--)
	{
		if(dieukien(i,m))
		{
			a[m]=i;
			temp+=i;
			if(temp==n)
				print(m);
			else if (temp<n)
				phantu(m+1);
			temp-=i;
		}
	}
}
int main(){
	cout<<"Nhap n = ";
	cin>>n;
	phantu();
	return 0;
}


