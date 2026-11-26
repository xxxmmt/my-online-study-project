#include<iostream>
#include<string>
using namespace std;

struct hero
{
	string name;
	int age;
	string sex;
};

int main() {

	struct hero h[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};

	int len = sizeof(h) / sizeof(h[0]);

	for (int i = 0;i < len;i++)
	{
		for (int j = 0;j < len - i - 1;j++)
		{
			if (h[j].age > h[j + 1].age)
			{
				int temp = h[j].age;
				h[j].age = h[j + 1].age;
				h[j + 1].age = temp;
			}
		}
	}

	for (int i = 0;i < len;i++)
	{
		cout << "姓名: "<< h[i].name <<" 年龄: "<< h[i].age<<" 性别: "<< h[i].sex << endl;
	}


	system("pause");
	return 0;
}