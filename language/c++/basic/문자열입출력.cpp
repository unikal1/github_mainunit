#include <iostream>
#include <string>

//�⺻
using namespace std;

int main(void)
{
	string str;
	str = "Hello world";
	cout << str << endl;
	//���� ���� ���ڿ�
	//������ ������ ����.

	string name;
	cout << "�̸��Է� :";
	cin >> name;
	//endl ����
	string message = "�ȳ��ϼ���," + name + "��.";
	cout << message << endl;
	//���ϱ�ε� �����ϴ�. ��ġ ����ó�� ����

}