#include <iostream>
using namespace std;

int main() {
    
	float money;
	
	do {
		cout << "請輸入正確的金額(以角為單位):";
		
		cin >> money;
	} while (money < 0);

	int money1 = money * 10;

	int i;

	int j;

	while (money1 != 1) {
		i =	(money1 % 10);
		
		j = j + i;
		
		money1 = money1 / 10;
	}
	
	j = j + 1;
	
	cout << "此金額有" << j << "個錢幣";
}
