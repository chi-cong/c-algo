#include <bits/stdc++.h>

std::map<long long, long long> fiboMap;

long long f(long long n){
	if (n >= 0 && n <= 2){
	 fiboMap[n] = n;
	} else {
		int remain = n % 3;
		int k = (n + remain) / 3;
		for (int i = 0; i <= remain; i++){
//			fiboMap[n] += f(2*k + i);
			fiboMap[n] += 2;
		}
	}
	return fiboMap[n];
}

int main(){
	long long n;
	std::cout << "Nhap n = ";
	std::cin >> n;
	std::cout << "f(" << n << ") = " << f(n);
	return 0;
}
