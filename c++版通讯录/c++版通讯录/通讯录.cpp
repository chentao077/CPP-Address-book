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
	struct People data[MAX];//通讯录中保存的联系人数组
	int size;//记录已经存的数量
};
void Menu()

{
	cout << "***************************" << endl;
	cout << "****** 1、添加联系人 ******" << endl;
	cout << "****** 2、显示联系人 ******" << endl;
	cout << "****** 3、删除联系人 ******" << endl;
	cout << "****** 4、查找联系人 ******" << endl;
	cout << "****** 5、修改联系人 ******" << endl;
	cout << "****** 6、清空联系人 ******" << endl;
	cout << "****** 0、退出联系人 ******" << endl;
	cout << "***************************" << endl;
}
//添加联系人
void AddPeople(struct contact* abs)
{
	if (abs->size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		//输入姓名
		string name;
		cout << "请输入姓名 ： " << endl;
		cin >> name;
		abs->data[abs->size].m_name = name;
		//输入性别
		cout << "请输入性别 ： " << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		int sex;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->data[abs->size].m_sex = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}
		//输入年龄
		cout << "请输入年龄 ： " << endl;
		int age;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 200)
			{
				abs->data[abs->size].m_age = age;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}
		//输入电话
		string tele;
		cout << "请输入电话 ： " << endl;
		cin >> tele;
		abs->data[abs->size].m_tele = tele;
		//输入地址
		string add;
		cout << "请输入地址 ： " << endl;
		cin >> add;
		abs->data[abs->size].m_add = add;
		//添加人数
		cout << "添加成功" << endl;
		abs->size++;
		//完成一次添加后清屏
		system("pause");//按任意键继续
		system("cls");//清屏
	}
}
//显示联系人
void ShowPeople(struct contact* abs)
{
	if (abs->size == 0)
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		int i;
		for ( i = 0; i < abs->size; i++)
		{
			cout << "姓名 ：" << abs->data[i].m_name << "\t";
			cout << "性别 ：" << (abs->data[i].m_sex == 1 ? "男" : "女") << "\t";
			cout << "年龄 ：" << abs->data[i].m_age << "\t";
			cout << "电话 ：" << abs->data[i].m_tele << "\t";
			cout << "地址 ：" << abs->data[i].m_add << endl;
		}
	}
	system("pause");
	system("cls");
}
//查找联系人的下标
int SearchPeople(struct contact* abs, string name)
{
	//找到返回下标，找不到返回-1
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
//删除联系人
void DelPeople(struct contact* abs)
{
	string name;
	cout << "请输入要删除的联系人 ： " << endl;
	cin >> name;
	int ret = SearchPeople(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		int i;
		for ( i = ret; i < abs->size; i++)
		{
			abs->data[i] = abs->data[i + 1];
			cout << "删除成功" << endl;
		}
	}
	abs->size--;
	system("pause");
	system("cls");
}
//查找联系人并打印
void FindPeople(struct contact* abs)
{
	string name;
	cout << "请输入要查找的联系人 ： " << endl;
	cin >> name;
	int ret = SearchPeople(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名 ：" << abs->data[ret].m_name << "\t";
		cout << "性别 ：" << (abs->data[ret].m_sex == 1 ? "男" : "女") << "\t";
		cout << "年龄 ：" << abs->data[ret].m_age << "\t";
		cout << "电话 ：" << abs->data[ret].m_tele << "\t";
		cout << "地址 ：" << abs->data[ret].m_add << endl;
	}
	system("pause");
	system("cls");
}
//修改联系人
void ModifyPeople(struct contact* abs)
{
	string name;
	cout << "请输入要修改的联系人 ： " << endl;
	cin >> name;
	int ret = SearchPeople(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		//输入姓名
		string name;
		cout << "请输入姓名 ： " << endl;
		cin >> name;
		abs->data[ret].m_name = name;
		//输入性别
		cout << "请输入性别 ： " << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		int sex;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->data[ret].m_sex = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}
		//输入年龄
		cout << "请输入年龄 ： " << endl;
		int age;
		while (true)
		{
			cin >> age;
			if (age > 0 && age < 200)
			{
				abs->data[ret].m_age = age;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}
		//输入电话
		string tele;
		cout << "请输入电话 ： " << endl;
		cin >> tele;
		abs->data[ret].m_tele = tele;
		//输入地址
		string add;
		cout << "请输入地址 ： " << endl;
		cin >> add;
		abs->data[ret].m_add = add;
		cout << "修改成功" << endl;
	}
	system("pause");
	system("cls");
}
//清空通讯录
void CleanPeople(struct contact* abs)
{
	abs->size = 0;
	cout << "清除成功" << endl;
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
		//菜单
		Menu();
		cin >> input;
		switch (input)
		{
		case 1://添加联系人
			AddPeople(&abs);
			break;
		case 2://显示联系人
			ShowPeople(&abs);
			break;
		case 3://删除联系人
			DelPeople(&abs);
			break;
		case 4://查找联系人
			FindPeople(&abs);
			break;
		case 5://修改联系人
			ModifyPeople(&abs);
			break;
		case 6://清空联系人
			CleanPeople(&abs);
			break;
		case 0://退出通讯录
			cout << "感谢使用，退出通讯录" << endl;
			return 0;
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
			break;
		}
	} while (input);
	return 0;
}