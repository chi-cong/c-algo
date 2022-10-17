#include <bits/stdc++.h>

std::map<long long, long long> fiboMap;

long long f(long long n){
	if(n == 0){
		return fiboMap[0];
	}
	if (fiboMap[n] != 0){
		return fiboMap[n];
	} 
	long long remain = n % 3;
	long long k = (n - remain) / 3;
	long long temp = 0 ;
	for (int i = 0; i <= remain; i++){
		temp += f(2*k + i);
	}	
	fiboMap[n] = temp;
	return fiboMap[n];	
}

int main(){
	fiboMap[0] = 0;
	fiboMap[1] = 1;
	fiboMap[2] = 2;
	
	long long n;
	std::cout << "Nhap n = ";
	std::cin >> n;
	std::cout << "f(" << n << ") = " << f(n);
	return 0;
}
