#include <iostream>
using namespace std;
struct Stu
{
    int id;
    float score;
    Stu *next; // nextָ��Student�ṹ�����
};
Stu *creat(int n)
{
    Stu *head, *p;
    head = p = new Stu;
    for (int i = 0; i < n; i++)
    {
        cout << "����id�������" << endl;
        cin >> p->id >> p->score;
        if (i < n - 1)
        {
            p->next = new Stu;
            p = p->next;
        }
    }
    p->next = NULL;
    return head;
}
bool remove(Stu *&head, int id)
{
    Stu *p = head, *temp = head;
    if (head->id == id)
    {
        head = head->next;
        delete temp;
        return 1;
    }
    while (p->next != NULL)
        if (p->next->id == id)
        {
            temp = p->next;
            p->next = p->next->next;
            delete temp;
            return 0;
        }
    if (p->next == NULL)
        return 0;
}
bool add(Stu *&head, int id)
{
    Stu *p = head, *temp;
    while (p != NULL)
        if (p->id == id)
        {
            temp = new Stu;
            temp->next = p->next;
            cout << "����ڵ��id�������" << endl;
            cin >> temp->id >> temp->score;
            p->next = temp;
            return 1;
        }
    if (p == NULL)
        return 0;
}
void free(Stu *&head)
{
    Stu *p = head;
    while (p != NULL)
    {
        head = p;
        p = p->next;
        delete head;
    }
}
int main()
{
    cout << "����ڵ�������" << endl;
    int n;
    cin >> n;
    Stu *head = creat(n), *p = head;
    cout << "����ɾ���ڵ�id��" << endl;
    int id;
    cin >> id;
    if (remove(head, id))
        cout << "���޴��ˣ�" << endl;
    cout << "����󷽱�����ڵ��id��" << endl;
    cin >> id;
    if (add(head, id))
        cout << "���޴��ˣ�" << endl;
    while (p != NULL)
    {
        cout << "id\t" << p->id << "����\t" << p->score << endl;
        p = p->next;
    }
    cout << "id\t" << p->id << "����\t" << p->score << endl;
    free(head);
}