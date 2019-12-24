//생성자 : 객체가 생성될 때 자동으로 호출되는 함수
//소멸자 : 객체가 소멸될 때 자동으로 호출되는 함수

#include <iostream>

using namespace std;

class MyClass
{
public:
	MyClass()		//생성자
	{
		cout << "생성자가 호출되었다!" << endl;
	}

	~MyClass()		//소멸자
	{
		cout << "소멸자가 호출되었다!" << endl;
	}
};

MyClass globalobj;

void testLocalObj() //지역객체(local object)의 생성과 소멸을 테스트 하기 위한 함수
{
	cout << "testLocalObj 시작" << endl;
	MyClass localObj;
	cout << "testLocalObj 끝" << endl;
}

int main(void)
{
	cout << "메인함수 시작" << endl;
	testLocalObj();
	cout << "메인함수 끝" << endl;
}

/*
	<출력>
생성자가 호출되었다!		globalobj
메인함수 시작				
testLocalObj 시작		main함수 실행
생성자가 호출되었다!		localobj
testLocalObj 끝			main함수내에서 종료
소멸자가 호출되었다!		localobj
메인함수 끝				main함수 종료
소멸자가 호출되었다!		globalobj

*/
//->전역 오브젝트는 메인함수 시작 전에 만들어지고 메인함수 끝나면 소멸된다.