#include "SelectableRandom.h"
using namespace std;

int main()
{
	SelectableRandom r;
	int nCount = 1; // 짝수 10개를 추출하기 위한 카운팅 변수
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
	while (nCount <= 10)
	{
		int n = r.EvenRandom(); // 반환된 값을 n에 저장
		if (n != -1) // n이 짝수일 때 if문 실행
		{
			cout << n << ' ';
			nCount++;
		}
	}

	nCount = 1; // 카운팅 변수 초기화
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
	while (nCount <= 10)
	{
		int n = r.OddInRange(2, 9); // 반환된 값을 n에 저장
		if (n != -1) // n이 짝수일 때 if문 실행
		{
			cout << n << ' ';
			nCount++;
		}
	}
	cout << endl;
}