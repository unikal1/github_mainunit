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
	google::set();		//doodle 생략 가능

	cout << ::n << endl;
	cout << doodle::n << endl;
	cout << doodle::google::n << endl;

	//그냥 set이라고하면 using namespace doodle로 인해 호출된 set인지 일반 함수인 set인지 모르기에 애매. 
	//따라서 using namespace doodle로 인해 set 호출은 불가하다.
	//그러나 doodle::google::n 은 생략이 가능하다.
}