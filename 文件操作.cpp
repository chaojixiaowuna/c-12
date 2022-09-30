//c++中对文件操作需要包含头文件<fstream>
//文件类型分类为两类
//文本文件  文件以文本的ASCII码形式存储在计算机中
//二进制文件             二进制形式
//
//操作文件的三大类
//1 ofstream 写操作
//2 ifstream 读操作
//3 fstream  读写操作
//
//写文件步骤
//1.包含头文件
//#include<fstream>
//2.创建流对象
//ofstream ofs;
//3.打开文件
//ofs.open("文件路径"，打开方式)；
//4.写数据
//ofs << "写入的数据"；
//5.关闭文件
//ofs.close();
//
//打开方式
//ios::in     为读文件二打开文件
//ios::out    为写文件而打开文件
//ios::ate    初始位置 文件尾
//ios::app    追加方式写文件
//ios::trunc  如果文件存在先删除，在创建
//ios::binary 二进制方式
//
//文件打开方式可以配合使用，利用|操作符
//ios::binaru|ios::out
//#include<iostream>
//#include<fstream>
//using namespace std;
//void test()
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//	ofs << "姓名：超级小桀" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "身高：178" << endl;
//	ofs << "直播间：74751" << endl;
//	ofs.close();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



//读文件
//#include<iostream>
//using namespace std;
//#include<fstream>
//#include<string>
//void test1()
//{
//	
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//第一种
//	/*char arr[1024] = { 0 };
//	while (ifs>>arr)
//	{
//		cout << arr << endl;
//	}*/
//	//第二种
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//	}
//	ifs.close();*/
//	//第三种
//	/*string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf <<endl;
//	}*/
//	//第四种
//	char c;
//	while ((c = ifs.get()) != EOF)//EOF end of file  文件结尾
//	{
//		cout << c ;//不能加endl;
//	}
//	ifs.close();
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

//二进制写文件 主要利用流对象调用成员函数write
//函数原型 ostream& write(const char* buffer,int len)
//参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数
//#include<iostream>
//using namespace std;
//#include<fstream>
//class Person
//{
//public:
//	char m_name[40];
//	int m_age;
//};
//void test()
//{
//	Person p1 = { "小桀",31 };
//
//	ofstream ofs;
//	ofs.open("person.txt", ios::out | ios::binary);
//	ofs.write((const char*)&p1, sizeof(Person));
//	ofs.close();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

//读文件
//二进制方式读文件主要利用流对象调用成员函数read
//函数原型：istread& read(char* buffer, int len);
//参数解释 字符指针buffer指向内存中一段存储空间，len是读写的字节数

//#include<iostream>
//#include<fstream>
//using namespace std;
//class Person
//{
//public:
//	
//	char m_name[40];
//	int m_age;
//
//};
//ostream& operator<<(ostream &cout, Person &p)
//{
//	cout << "姓名：" << p.m_name << endl;
//	cout << "年龄：" << p.m_age << endl;
//	return cout;
//}
//void test()
//{
//	Person p;
//	ifstream ifs;
//	ifs.open("person.txt", ios::out);
//	if (!ifs.is_open())
//	{
//		cout << "打开文件失败" << endl;
//	}
//	ifs.read((char*)&p, sizeof(Person));
//	cout << p<<endl ;
//	ifs.close();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}

#include<iostream>
#include<fstream>
using namespace std;
void test()
{
	ofstream ofs;
	ofs.open("xiso.xls", ios::out);
	ofs << "超级小桀" << endl;
	ofs << "男" << endl;
	ofs << "178" << endl;
	ofs << "74751" << endl;
	ofs.close();
}
int main()
{
	test();
	system("pause");
	return 0;
}