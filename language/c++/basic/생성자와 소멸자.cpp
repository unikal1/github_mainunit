#include <iostream>

using namespace std;

/*
	������ : ��ü�� ������ �� �ڵ������� ȣ��Ǵ� �Լ�
	-> �ɹ����� �ʱ�ȭ�� �� ����

	�Ҹ��� : ��ü�� �Ҹ��Ҷ�
	-> �ɹ��� ���� �� ���, but ���� �ȹ��
*/

//���Ҽ� ����� (real, imag) �Ǽ���, ����η� ������ ��

class Complex {
public:
	Complex() {			//������
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_) {	//�����ε�, �Ȱ��� �̸� 2��
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
	double real;	//�Ǽ���
	double imag;	//�����
};

int main()
{
	Complex c1;
	Complex c2 = Complex(2, 3);		//2 ��° ȣ��
	Complex c3(2, 3);		//���� �Ͱ� ������ ǥ��

	//�߰�ȣ ����ϱ�. �پ��ϰ� �ʱ�ȭ�� ��ó��
	Complex c4 = { 2, 3 };


	cout << "c1 = " << c1.GetReal() << " , " << c1.GetImag() << endl;
	cout << "c2 = " << c2.GetReal() << " , " << c2.GetImag() << endl;
	cout << "c3 = " << c3.GetReal() << " , " << c3.GetImag() << endl;
}