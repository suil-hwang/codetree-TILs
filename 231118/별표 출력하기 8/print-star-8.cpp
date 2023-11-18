#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int n;
    cin >> n;
	
	// i가 짝수인 경우 별을 1개, 홀수인 경우 i + 1개 출력합니다
	for(int i = 0; i < n; i++) {
		if(i % 2 == 0) {
			cout << "*";
		}
		else {
			for(int k = 0; k < i + 1; k++)
				cout << "* ";
		}
		cout << "\n";
	}

    return 0;
}