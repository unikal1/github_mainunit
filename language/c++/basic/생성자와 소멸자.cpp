#include <iostream>

using namespace std;

/*
	생성자 : 객체가 생성될 때 자동적으로 호출되는 함수
	-> 맴버변수 초기화할 때 좋다

	소멸자 : 객체가 소멸할때
	-> 맴버를 없앨 때 사용, but 아직 안배움
*/

//복소수 만들기 (real, imag) 실수부, 허수부로 구성된 수

class Complex {
public:
	Complex() {			//생성자
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_) {	//오버로딩, 똑같은 이름 2개
		real = real_;
		imag = imag_;
	}

	double GetReal()
	{
		return real;
	}
	void SetReal(double real_)
	{
		real = real_;
	}

	double GetImag()
	{
		return imag;
	}
	void SetImag(double imag_)
	{
		imag = imag_;
	}

private:
	double real;	//실수부
	double imag;	//허수부
};

int main()
{
	Complex c1;
	Complex c2 = Complex(2, 3);		//2 번째 호출
	Complex c3(2, 3);		//위의 것과 동일한 표현

	//중괄호 사용하기. 다양하게 초기화할 때처럼
	Complex c4 = { 2, 3 };


	cout << "c1 = " << c1.GetReal() << " , " << c1.GetImag() << endl;
	cout << "c2 = " << c2.GetReal() << " , " << c2.GetImag() << endl;
	cout << "c3 = " << c3.GetReal() << " , " << c3.GetImag() << endl;
}