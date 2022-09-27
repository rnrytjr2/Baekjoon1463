// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int value;
int DP[1000001];
void Counter();
bool fin = false;
int main()
{
	cin >> value;
	DP[1] = 0;//1
	DP[2] = 1;//2
	DP[3] = 1;//3
	Counter();
	cout << DP[value];
}
void Counter()
{
	for(int i = 4; i <= value; i++)
	{
		DP[i] = DP[i-1] + 1;
		if ((i) % 3 == 0)
		{
			int count = DP[i /3] + 1;
			if (count < DP[i])
			{
				DP[i] = count;
			}
		}
		if ((i) % 2 == 0)
		{
			int count = DP[i / 2] + 1;
			if (count < DP[i])
			{
				DP[i] = count;
			}
		}
	}
}