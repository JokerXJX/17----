#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>//标准算法头文件
//STL初识 封装继承多态
//容器算法迭代器 仿函数适配器空间配置器
//vector存放内置数据(数组)
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	//创建了vector容器，数组
//	vector<int> v;
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//通过迭代器访问容器中数据
//	//vector<int>::iterator itBegin = v.begin();//起始迭代器，指向容器中第一个数据
//	//vector<int>::iterator itEnd = v.end();//结束迭代器，指向容器中最后一个元素 的下一个位置
//	////第一种遍历方式
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//第二种遍历方式
//	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}*/
//
//	//第三种遍历方式 利用STL提供的遍历算法
//	for_each(v.begin(), v.end(), myPrint);
//}

//vector存放自定义数据类型
#include<string>
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//void test01()
//{
//	vector<Person>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//遍历容器中数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "姓名:" << (*it).m_Name << " 年龄:" << (*it).m_Age << endl;
//		cout << "姓名:" << it->m_Name << " 年龄:" << it->m_Age << endl;
//	}
//}
////存放自定义数据类型  指针
//void test02()
//{
//	vector<Person*>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	//向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	//遍历容器中数据
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "姓名:" << (*it).m_Name << " 年龄:" << (*it).m_Age << endl;
//		cout << "姓名:" << (*it)->m_Name << " 年龄:" << (*it)->m_Age << endl;
//	}
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//vector容器嵌套容器
//void test01()
//{
//	vector<vector<int>>v;
//	//创建小容器
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	//向小容器中添加数据
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	//将小容器插入到大容器
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	//通过大容器把所有数据遍历一遍
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it)----容器vector<int>
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//string构造函数
//void test01()
//{
//	string s1;//默认构造
//	const char* str = "hello world";
//	string s2(str);
//	cout << "s2 = " << s2 << endl;
//	string s3(s2);
//	cout << "s3 = " << s3 << endl;
//	string s4(10, 'a');
//	cout << "s4 = " << s4 << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//string的赋值操作
//void test01()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1 = " << str1 << endl;
//	string str2;
//	str2 = str1;
//	cout << "str2 = " << str2 << endl;
//	string str3;
//	str3 = 'a';
//	cout << "str3 = " << str3 << endl;
//	string str4;
//	str4.assign("hello C++");
//	cout << "str4 = " << str4 << endl;
//	string str5;
//	str5.assign("hello C++", 5);
//	cout << "str5 = " << str5 << endl;
//	string str6;
//	str6.assign(str5);
//	cout << "str6 = " << str6 << endl;
//	string str7;
//	str7.assign(10, 'w');
//	cout << "str7 = " << str7 << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//string字符串拼接
//void test01()
//{
//	string str1 = "我";
//	str1 += "爱玩游戏";
//	cout << "str1 = " << str1 << endl;
//	str1 += ':';
//	cout << "str1 = " << str1 << endl;
//	string str2 = "LOL DNF";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//
//	string str3 = "I";
//	str3.append(" love ");
//	cout << "str3 = " << str3 << endl;
//	str3.append(" game abcde", 4);
//	cout << "str3 = " << str3 << endl;
//	str3.append(str2, 4, 3);
//	cout << "str3 = " << str3 << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

//字符串查找和替换
//1.查找
//void test01()
//{
//	string str1 = "abcdefgde";
//	int pos = str1.find("de");
//	if (pos == -1)
//		cout << "未找到字符串" << endl;
//	else
//        cout << "pos = " << pos << endl;
//	//rfind 和find区别
//	//rfind 从右往左查找   
//	//find  从左往右查找
//	pos = str1.rfind("de");
//	cout << "pos = " << pos << endl;
//}
////2.替换
//void test02()
//{
//	string str2 = "abcdefg";
//	//1号位置起  3个字符  替换成1111
//	str2.replace(1, 3, "1111");
//	cout << "str2 = " << str2 << endl;
//}

//string字符串比较
//void test01()
//{
//	string str1 = "xello";
//	string str2 = "zello";
//	if (str1.compare(str2) == 0)
//		cout << "str1等于str2" << endl;
//	else if (str1.compare(str2) > 0)
//		cout << "str1大于str2" << endl;
//	else
//		cout << "str1小于str2" << endl;
//}

//string字符存取
//void test01()
//{
//	string str = "hello";
//	//cout << "str = " << str << endl;
//	//1.通过[]访问单个字符
//	/*for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;*/
//	//2.通过at方式访问单个字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//	//修改单个字符
//	str[0] = 'x';
//	cout << "str = " << str << endl;
//	str.at(1) = 'b';
//	cout << "str = " << str << endl;
//}

//string插入与删除
//void test01()
//{
//	string str = "hello";
//	//插入
//	str.insert(1, "111");
//	cout << "str = " << str << endl;
//	//删除
//	str.erase(1, 3);
//	cout << "str = " << str << endl;
//}

//string子串
void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);//取三个
	cout << "subStr = " << subStr << endl;
}
//实用操作
void test02()
{
	string email = "zhangsan@sina.com";
	//从邮件地址中获取用户名信息
	int pos = email.find("@");//8
	string usrName = email.substr(0, pos);
	cout << "usrNmae = " << usrName << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}