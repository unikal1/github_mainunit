//������ : ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
//�Ҹ��� : ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass()		//������
	{
		cout << "�����ڰ� ȣ��Ǿ���!" << endl;
	}

	~MyClass()		//�Ҹ���
	{
		cout << "�Ҹ��ڰ� ȣ��Ǿ���!" << endl;
	}
};

MyClass globalobj;

void testLocalObj() //������ü(local object)�� ������ �Ҹ��� �׽�Ʈ �ϱ� ���� �Լ�
{
	cout << "testLocalObj ����" << endl;
	MyClass localObj;
	cout << "testLocalObj ��" << endl;
}

int main(void)
{
	cout << "�����Լ� ����" << endl;
	testLocalObj();
	cout << "�����Լ� ��" << endl;
}

/*
	<���>
�����ڰ� ȣ��Ǿ���!		globalobj
�����Լ� ����				
testLocalObj ����		main�Լ� ����
�����ڰ� ȣ��Ǿ���!		localobj
testLocalObj ��			main�Լ������� ����
�Ҹ��ڰ� ȣ��Ǿ���!		localobj
�����Լ� ��				main�Լ� ����
�Ҹ��ڰ� ȣ��Ǿ���!		globalobj

*/
//->���� ������Ʈ�� �����Լ� ���� ���� ��������� �����Լ� ������ �Ҹ�ȴ�.