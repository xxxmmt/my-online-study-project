#include<iostream>
#include<string>
#include<ctime>
using namespace std;

	struct student
	{
		string sname;
		int score = 0;
	};

	struct teacher
	{
		string tname;
		struct student sarray[5];
	};

	string nameseed = "ABCDE";

	

	void nrhanshu(struct teacher tarray[], int len)
	{
		for (int i = 0; i < len; i++)
		{
			tarray[i].tname = "Teacher_";
			tarray[i].tname += nameseed[i];
			for (int j = 0;j < 5;j++)
			{
				tarray[i].sarray[j].sname = "Student_";
				tarray[i].sarray[j].sname += nameseed[j];
				int random = rand() % 61 + 40;
				tarray[i].sarray[j].score = random;
			}
		};

	};

	void printhanshu(struct teacher tarray[], int len)
	{
		for (int i = 0;i < len;i++)
		{
			cout << "    老师的姓名："<<tarray[i].tname << endl;
			for (int j = 0;j < 5;j++)
			{
				cout << "\t学生的姓名：" << tarray[i].sarray[j].sname << "  学生的分数：" << tarray[i].sarray[j].score << endl;
			}
		}
	};






	int main() {
		srand((unsigned int)time(NULL));

		struct teacher tarray[3];

		int len = sizeof(tarray) / sizeof(tarray[0]);
		nrhanshu(tarray, len);
		printhanshu(tarray, len);

		




	system("pause");
	return 0;
}