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
int main()
{
	int input = 0;
	do
	{
		//菜单
		Menu();
		cin >> input;
		switch (input)
		{
		case 1://添加联系人
			break;
		case 2://显示联系人
			break;
		case 3://删除联系人
			break;
		case 4://查找联系人
			break;
		case 5://修改联系人
			break;
		case 6://清空联系人
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