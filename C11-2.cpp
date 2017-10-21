/*
重载流运算符  (100/100 分数)
题目描述
实现一个学生类，包含学号（id），姓名（name），年级（grade）数据成员。
为了输入输出的方便，需要对这个学生类重载“>>”和“<<”运算符，
同时为了对多个学生按照学号从小到大排序，还需要重载“<”运算符，
以使用STL里的sort函数。类的声明与主函数的测试代码已给出，
请将类的实现与相关重载补充完整，使得程序正确运行并输出正确结果。

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
class Student
{
public:
       int id;
       string name, grade;
       Student(){};
       Student(int id, string name, string grade);
       bool operator < (const Student & s) const;
};
 
istream & operator >> (istream & in, Student & s);
ostream & operator << (ostream & out, Student & s);
 
/*请在这里填充代码*/
 
int main()
{
       vector<Student> sv;
       Student temp;
       while (cin >> temp)
       {
              sv.push_back(temp);
       }
       sort(sv.begin(), sv.end());
       for (int i = 0; i < sv.size(); ++i)
              cout << sv[i];
       return 0;
}

输入描述
每个测例有多行，每行包含一个整数 id 表示学号，字符串 name 表示姓名（中间无空格），
字符串 grade 表示年级，三者用空格隔开。

输出描述
将输入的所有学生按照学号由小到大排序后，按顺序输出，每个学生占一行，格式与输入相同。

样例输入
3 LiLei 14
2 HanMeimei 14
1 LinTao 15

样例输出
1 LinTao 15
2 HanMeimei 14
3 LiLei 14

*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
	int id;
	string name, grade;
	Student() {};
	Student(int id, string name, string grade);
	bool operator < (const Student & s) const
	{
		return this->id < s.id;
	}
};
Student::Student(int id, string name, string grade)
{
	this->id = id;
	this->name = name;
	this->grade = grade;
}

istream & operator >> (istream & in, Student & s)
{
	in >> s.id >> s.name >> s.grade;
	return in;
}
ostream & operator << (ostream & out, Student & s)
{
	out << s.id << ' ' << s.name << ' ' << s.grade << endl;
	return out;
}

/*请在这里填充代码*/

int main()
{
	vector<Student> sv;
	Student temp;
	while (cin >> temp)
	{
		sv.push_back(temp);
	}
	sort(sv.begin(), sv.end());
	for (int i = 0; i < sv.size(); ++i)
		cout << sv[i];
	return 0;
}
