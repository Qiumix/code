#include<iostream>
#include<string>
using namespace std;
#define max 1000
struct person
{
	string name;
	string sex;
	int age=0;
	string tele;
	string add;
};
struct lib
{
	int msize =-1 ; 
	person allperson[max];
};
static void add(lib* books)
{
	system("cls");
	if (books->msize == max)
	{
		cout << "�������ˣ��޷������!";
	}
	else
	{
		books->msize++; 
		string name;
		nameinput:cout << "��������ϵ������" << endl;
		cin >> name;
		for (int i = 0; i < books->msize-1; i++)
		{
			if (books->allperson[i].name == name) 
			{
				cout << "����ϵ���������������������������������" << endl;
				goto nameinput;
			}
		}
		books->allperson[books->msize - 1].name = name;
		cout << "��������ϵ���Ա𣨡��С���Ů����" << endl;
		sexinput:cin >> books->allperson[books->msize - 1].sex;
		if (books->allperson[books->msize - 1].sex == "��" || books->allperson[books->msize - 1].sex == "Ů");
		else
		{
			cout << "�����롰�С���Ů�����벻Ҫ��������ֵֹĶ���лл��" << endl
				<<"������:"<< books->allperson[books->msize - 1].sex<<endl;
			goto sexinput;
		}
		cout << "��������ϵ������" << endl;
		ageinput:cin >> books->allperson[books->msize - 1].age;
		if (books->allperson[books->msize - 1].age < 0)
		{
			cout << "�벻Ҫ������������лл����" << endl;
			goto ageinput;
		}
		cout << "��������ϵ�˵绰" << endl;
		cin >> books->allperson[books->msize - 1].tele;
		cout << "��������ϵ�˵�ַ" << endl;
		cin >> books->allperson[books->msize - 1].add;
		cout << "��ӳɹ�лл��" << endl;
	}
	system("pause");
	system("cls");
}
static void show(lib*book)
{
	system("cls");
	if (book->msize == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i <book->msize ; i++)
		{
			cout << "	��ϵ��" << i + 1 << "��"<<endl;
			cout << "����: " << book->allperson->name << endl;
			cout << "�Ա�: " << book->allperson->sex << "��"<< endl;
			cout << "����: " << book->allperson->age <<"��"<< endl;
			cout << "�绰: " << book->allperson->tele << endl;
			cout << "��ַ: " << book->allperson->add << endl;
		}
	}
	system("pause");
	system("cls");
}
static void search(lib* book)
{
	system("cls");
	cout << "�����뱻�����˵�����" << endl;
	string name; cin >> name;
	for (int i = 0; i < book->msize; i++)
	{
		if (name == book->allperson[i].name)
		{
			cout << "	��ϵ����Ϣ��" << endl;
			cout << "����: " << book->allperson->name << endl;
			cout << "�Ա�: " << book->allperson->sex << "��" << endl;
			cout << "����: " << book->allperson->age << "��" << endl;
			cout << "�绰: " << book->allperson->tele << endl;
			cout << "��ַ: " << book->allperson->add << endl;
			goto outer;
		}
		else if (i == book->msize - 1)cout << "���޴�����" << endl;
	}
	outer:
	system("pause");
	system("cls");
}
static void change(lib*book)
{
	system("cls");
	cout << "������Ҫ�޸ĵ���ϵ�˵�����" << endl;
	string name; cin >> name;
	int i = 0;
	for (int i = 0; i < book->msize; i++)
	{
		if (name == book->allperson[i].name)
		{
			goto outer;
		}
		else if (i == book->msize - 1)cout << "���޴�����" << endl;
	}
	outer:if (name == book->allperson[i].name)
	{
		choose:
		cout << "��ѡ���޸ĵ�ѡ��" << endl;
		cout << "1.����" << endl;
		cout << "2.�Ա�" << endl;
		cout << "3.����" << endl;
		cout << "4.�绰" << endl;
		cout << "5.��ַ" << endl;
		int t; cin >> t;
		switch (t)
		{
		case 1:
			cout << "��������ϵ������" << endl;
			cin >> book->allperson[i].name;
			cout << "��������ϵ���Ա𣨡��С���Ů����" << endl;
			break;
		case 2:
			cout << "��������ϵ���Ա𣨡��С���Ů����" << endl;
		sexinput:cin >> book->allperson[i].sex;
			if (book->allperson[i].sex == "��" || book->allperson[i].sex == "Ů");
			else
			{
				cout << "�����롰�С���Ů�����벻Ҫ��������ֵֹĶ���лл��" << endl
					<< "������:" << book->allperson[i].sex << endl;
				goto sexinput;
			}
			break;
		case 3:
			cout << "��������ϵ������" << endl;
		ageinput:cin >> book->allperson[i].age;
			if (book->allperson[i].age < 0)
			{
				cout << "�벻Ҫ������������лл����" << endl;
				goto ageinput;
			}
			break;
		case 4:
			cout << "��������ϵ�˵绰" << endl;
			cin >> book->allperson[i].tele;
			break;
		case 5:
			cout << "��������ϵ�˵�ַ" << endl;
			cin >> book->allperson[i].add;
			break;
		default:
			cout << "��������Ч���֣�" << endl;
			goto choose;
		}
		cout << "�Ƿ�������ĸ���ϵ����Ϣ ��--1����--����" << endl;
		cin >> t;
		if (t == 1)goto choose;
		else cout << "�������" << endl;
	}
	system("pause");
	system("cls");
}
static void back(lib* book)
{
	system("cls");
	cout << "������Ҫɾ������ϵ�˵�����" << endl;
	string name; cin >> name;
	int i = 0;
	for (; i < book->msize; i++)
	{
		if (name == book->allperson[i].name)
		{
			goto outer;
		}
		else if (i == book->msize - 1)cout << "���޴�����" << endl;
	}
outer:if (name == book->allperson[i].name)
{
	for (int j = i; j < book->msize - 1; j++)
	{
		book->allperson[j].add = book->allperson[j + 1].add;
		book->allperson[j].age = book->allperson[j + 1].age;
		book->allperson[j].name = book->allperson[j + 1].name;
		book->allperson[j].sex = book->allperson[j + 1].sex;
		book->allperson[j].tele = book->allperson[j + 1].tele;
	}book->msize--;
	cout << "ɾ���ɹ���" << endl;
}
system("pause");
system("cls");
}
static void menu()
{
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.���ͨѶ¼ *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}
lib books;
int main()
{
	books.msize = 0;
	int select;
	while (1)
	{
		menu();
		cin >> select;
		switch (select)
		{
		case 1:
			add(&books);
			break;
		case 2:
			show(&books);
			break;
		case 3:
			back(&books);
			break;
		case 4:
			search(&books);
			break;
		case 5:
			change(&books);
			break;
		case 6:
			books.msize = 0;
			break;
		case 0:
			cout << "ͨѶ¼�Ѿ��˳���" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	system("pause");
	return 0;
}