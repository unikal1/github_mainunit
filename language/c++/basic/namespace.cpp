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
		//::n = 25;		n이 '무소속'에 있음을 표시했기에 전역변수인 n의 값이 바뀐다.
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
		변수이름은 똑같이 n이더라도 namespace가 다르면 다 다르다.
		namespace가 지정되어있지 않으면 그냥 n이라고 해도 되고 ::n이라고 해도 된다.
	*/
}

namespace doodle
{
	int a;
	int b;
	void set()
	{
		doodle::n = 20;
	}	//위에선 선언만 하고 아래에서 자세한 설명을 할 수 있다.
}		//namespace는 2번 쓸 수 있다. (아 이게 있었지!)

//또는 namespace 안의 함수를 정의할때
void google::set()
{
	n = 30;
}		//처럼 할 수 있다.