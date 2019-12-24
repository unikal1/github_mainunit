#include <iostream>

int n;
using namespace std;

void set()
{
	::n = 10;
}

namespace doodle
{
	int n;
	void set();
}
namespace google
{
	int n;
	void set()
	{
		google::n = 30;
		//::n = 25;		n�� '���Ҽ�'�� ������ ǥ���߱⿡ ���������� n�� ���� �ٲ��.
	}
}

int main(void)
{
	::set();
	doodle::set();
	google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << google::n << endl;

	/*
		�����̸��� �Ȱ��� n�̴��� namespace�� �ٸ��� �� �ٸ���.
		namespace�� �����Ǿ����� ������ �׳� n�̶�� �ص� �ǰ� ::n�̶�� �ص� �ȴ�.
	*/
}

namespace doodle
{
	int a;
	int b;
	void set()
	{
		doodle::n = 20;
	}	//������ ���� �ϰ� �Ʒ����� �ڼ��� ������ �� �� �ִ�.
}		//namespace�� 2�� �� �� �ִ�. (�� �̰� �־���!)

//�Ǵ� namespace ���� �Լ��� �����Ҷ�
void google::set()
{
	n = 30;
}		//ó�� �� �� �ִ�.