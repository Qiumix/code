//���ڰ汾
#include <iostream>
using namespace std;

int main()
{
    float taxrate[5] = {0.03, 0.1, 0.2, 0.25},
          gap[4] = {36000, 144000, 300000, 420000},
          tax, income = 12000, start = 5000, sum = 0, mon;
    // cout << "�����ĸ�����ļ���㣺" << endl;
    // for (int i = 0; i < 4; i++)
    //     cin >> gap[i];
    // cout << "�����ĸ������˰�ʣ�" << endl;
    // for (int i = 0; i < 4; i++)
    //     cin >> taxrate[i];
    taxrate[4] = taxrate[3];
    // cout << "�����������㣬�����룺" << endl;
    // cin >> start >> income;
    int gapcount = 0;
    for (mon = 1; mon < 13; mon++)
    {
        if (sum + income - start > gap[gapcount] && gapcount < 4)
            tax = (gap[gapcount] - sum) * taxrate[gapcount] + (sum + income - start - gap[gapcount]) * taxrate[++gapcount];
        else
            tax = (income - start) * taxrate[gapcount];
        sum += income - start;
        cout << mon << "�·ݵ�\n˰�ն�Ϊ��" << tax << endl;
    }
}

/*
version one
#include<iostream>
using namespace std;
int main()
{
    int wage = 12000, start = 5000, tax, sum = 0, i, s[4] = { 36000, 144000, 330000,420000 };
    double ratio[5] = { 0.03,0.1,0.2,0.25,0.25 };
    for (int  mon = 1; mon <= 12; mon++)
    {
        for (i = 0; sum >= s[i] && i != 3; i++);
        if (sum + wage - start < s[i])  tax = (wage - start) * ratio[i];
        else tax = (sum + wage - start - s[i]) * ratio[i + 1] + (s[i] - sum) * ratio[i];
        sum += wage - start;
        cout << "��" << mon << "���µ�˰��Ϊ" << tax << endl;
    }
    return 0;
}
*/