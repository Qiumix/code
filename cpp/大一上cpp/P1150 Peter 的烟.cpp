#include<iostream>
using namespace std;
int main1150()
{
	int n,k,d=0,count=0; cin >> n>>k;//n��������d�̵�������count����������
	while(n>0)
	{
		count += n;//����
		d += n ;//�����̵�
		n = 0;
		n += (d / k);//����
		d %= k;
	}
	cout << count;
	return 0;
}