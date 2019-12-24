//over load -> 함수에 대한 다중 정의. 편리한 기능...?

#include <iostream>

//using namespace std; 는 빼자. 이 안에 swap 함수가 있는데 이걸 만들꺼기 때문

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swapd(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = tmp;
}

void swapp(int* (&a), int* (&b))
{
	int* tmp = a;
	a = b;
	b = tmp;
}


void swap_s(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swap_s(double& a, double& b)
{
	double tmp = a;
	a = b;
	b = tmp;
}

void swap_s(int* (&a), int* (&b))
{
	int* tmp = a;
	a = b;
	b = tmp;
}


int main(void)
{
	int a = 20, b = 30;
	double da = 2.222, db = 3.333;
	//double은 함수 swap에 들어가면 이상해진다. 그래서 double전용 swap를 만들어보자.

	swap(a, b);
	swapd(da, db);
	//완성

	//&를 사용하지말고 *(포인터)를 이용해보자.
	int* pa = &a, * pb = &b;
	swapp(pa, pb);

	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;

	std::cout << "da : " << da << std::endl;
	std::cout << "db : " << db << std::endl;

	std::cout << "pa : " << pa << std::endl;
	std::cout << "pb : " << pb << std::endl;

	std::cout << "*pa : " << *pa << std::endl;
	std::cout << "*pb : " << *pb << std::endl;

	//근데 굳이 자료형에 따라 만들어야되나? 과정이 비슷하면 이름을 같게 할 수 있다.
	//함수이름이 통일되게 swap_s로 해놓은 새로운 함수들.

	swap_s(a, b);
	swap_s(da, db);
	swap_s(pa, pb);
	//-> 자료형에 따라 자동으로 분류되게 해준다. 기모띠.
}