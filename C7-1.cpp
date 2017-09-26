/*
题目描述:
定义一个基类Account，数据成员包含string类变量userName用于保存账户主人姓名，
函数成员包括默认构造函数、带参构造函数用于初始化数据成员和输出姓名的成员函PrintName()。
从Account类派生出CreditAccount类，增加整型数据成员credit用于记录该用户信用额度，
函数成员包括带参构造函数用于初始化数据成员和输出账户信息的成员函数PrintInfo()。
要求：在函数PrintInfo()中需要调用基类的成员函数PrintName()。

输入描述
无

输出描述
输出共两行，第一行为账户姓名，第二行为账户信用额度

样例输入
无

样例输出
I Love CPP
10000

*/
#include <iostream>
#include <string>
using namespace std;
class Account
{ 
     string userName;
public:
     Account(){};
     Account( string name );
     void  PrintUserName();
};

class CreditAccount : public Account
{
public:
     CreditAccount( string name, int credit);
     void PrintInfo();
private:
     int credit;
};


//请实现Account构造函数Account(char *name)
//请实现Account的PrintUserName()函数
//请实现CreditAccount类的构造函数CreditAccount(char* name, long number)
//请实现CreditAccount类的PrintInfo()函数

//--------------------以下是答案--------------------

Account::Account(string name):userName(name)
{

}

void Account::PrintUserName()
{
    cout << userName <<endl;
}

CreditAccount::CreditAccount(string name,int credit):Account(name),credit(credit)
{

}

void CreditAccount::PrintInfo()
{
    PrintUserName();
    cout<<credit<<endl;
}

//--------------------以上是答案--------------------

int main()
{
     CreditAccount a("I Love CPP", 10000);
     a.PrintInfo();
     return 0;
}
