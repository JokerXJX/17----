#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>//��׼�㷨ͷ�ļ�
//STL��ʶ ��װ�̳ж�̬
//�����㷨������ �º����������ռ�������
//vector�����������(����)
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	//������vector����������
//	vector<int> v;
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//ͨ����������������������
//	//vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ�������е�һ������
//	//vector<int>::iterator itEnd = v.end();//������������ָ�����������һ��Ԫ�� ����һ��λ��
//	////��һ�ֱ�����ʽ
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//�ڶ��ֱ�����ʽ
//	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}*/
//
//	//�����ֱ�����ʽ ����STL�ṩ�ı����㷨
//	for_each(v.begin(), v.end(), myPrint);
//}

//vector����Զ�����������
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
//	//���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//	//��������������
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "����:" << (*it).m_Name << " ����:" << (*it).m_Age << endl;
//		cout << "����:" << it->m_Name << " ����:" << it->m_Age << endl;
//	}
//}
////����Զ�����������  ָ��
//void test02()
//{
//	vector<Person*>v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//	//���������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//	//��������������
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "����:" << (*it).m_Name << " ����:" << (*it).m_Age << endl;
//		cout << "����:" << (*it)->m_Name << " ����:" << (*it)->m_Age << endl;
//	}
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}

//vector����Ƕ������
//void test01()
//{
//	vector<vector<int>>v;
//	//����С����
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	//��С�������������
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	//��С�������뵽������
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	//ͨ�����������������ݱ���һ��
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it)----����vector<int>
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


//string���캯��
//void test01()
//{
//	string s1;//Ĭ�Ϲ���
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

//string�ĸ�ֵ����
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

//string�ַ���ƴ��
//void test01()
//{
//	string str1 = "��";
//	str1 += "������Ϸ";
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

//�ַ������Һ��滻
//1.����
//void test01()
//{
//	string str1 = "abcdefgde";
//	int pos = str1.find("de");
//	if (pos == -1)
//		cout << "δ�ҵ��ַ���" << endl;
//	else
//        cout << "pos = " << pos << endl;
//	//rfind ��find����
//	//rfind �����������   
//	//find  �������Ҳ���
//	pos = str1.rfind("de");
//	cout << "pos = " << pos << endl;
//}
////2.�滻
//void test02()
//{
//	string str2 = "abcdefg";
//	//1��λ����  3���ַ�  �滻��1111
//	str2.replace(1, 3, "1111");
//	cout << "str2 = " << str2 << endl;
//}

//string�ַ����Ƚ�
//void test01()
//{
//	string str1 = "xello";
//	string str2 = "zello";
//	if (str1.compare(str2) == 0)
//		cout << "str1����str2" << endl;
//	else if (str1.compare(str2) > 0)
//		cout << "str1����str2" << endl;
//	else
//		cout << "str1С��str2" << endl;
//}

//string�ַ���ȡ
//void test01()
//{
//	string str = "hello";
//	//cout << "str = " << str << endl;
//	//1.ͨ��[]���ʵ����ַ�
//	/*for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;*/
//	//2.ͨ��at��ʽ���ʵ����ַ�
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//	//�޸ĵ����ַ�
//	str[0] = 'x';
//	cout << "str = " << str << endl;
//	str.at(1) = 'b';
//	cout << "str = " << str << endl;
//}

//string������ɾ��
//void test01()
//{
//	string str = "hello";
//	//����
//	str.insert(1, "111");
//	cout << "str = " << str << endl;
//	//ɾ��
//	str.erase(1, 3);
//	cout << "str = " << str << endl;
//}

//string�Ӵ�
void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);//ȡ����
	cout << "subStr = " << subStr << endl;
}
//ʵ�ò���
void test02()
{
	string email = "zhangsan@sina.com";
	//���ʼ���ַ�л�ȡ�û�����Ϣ
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