#include <iostream>


/*
	namespace�� ������ ����ü�� ����ϴ�.
*/

using namespace std;

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

/*
	n�� ���� ������ �ڿ��� �� ��� ����� �۵����� �ʴ´�.
	���� �ö󰡸鼭 ����� n�� ����ȴ�.
*/

int ns;
void sets()
{
	ns = 10;
}

namespace doodles
{
	void sets();
	namespace googles
	{

		void sets()
		{
			ns = 30;
		}
		int ns;
	}
	int ns;
}




int main(void)
{
	::set();
	doodle::set();
	doodle::google::set();

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;

	cout << "\n" << endl;

	::sets();
	doodles::sets();
	doodles::googles::sets();

	cout << ::ns << endl;
	cout << doodles::ns << endl;
	cout << doodles::googles::ns << endl;
	//n = 20���� ���� �ö󰡴� ���� ���� ����� ::n�� ����, n = 30���� ���� �ö󰡴� ���� ���� ����� ::n�� ����, ::n = 30�̰� ������ ������ �ʴ´�.
}

void doodles::sets()
{
	ns = 20;
}
//������ ������ ���� sets�� ���� ���ǰ� �ڿ����� �ȴٸ� doodles::ns�� ���� ������ �� �Լ� �տ����Ƿ� ���������� �۵��ȴ�.

/*
	��������� 
	1. namespace�� ��ø�� �� �ִ�.
	2. ::�� �Ҽӿ� ���Ͽ�, ������ �ȵǾ������� namespace ���� �Լ��� ���� �ö󰡸� ������ �̸��� ����� ������ ã�´�.
*/
