#include<iostream>
using namespace std;
int main(void)
{
	string s;
	cout << "请输入你的问题：" << endl;
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
	cout << "服务器繁忙，请稍后再试。" << endl;
	return 0;
}