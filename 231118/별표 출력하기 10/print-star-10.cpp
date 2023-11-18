#include <iostream>

using namespace std;

int main() {
    // 변수 선언 및 입력
    int n;
    cin >> n;

	for(int i = 1; i <= n; i++) {
		for(int k = 1; k <= i; k++)
			cout << "* ";
        cout << endl;
		for(int k = 1; k <= n - i + 1; k++)
			cout << "* ";
		cout << endl;
	}

    return 0;
}