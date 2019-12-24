#include <iostream>


/*
	namespace는 일종의 구조체와 비슷하다.
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
	n에 대한 선언을 뒤에다 할 경우 제대로 작동하지 않는다.
	위로 올라가면서 선언된 n에 적용된다.
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
	//n = 20에서 위로 올라가던 도중 가장 가까운 ::n에 적용, n = 30에서 위로 올라가던 도중 가장 가까운 ::n에 적용, ::n = 30이고 나머진 변하지 않는다.
}

void doodles::sets()
{
	ns = 20;
}
//하지만 다음과 같은 sets에 대한 정의가 뒤에오게 된다면 doodles::ns에 대한 선언이 이 함수 앞에오므로 정상적으로 작동된다.

/*
	결론적으로 
	1. namespace는 중첩할 수 있다.
	2. ::의 소속에 대하여, 선언이 안되어있으면 namespace 안의 함수는 위로 올라가며 동일한 이름의 선언된 변수를 찾는다.
*/
