/*
	레퍼런스 변수에 대해서 알아보자.
	레퍼런스 변수는 참조형 변수로 & 를 사용한다.
	여기서 & 는 주솟값을 나타내는 것이 아닌 참조라는 뜻(reference)이다.

	예시를 들어보자.
*/
#include <iostream>

using namespace std;

struct hello {
	int value;
	int age;
};

struct hi {
	hello Hello;
	int far;
};

hi Hi;

void swap_by_pointer(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void swap_by_reference(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int day = 3;
int& date(int su)
{
	day += su;
	return day;
}

int date1(int su)
{
	day += su;
	return day;
}

int main(void)
{
	int a = 10;
	int b = a;
	int& c = a;

	cout << "a = " << a << "   " << "a의 주소 : " << &a << endl;
	cout << "b = " << b << "   " << "b의 주소 : " << &b << endl;
	cout << "c = " << c << "   " << "c의 주소 : " << &c << endl;

	/*
		위에서 a, b, c의 값은 모두 동일하지만 주소값은 a = c이고 b는 아예 다르다.
		즉 b는 a의 값을 그저 복사해서 다른 공간에 할당한 것이지만 c 주소가 같다.
		--> int &c = a 라 하며는 c는 a의 별칭이 되서 사용된 것이다. 할당된 공간에 대한 새로운 이름.
		즉 참조형변수(레퍼런스변수)는 선언과 동시에 초기화를 시켜줘야된다. 여기에는 null값이 들어가지 못한다.
		또한 다른 변수를 참조할 수 없다.

		l-value 와 r-value에 대해 알아보자.
		l-value 는 메모리주소를 가진 객체(즉 변환 가능한 변수)이고 r-value 는 메모리주소가 없는 임시값이다. (일반적인 상수)
		우리가 변수에 수를 대입할때 a = 10; 이라고 하듯이 왼쪽(left)에 변수, 오른쪽(right)에 상수가 들어간다.

		이건 잠시 미뤄두고 포인터와 참조형에 대해 알아보자.
	*/

	cout << "\n" << "\n" << endl;

	int value = 5;
	int* ptr = &value;
	int& ref = value;

	//이 둘은 동일하게 평가된다. 
	cout << "value = " << value << endl;
	cout << "*ptr = " << *ptr << endl;
	cout << "ref = " << ref << endl;
	/*
		다음과 같이 되는데 포인터는 null값으로 초기화가 가능하기에 이에 대한 역참조는 위험하다.
		앵간해서는 참조형으로 쓰는 편이 안전하다고 볼 수 있다.

		또한 이 둘은 함수에서 매개변수로도 많이 쓰이는데 둘 다 직접적으로 변수를 바꾸기 위해 사용된다.
		하지만 참조형변수는 복사본이 생성되는 것이 아닌 별칭이 넘어가는 것이다.
		예를 보자.
	*/

	cout << "\n" << "\n" << endl;

	int x = 10;
	int y = 20;
	cout << "before, " << "x = " << x << "  y = " << y << endl;
	cout << "before (adress), " << "&x = " << &x << "  &y = " << &y << endl;
	swap_by_pointer(&x, &y);
	
	cout << endl;

	int z = 30;
	int w = 40;
	cout << "before, " << "z = " << z << "  w = " << w << endl;
	cout << "before (adress), " << "  &z = " << &z << "  &w = " << &w << endl;
	swap_by_reference(z, w);

	cout << endl;

	cout << "by pointer, " << "x = " << x << "  y = " << y << endl;
	cout << "by pointer,(adress) " << "&x = " << &x << "  &y = " << &y << endl;

	cout << endl;

	cout << "by reference, " << "z = " << z << "  w = " << w << endl;
	cout << "by reference,(adress) " << "&z = " << &z << "  &w = " << &w << endl;

	/*
		결과와 주소값이 모두 동일하다.
		그러나 포인터기반은 해당 변수의 주소를 받아서 이에 대한 복사본이 들어가지만 참조형은 별칭만이 존재해 메모리를 덜 잡아먹는다.


		또한 이것은 구조체에서 좀더 간략화하게 사용될 수 있다.
		별칭이기에 아무리 복잡한 변수더라도 간단화시킬 수 있다.
		상단에 구조체 hi 와 hello 에서 hello 안의 value에 접근하기 위해선 Hi.Hello.value로 접근해야된다.
	*/

	int& ref_struct = Hi.Hello.value;
	//ref_struct can now be used in place of Hi.Hello.value

	Hi.Hello.value = 10;
	ref_struct = 10;
	// 이 둘은 같다.

	//또한 함수 자체를 참조형으로 만들 수 있는데 보도록 하자.
	//전역변수 day와 참조형 함수 date에 대하여
	cout << "\n" << "\n" << endl;

	int f;
	cout << date(2) << endl;
	f = date(3);
	date(4) += 5;
	
	cout << "f = " << f << endl;
	cout << "day = " << day << endl;
	//date1(4) += 5; 이 식은 에러가 뜬다. 즉 불가능하다는 소리다.
	
	//output : 5 8 17
	/*
		date(2) 는 day + 2 = 5
		f 는 day + 3 = 5 + 3 = 8   (위의 항목에서 day값이 5로 바뀜, day는 전역변수이므로 바뀔 수 있다.)
		마지막 항목이 문제인데 일단 date는 참조형임을 생각해보자.
		근데 자세한 원리는 모르겠다만 &로 반환된 함수는 함수 자체를 연산에 포함시켜 값을 수정할 수 있다.
		아마도 r_value 에서 l_value로 바뀐게 아닐까 싶다.

		보통의 함수호출 매커니즘은 함수의 이름에 저장된 주소값에 저장된 내용을 복사해와서 사용한다.

	*/
	cout << "\n" << "\n" << endl;

	cout << date1 << endl;
	cout << date1(3) << endl;
	//그저 함수의 이름만 변수로 설정하면 여기에 저장된 주소값이 호출되는 매커니즘이다. 근데 사실 별 상관 없는 내용이네... 일단 알아만 두자.



}

