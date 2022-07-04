#include<iostream>
using namespace std;
#define MAX 1000

struct People
{
	string m_name;
	int m_sex;
	int m_age;
	string m_tele;
	string m_add;
};
struct contact
{
	struct People data[MAX];//ͨѶ¼�б������ϵ������
	int size;//��¼�Ѿ��������
};
void Menu()

{
	cout << "***************************" << endl;
	cout << "****** 1�������ϵ�� ******" << endl;
	cout << "****** 2����ʾ��ϵ�� ******" << endl;
	cout << "****** 3��ɾ����ϵ�� ******" << endl;
	cout << "****** 4��������ϵ�� ******" << endl;
	cout << "****** 5���޸���ϵ�� ******" << endl;
	cout << "****** 6�������ϵ�� ******" << endl;
	cout << "****** 0���˳���ϵ�� ******" << endl;
	cout << "***************************" << endl;
}
//�����ϵ��
void AddPeople(struct contact* abs)
{
	if (abs->size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		//��������
		string name;
		cout << "���������� �� " << endl;
		cin >> name;
		abs->data[abs->size].m_name = name;
		//�����Ա�
		cout << "�������Ա� �� " << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;
		int sex;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->data[abs->size].m_sex = sex;
				break;
			}
			cout << "�����������������" << endl;
		}
		//��������
		cout << "���������� �� " << endl;
		int age;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 200)
			{
				abs->data[abs->size].m_age = age;
				break;
			}
			cout << "�����������������" << endl;
		}
		//����绰
		string tele;
		cout << "������绰 �� " << endl;
		cin >> tele;
		abs->data[abs->size].m_tele = tele;
		//�����ַ
		string add;
		cout << "�������ַ �� " << endl;
		cin >> add;
		abs->data[abs->size].m_add = add;
		//�������
		cout << "��ӳɹ�" << endl;
		abs->size++;
		//���һ����Ӻ�����
		system("pause");//�����������
		system("cls");//����
	}
}
//��ʾ��ϵ��
void ShowPeople(struct contact* abs)
{
	if (abs->size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else
	{
		int i;
		for ( i = 0; i < abs->size; i++)
		{
			cout << "���� ��" << abs->data[i].m_name << "\t";
			cout << "�Ա� ��" << (abs->data[i].m_sex == 1 ? "��" : "Ů") << "\t";
			cout << "���� ��" << abs->data[i].m_age << "\t";
			cout << "�绰 ��" << abs->data[i].m_tele << "\t";
			cout << "��ַ ��" << abs->data[i].m_add << endl;
		}
	}
	system("pause");
	system("cls");
}
//������ϵ�˵��±�
int SearchPeople(struct contact* abs, string name)
{
	//�ҵ������±꣬�Ҳ�������-1
	int i;
	for ( i = 0; i < abs->size; i++)
	{
		if (name == abs->data[i].m_name)
		{
			return i;
		}
	}
	return -1;
}
//ɾ����ϵ��
void DelPeople(struct contact* abs)
{
	string name;
	cout << "������Ҫɾ������ϵ�� �� " << endl;
	cin >> name;
	int ret = SearchPeople(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		int i;
		for ( i = ret; i < abs->size; i++)
		{
			abs->data[i] = abs->data[i + 1];
			cout << "ɾ���ɹ�" << endl;
		}
	}
	abs->size--;
	system("pause");
	system("cls");
}
//������ϵ�˲���ӡ
void FindPeople(struct contact* abs)
{
	string name;
	cout << "������Ҫ���ҵ���ϵ�� �� " << endl;
	cin >> name;
	int ret = SearchPeople(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "���� ��" << abs->data[ret].m_name << "\t";
		cout << "�Ա� ��" << (abs->data[ret].m_sex == 1 ? "��" : "Ů") << "\t";
		cout << "���� ��" << abs->data[ret].m_age << "\t";
		cout << "�绰 ��" << abs->data[ret].m_tele << "\t";
		cout << "��ַ ��" << abs->data[ret].m_add << endl;
	}
	system("pause");
	system("cls");
}
//�޸���ϵ��
void ModifyPeople(struct contact* abs)
{
	string name;
	cout << "������Ҫ�޸ĵ���ϵ�� �� " << endl;
	cin >> name;
	int ret = SearchPeople(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		//��������
		string name;
		cout << "���������� �� " << endl;
		cin >> name;
		abs->data[ret].m_name = name;
		//�����Ա�
		cout << "�������Ա� �� " << endl;
		cout << "1 -- ��" << endl;
		cout << "2 -- Ů" << endl;
		int sex;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->data[ret].m_sex = sex;
				break;
			}
			cout << "�����������������" << endl;
		}
		//��������
		cout << "���������� �� " << endl;
		int age;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 200)
			{
				abs->data[ret].m_age = age;
				break;
			}
			cout << "�����������������" << endl;
		}
		//����绰
		string tele;
		cout << "������绰 �� " << endl;
		cin >> tele;
		abs->data[ret].m_tele = tele;
		//�����ַ
		string add;
		cout << "�������ַ �� " << endl;
		cin >> add;
		abs->data[ret].m_add = add;
		cout << "�޸ĳɹ�" << endl;
	}
	system("pause");
	system("cls");
}
//���ͨѶ¼
void CleanPeople(struct contact* abs)
{
	abs->size = 0;
	cout << "����ɹ�" << endl;
	system("pause");
	system("cls");
}
int main()
{
	int input = 0;
	struct contact abs;
	abs.size = 0;
	do
	{
		//�˵�
		Menu();
		cin >> input;
		switch (input)
		{
		case 1://�����ϵ��
			AddPeople(&abs);
			break;
		case 2://��ʾ��ϵ��
			ShowPeople(&abs);
			break;
		case 3://ɾ����ϵ��
			DelPeople(&abs);
			break;
		case 4://������ϵ��
			FindPeople(&abs);
			break;
		case 5://�޸���ϵ��
			ModifyPeople(&abs);
			break;
		case 6://�����ϵ��
			CleanPeople(&abs);
			break;
		case 0://�˳�ͨѶ¼
			cout << "��лʹ�ã��˳�ͨѶ¼" << endl;
			return 0;
			break;
		default:
			cout << "�����������������" << endl;
			break;
		}
	} while (input);
	return 0;
}