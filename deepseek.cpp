#include<iostream>
using namespace std;
int main(void)
{
	string s;
	cout << "������������⣺" << endl;
	cin >> s;
	cout << "Tinking";
	for (int i = 0;i < 3;i++)
	{
		cout << ".";
		for (int i = 0;i < 2000000000;++i)
		{
			i = i + 1;
			i = i - 1;
		}
	}
	cout << endl;
	cout << "��������æ�����Ժ����ԡ�" << endl;
	return 0;
}