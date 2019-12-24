#include <iostream>

//this 포인터, 자기 자신을 가리키는 포인터
using namespace std;

class MyClass
{
public:
	void PrintThis()
	{
		cout << "나의 주소는 " << this << endl;
	}
};


int main(void)
{	
	MyClass a, b;
	cout << "a의 주소는 " << &a << endl;
	cout << "b의 주소는 " << &b << endl;

	a.PrintThis();
	b.PrintThis();
	//a의 주소와 this는 같다, b의 주소와 this는 같다.
	//즉 this 라는 애는 자신의 주소를 가리킨다고 볼 수 있다.

}