#include <iostream>
#include <string>
using namespace std;

char& find(char a[], char c, bool& success) {
	int len = strlen(a);
	for (int i = 0; i < len; i++) {
		if (a[i] == c) {
			success = true;
			return a[i];
		}
	}
	success = false;
}

int main() {
	char s[] = "Mike";
	bool b = false;
	char& loc = find(s, 'M', b);
	if (b == false) {
		cout << "M�� �߰��� �� ����" << endl;
		return 0;
	}
	loc = 'm';
	cout << s << endl;
}