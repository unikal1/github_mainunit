//over load -> �Լ��� ���� ���� ����. ���� ���...?

#include <iostream>

//using namespace std; �� ����. �� �ȿ� swap �Լ��� �ִµ� �̰� ���鲨�� ����

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
	//double�� �Լ� swap�� ���� �̻�������. �׷��� double���� swap�� ������.

	swap(a, b);
	swapd(da, db);
	//�ϼ�

	//&�� ����������� *(������)�� �̿��غ���.
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

	//�ٵ� ���� �ڷ����� ���� �����ߵǳ�? ������ ����ϸ� �̸��� ���� �� �� �ִ�.
	//�Լ��̸��� ���ϵǰ� swap_s�� �س��� ���ο� �Լ���.

	swap_s(a, b);
	swap_s(da, db);
	swap_s(pa, pb);
	//-> �ڷ����� ���� �ڵ����� �з��ǰ� ���ش�. ����.
}