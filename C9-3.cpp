/*
括号匹配  (100/100 分数)
题目描述
栈的应用非常广泛。请先实现一个栈模板类（定义已在下面给出），然后利用这个栈类解决下面的问题：

给定一个字符串，长度小于1000，其中只包含左右括号和大小写英文字母。请编写程序判断输入的字符串
里的左右括号是否全部是匹配的，匹配规则即从内到外左括号都与其右边距离最近的右括号匹配。
如匹配，输出“Yes”,否则，输出“No”。栈模板类定义如下：

#include <iostream>
#include <string>
using namespace std;
 
template<class T, int MAX = 1000>
class Stack
{
private:
       T list[MAX + 1];
       int top;
public:
       Stack();
       void push(const T &item);//将item压栈
       T pop();//将栈顶元素弹出栈
       const T & peek() const;//访问栈顶元素
       bool isEmpty() const;//判断是否栈空
};
//请完成栈模板类的实现，并解决括号匹配问题

输入描述
每个测例输入一个字符串，长度小于 1000 ，大于 0 。

输出描述
若输入字符串内的所有括号正确匹配，输出“Yes”，否则输出“No”。

样例输入
((let)(us)(practice)((stack)(template)))
()you(should))(out)put(No)

样例输出
Yes
No
*/

#include <iostream>
#include <string>
using namespace std;

template<class T, int MAX = 1000>
class Stack
{
private:
	T list[MAX + 1];
	int top;
public:
	Stack();
	void push(const T &item);//将item压栈
	T pop();//将栈顶元素弹出栈
	const T & peek() const;//访问栈顶元素
	bool isEmpty() const;//判断是否栈空
};


template<class T, int MAX>
inline Stack<T, MAX>::Stack()
{
	top = 0;
}
template<class T, int MAX>
void Stack<T, MAX>::push(const T & item)
{
	if (MAX > top)
	{
		list[top] = item;
		top++;
	}
}
template<class T, int MAX>
T Stack<T, MAX>::pop()
{
	if (top > 0)
	{
		top--;
		T temp = list[top];
		
		return temp;
	}
}
template<class T, int MAX>
const T & Stack<T, MAX>::peek() const
{
	if (top != 0)
	{
		T temp = list[top-1];
		return temp;
	}
	return 0;
	// TODO: 在此处插入 return 语句
}
template<class T, int MAX>
bool Stack<T, MAX>::isEmpty() const
{
	if (top == 0)
	{
		return true;
	}
	return false;
}




int main(void)
{


	Stack<char> kuohao;
	string shuru;
	bool panduan = false;
	getline(cin, shuru, '\n');
	for (int i = 0; i < shuru.size(); i++)
	{
		switch (shuru[i])
		{
		case '(':
			kuohao.push('L'); 
			break;
		case ')':
			if (kuohao.isEmpty() == false)
			{
				kuohao.pop();
			}
			else
			{
				panduan == true;
			}
			break;
		default:
			break;
		}
		if (panduan == true)
		{
			break;
		}
	}
	if (kuohao.isEmpty() && panduan == false)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	//getchar();
	//getchar();

	return 0;

}
