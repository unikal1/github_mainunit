#include <iostream>

int n;
void set()
{
	n = 10;
}

namespace doodle
{
	int n;
	void set()
	{
		n = 20;
	}

	namespace google
	{
		int n;
		void set()
		{
			n = 30;
		}
	}
}

int main(void)
{
	using namespace std;
	using namespace doodle;

	::set();
	doodle::set();
	google::set();		//doodle ���� ����

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;

	//�׳� set�̶���ϸ� using namespace doodle�� ���� ȣ��� set���� �Ϲ� �Լ��� set���� �𸣱⿡ �ָ�. 
	//���� using namespace doodle�� ���� set ȣ���� �Ұ��ϴ�.
	//�׷��� doodle::google::n �� ������ �����ϴ�.
}