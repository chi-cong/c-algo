#include <bits/stdc++.h>

long long findSmallestFibo(long long inputNum){
	if(inputNum <= 0){
		return 0;
	}
	long long temp, first = 1 , second = 1;
	while(second <= inputNum){
		temp = first;
		first = second;
		second = second + temp; 		
	}
	return second;
}

int main () {
	long long k;
	std::cin >> k;
	std::cout << findSmallestFibo(k); 
	return 0;
} 
