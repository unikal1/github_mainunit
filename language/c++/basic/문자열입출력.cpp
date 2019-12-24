#include <iostream>
#include <string>

//기본
using namespace std;

int main(void)
{
	string str;
	str = "Hello world";
	cout << str << endl;
	//줘어언나 쉬운 문자열
	//길이의 제한이 없다.

	string name;
	cout << "이름입력 :";
	cin >> name;
	//endl 생략
	string message = "안녕하세요," + name + "님.";
	cout << message << endl;
	//더하기로도 가능하다. 마치 변수처럼 ㄷㄷ

}