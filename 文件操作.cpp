//c++�ж��ļ�������Ҫ����ͷ�ļ�<fstream>
//�ļ����ͷ���Ϊ����
//�ı��ļ�  �ļ����ı���ASCII����ʽ�洢�ڼ������
//�������ļ�             ��������ʽ
//
//�����ļ���������
//1 ofstream д����
//2 ifstream ������
//3 fstream  ��д����
//
//д�ļ�����
//1.����ͷ�ļ�
//#include<fstream>
//2.����������
//ofstream ofs;
//3.���ļ�
//ofs.open("�ļ�·��"���򿪷�ʽ)��
//4.д����
//ofs << "д�������"��
//5.�ر��ļ�
//ofs.close();
//
//�򿪷�ʽ
//ios::in     Ϊ���ļ������ļ�
//ios::out    Ϊд�ļ������ļ�
//ios::ate    ��ʼλ�� �ļ�β
//ios::app    ׷�ӷ�ʽд�ļ�
//ios::trunc  ����ļ�������ɾ�����ڴ���
//ios::binary �����Ʒ�ʽ
//
//�ļ��򿪷�ʽ�������ʹ�ã�����|������
//ios::binaru|ios::out
//#include<iostream>
//#include<fstream>
//using namespace std;
//void test()
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//	ofs << "����������С��" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "��ߣ�178" << endl;
//	ofs << "ֱ���䣺74751" << endl;
//	ofs.close();
//}
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}



//���ļ�
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
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//��һ��
//	/*char arr[1024] = { 0 };
//	while (ifs>>arr)
//	{
//		cout << arr << endl;
//	}*/
//	//�ڶ���
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf,sizeof(buf)))
//	{
//		cout << buf << endl;
//	}
//	ifs.close();*/
//	//������
//	/*string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf <<endl;
//	}*/
//	//������
//	char c;
//	while ((c = ifs.get()) != EOF)//EOF end of file  �ļ���β
//	{
//		cout << c ;//���ܼ�endl;
//	}
//	ifs.close();
//}
//int main()
//{
//	test1();
//	system("pause");
//	return 0;
//}

//������д�ļ� ��Ҫ������������ó�Ա����write
//����ԭ�� ostream& write(const char* buffer,int len)
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
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
//	Person p1 = { "С��",31 };
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

//���ļ�
//�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
//����ԭ�ͣ�istread& read(char* buffer, int len);
//�������� �ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䣬len�Ƕ�д���ֽ���

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
//	cout << "������" << p.m_name << endl;
//	cout << "���䣺" << p.m_age << endl;
//	return cout;
//}
//void test()
//{
//	Person p;
//	ifstream ifs;
//	ifs.open("person.txt", ios::out);
//	if (!ifs.is_open())
//	{
//		cout << "���ļ�ʧ��" << endl;
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
	ofs << "����С��" << endl;
	ofs << "��" << endl;
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