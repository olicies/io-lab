#include <iostream>
using namespace std;

int main(){

	int a, b;
	
	cin >> a >> b;
	
	if(a <= 0 || b <= 0){
		cout << "Blad: podane liczby musza byc dodatnie." << endl;
		return 0;
	}

	cout << a << " " <<  b << endl;


	return 0;
}
