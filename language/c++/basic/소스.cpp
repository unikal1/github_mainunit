#include <iostream>

//namespace�� �뵵�� �˷��ֱ����� �ӽ� ��ġ
namespace a
{
	int n;
}

namespace b
{
	int n;
}

using namespace std;

int main(void)
{
	a::n = 10;
	b::n = 20;
	//���� n�� ������ namespace�� �ٸ��� ������ ���� �ٸ����� �ȴ�.
	//namespace�� �ڿ� ���� �̸��� �������ִ� ������ '��'���� �����̴�.
	std::cout << "hello, world" << std::endl;
	/*
		std::cout���� std�� namespace, cout�� c out���� ������ȴ�.
		<<  << �� ��� ��ɾ �и����ִ°�. (, ��� �����ϸ� ����.)
		std::endl �� ��� ������ ����ε� l�� line���� �� ����̴�.
	*/
	std::cout << "hello, world" << 10 << 'c' << std::endl;
	//������� ����ȴ�. �� ���� ��ɾ �и����ִ� printf ���� , �� ����

	cout << "hello, world" << endl;
	//������ using namespace std; �� �����ν� std�� �� �ʿ䰡 ����.

	int a, b;
	cin >> a >> b;
	// >> �� << �� ��� cout�� ���������� ����ϱ� ���� ȭ��ǥ�� cout����������
	//cin�� �ԷµǾ� ������ ����Ǿ���ϹǷ� ���������� ȭ��ǥ�� �Ǿ� �ִ�.

	cout << a << "+" << b << "=" << a + b << endl;


}