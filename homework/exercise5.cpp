#include <bits/stdc++.h>

std::map<long long, long long> m;

long long g(long long n){
	if(n == 1 || n == 3){
		return m[n];
	}
	if (m[n] != 0){
		return m[n];
	} 
	if (n % 2 == 0){
		m[n] = g(n / 2);
	} else if (n % 4 == 1) {
		m[n] = 2 * g(2 * ( n / 4 ) + 1 ) - g(n / 4);
	} else if (n % 4 == 3) {
		m[n] = 3 * g(2 * ( n / 4 ) + 1) - 2*g(n/4);
	}
	return m[n];	
}

int main(){
	m[1] = 1;
	m[3] = 3;
	
	long long n;
	std::cout << "Nhap n = ";
	std::cin >> n;
	std::cout << "g(" << n << ") = " << g(n);
	return 0;
}
