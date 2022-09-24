#include <bits/stdc++.h>

using namespace std;

const int n = 8;
char board[n][n];
vector<int> col;
vector<int> posDiag;
vector<int> negDiag;

void print() {
	for (int r = 0; r < n; r++) {
		cout << "[ ";
		for (int c = 0; c < n; c++) {	
			cout << board[r][c] << " ";
		}
		cout << " ]" << endl;
	}
	cout << endl;
}

// kiem tra vi tri co nam tren nuoc di cua quan hau khac khong
bool checkPos(int c){
	for (int i = 0; i < col.size(); i++) {
		if (c = col[i]) return false;
	}
	for (int i = 0; i < posDiag.size(); i++) {
		if (c = posDiag[i]) return false;
	}
	for (int i = 0; i < negDiag.size(); i++) {
		if (c = negDiag[i]) return false;
	}
	return true;
}

void backTrack(int r) {
	if (r > n) {
			print();
		return;
	}
	for (int c = 0; c < n; c++)
	if (checkPos(c)) { 
		col.push_back(c);
		posDiag.push_back(r+c);
		negDiag.push_back(r-c);
		board[r][c] = 'Q';
		
		//de quy toi dong tiep theo tren ban co
		backTrack(r + 1);
		
		//thuc hien quay lui		
		col.pop_back();
		posDiag.pop_back();
		negDiag.pop_back();
		board[r][c] = '.';
	}	
}
int main() {
	//	danh dau cac o trong tren ban co
	for(int r = 0; r < n; r++){
		for(int c = 0; c < n; c++){
			board[r][c] = '.';
		}
	}
	
	backTrack(0);
}
