#include<iostream>
using namespace std;
int main()
{
	int wage = 12000, start = 5000, tax, sum = 0, i, s[4] = { 36000, 144000, 330000,420000 };
		//wage���ʣ�start�����㣬tax����˰�գ�sum�����루��ȥ�����㣩��i�����ж�sum���ڵ����䣬s[4]������������������
	double ratio[5] = { 0.03,0.1,0.2,0.25,0.25 };
		//��ͬ����˰��
	for (int  mon = 1; mon <= 12; mon++)
	{
		for (i = 0; sum >= s[i] && i != 3; i++);
		//�ж�Ŀǰ�����������ĸ�����
		if (sum + wage - start < s[i])  tax = (wage - start) * ratio[i];
		//�жϱ��¹����Ƿ�����������ͬ����
		else tax = (sum + wage - start - s[i]) * ratio[i + 1] + (s[i] - sum) * ratio[i];
		sum += wage - start;
		cout << "��" << mon << "���µ�˰��Ϊ" << tax << endl;
	}
	return 0;
}