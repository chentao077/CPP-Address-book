#include<iostream>
using namespace std;
#define MAX 1000

struct People
{
	string name;
	int sex;
	int age;
	string tele;
	string add;
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
int main()
{
	int input = 0;
	do
	{
		//�˵�
		Menu();
		cin >> input;
		switch (input)
		{
		case 1://�����ϵ��
			break;
		case 2://��ʾ��ϵ��
			break;
		case 3://ɾ����ϵ��
			break;
		case 4://������ϵ��
			break;
		case 5://�޸���ϵ��
			break;
		case 6://�����ϵ��
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