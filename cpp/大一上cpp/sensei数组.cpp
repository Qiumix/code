#include<iostream>
#include<string>
using namespace std;
int mainss()
{
    struct stu
    {
        string name;
        int score;
    };
    struct tea
    {
        string name;
        stu s[5];
    };
    tea t[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "�����" << i + 1 << "����ʦ������" << endl;
        cin >> t[i].name;
        for (int j = 0; j < 5; j++)
        {
            cout << "������ʦ" << t[i].name << "�ĵ�" << j + 1 << "��ѧ�����������������ÿո����" << endl;
            cin >> t[i].s[j].name >> t[i].s[j].score;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << t[i].name << "��ʦ�ĵ�" << j + 1 << "��ѧ������������Ϊ" << t[i].s[j].name << "  " << t[i].s[i].score << endl;
        }
    }

    return 0;
}