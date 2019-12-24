#include <iostream>

//namespace의 용도를 알려주기위한 임시 조치
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
	//에서 n은 같지만 namespace가 다르기 때문에 둘은 다른것이 된다.
	//namespace는 뒤에 오는 이름을 구분해주는 일종의 '성'같은 개념이다.
	std::cout << "hello, world" << std::endl;
	/*
		std::cout에서 std는 namespace, cout는 c out으로 읽으면된다.
		<<  << 의 경우 명령어를 분리해주는것. (, 라고 생각하면 쉽다.)
		std::endl 의 경우 끝내는 경우인데 l은 line으로 줄 띄움이다.
	*/
	std::cout << "hello, world" << 10 << 'c' << std::endl;
	//순서대로 실행된다. 즉 여러 명령어를 분리해주는 printf 에서 , 의 개념

	cout << "hello, world" << endl;
	//위에서 using namespace std; 를 씀으로써 std를 쓸 필요가 없다.

	int a, b;
	cin >> a >> b;
	// >> 와 << 의 경우 cout는 최종적으로 출력하기 위해 화살표가 cout방향이지만
	//cin은 입력되어 변수에 저장되어야하므로 변수쪽으로 화살표가 되어 있다.

	cout << a << "+" << b << "=" << a + b << endl;


}