#include <iostream>
using namespace std;

const int MAX = 100;
const int target = 23;
bool adding = true;

int a[MAX], n;
bool b[MAX];

void print(int n) {
	for (int i = 1; i <= n; i++) cout << a[i];
	cout << endl;
}

int calculate() {
	int result = a[1];
	for (int i = 2; i <= 9; i++){
		if(adding == true){
			result += a[i];
			adding = false;
		} else {
			result -= a[i];
			adding = true;
		}
	}
	return result;
}

void gen(int k) {
	if (k > n) {
		int result = calculate();
		if(result == target){
			print(n);
		}
		return;
	}
	for (int i = 1; i <= n; i++)
	if (b[i]) { 
		b[i] = false; 
		a[k] = i; gen(k+1); 
		b[i] = true; 
	}	
}
int main() {
	n = 9;
	for (int i = 1; i <= n; i++) b[i] = true;
	gen(1);
}

