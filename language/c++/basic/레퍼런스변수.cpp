/*
	���۷��� ������ ���ؼ� �˾ƺ���.
	���۷��� ������ ������ ������ & �� ����Ѵ�.
	���⼭ & �� �ּڰ��� ��Ÿ���� ���� �ƴ� ������� ��(reference)�̴�.

	���ø� ����.
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

	cout << "a = " << a << "   " << "a�� �ּ� : " << &a << endl;
	cout << "b = " << b << "   " << "b�� �ּ� : " << &b << endl;
	cout << "c = " << c << "   " << "c�� �ּ� : " << &c << endl;

	/*
		������ a, b, c�� ���� ��� ���������� �ּҰ��� a = c�̰� b�� �ƿ� �ٸ���.
		�� b�� a�� ���� ���� �����ؼ� �ٸ� ������ �Ҵ��� �������� c �ּҰ� ����.
		--> int &c = a �� �ϸ�� c�� a�� ��Ī�� �Ǽ� ���� ���̴�. �Ҵ�� ������ ���� ���ο� �̸�.
		�� ����������(���۷�������)�� ����� ���ÿ� �ʱ�ȭ�� ������ߵȴ�. ���⿡�� null���� ���� ���Ѵ�.
		���� �ٸ� ������ ������ �� ����.

		l-value �� r-value�� ���� �˾ƺ���.
		l-value �� �޸��ּҸ� ���� ��ü(�� ��ȯ ������ ����)�̰� r-value �� �޸��ּҰ� ���� �ӽð��̴�. (�Ϲ����� ���)
		�츮�� ������ ���� �����Ҷ� a = 10; �̶�� �ϵ��� ����(left)�� ����, ������(right)�� ����� ����.

		�̰� ��� �̷�ΰ� �����Ϳ� �������� ���� �˾ƺ���.
	*/

	cout << "\n" << "\n" << endl;

	int value = 5;
	int* ptr = &value;
	int& ref = value;

	//�� ���� �����ϰ� �򰡵ȴ�. 
	cout << "value = " << value << endl;
	cout << "*ptr = " << *ptr << endl;
	cout << "ref = " << ref << endl;
	/*
		������ ���� �Ǵµ� �����ʹ� null������ �ʱ�ȭ�� �����ϱ⿡ �̿� ���� �������� �����ϴ�.
		�ް��ؼ��� ���������� ���� ���� �����ϴٰ� �� �� �ִ�.

		���� �� ���� �Լ����� �Ű������ε� ���� ���̴µ� �� �� ���������� ������ �ٲٱ� ���� ���ȴ�.
		������ ������������ ���纻�� �����Ǵ� ���� �ƴ� ��Ī�� �Ѿ�� ���̴�.
		���� ����.
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
		����� �ּҰ��� ��� �����ϴ�.
		�׷��� �����ͱ���� �ش� ������ �ּҸ� �޾Ƽ� �̿� ���� ���纻�� ������ �������� ��Ī���� ������ �޸𸮸� �� ��ƸԴ´�.


		���� �̰��� ����ü���� ���� ����ȭ�ϰ� ���� �� �ִ�.
		��Ī�̱⿡ �ƹ��� ������ �������� ����ȭ��ų �� �ִ�.
		��ܿ� ����ü hi �� hello ���� hello ���� value�� �����ϱ� ���ؼ� Hi.Hello.value�� �����ؾߵȴ�.
	*/

	int& ref_struct = Hi.Hello.value;
	//ref_struct can now be used in place of Hi.Hello.value

	Hi.Hello.value = 10;
	ref_struct = 10;
	// �� ���� ����.

	//���� �Լ� ��ü�� ���������� ���� �� �ִµ� ������ ����.
	//�������� day�� ������ �Լ� date�� ���Ͽ�
	cout << "\n" << "\n" << endl;

	int f;
	cout << date(2) << endl;
	f = date(3);
	date(4) += 5;
	
	cout << "f = " << f << endl;
	cout << "day = " << day << endl;
	//date1(4) += 5; �� ���� ������ ���. �� �Ұ����ϴٴ� �Ҹ���.
	
	//output : 5 8 17
	/*
		date(2) �� day + 2 = 5
		f �� day + 3 = 5 + 3 = 8   (���� �׸񿡼� day���� 5�� �ٲ�, day�� ���������̹Ƿ� �ٲ� �� �ִ�.)
		������ �׸��� �����ε� �ϴ� date�� ���������� �����غ���.
		�ٵ� �ڼ��� ������ �𸣰ڴٸ� &�� ��ȯ�� �Լ��� �Լ� ��ü�� ���꿡 ���Խ��� ���� ������ �� �ִ�.
		�Ƹ��� r_value ���� l_value�� �ٲ�� �ƴұ� �ʹ�.

		������ �Լ�ȣ�� ��Ŀ������ �Լ��� �̸��� ����� �ּҰ��� ����� ������ �����ؿͼ� ����Ѵ�.

	*/
	cout << "\n" << "\n" << endl;

	cout << date1 << endl;
	cout << date1(3) << endl;
	//���� �Լ��� �̸��� ������ �����ϸ� ���⿡ ����� �ּҰ��� ȣ��Ǵ� ��Ŀ�����̴�. �ٵ� ��� �� ��� ���� �����̳�... �ϴ� �˾Ƹ� ����.



}

