#include <iostream>

//this ������, �ڱ� �ڽ��� ����Ű�� ������
using namespace std;

class MyClass
{
public:
	void PrintThis()
	{
		cout << "���� �ּҴ� " << this << endl;
	}
};


int main(void)
{	
	MyClass a, b;
	cout << "a�� �ּҴ� " << &a << endl;
	cout << "b�� �ּҴ� " << &b << endl;

	a.PrintThis();
	b.PrintThis();
	//a�� �ּҿ� this�� ����, b�� �ּҿ� this�� ����.
	//�� this ��� �ִ� �ڽ��� �ּҸ� ����Ų�ٰ� �� �� �ִ�.

}