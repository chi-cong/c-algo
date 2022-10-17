#include <iostream>
#include <algorithm>

int main() {
	int n, counter = 0;
	std::cin >> n;
	int a[n];
	int temp;
	for (int i = 0; i < n; i++ ) {	
		std::cin >> temp;
		a[i] = temp;
	}
	std::sort(a, a+n);
	for (int i = 0; i < n - 4 ; i++ ) {
		for(int j = 1; j < a[n - 1] ; j++  ){	
			int currentSearchedNum = a[i];
			int stepCounter = 0;
			while (stepCounter < 4){
				if(std::binary_search(a, a + n, currentSearchedNum + j)){
					stepCounter += 1;
					currentSearchedNum += j;
				} else {
					break;
				}
				if(stepCounter == 4){
					counter ++;
 				}
			}	
		}
	}
	std::cout << counter;
	return 0;
}
