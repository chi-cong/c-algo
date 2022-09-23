#include <bits/stdc++.h>

int main () {
	int max = 0;
	long n;
	std::cin >> n;
	for (int i = 0; i < n;i++){
		int temp;
		std::cin >> temp ;
		if (max < temp){
			max = temp;
		}
	}
	if (max > n ){
		std::cout << n;
	} else {
		std::cout << max + 1;
	}

	return 0;
}
