#include <iostream>

/*
	class �� struct�� ���� ����� ���� �ִ�.

	class = �ڷ����� + �ڷ�ó�� = ���� + �Լ�
	Ŭ����(Ÿ��) : Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� Ʋ.(Ʋ �� �ڷ��� �ƴѰ�??)
	��ü(������Ʈ) : �� Ʋ�� �̿��Ͽ� �� ��ü.(������ ����, �޸𸮻��� ����)
	�� int a ó�� �ڷ��� + ������ �Ǿ��ִٰ� �� �� �ִ�.
*/

using namespace std;

//������ TV ������
//3���� ������. private, protected, public, private�� �ܺο��� ���� �Ұ�, public�� �ܺο��� ���� ����
struct TV {
private:
	bool powerOn;
	int channel;
	int volume;

public:
	void on()
	{
		powerOn = true;
		cout << "TV�� �׽��ϴ�." << endl;
	}

	void off()
	{
		powerOn = false;
		cout << "TV�� �����ϴ�." << endl;
	}

	void setChannel(int cnl)
	{
		if (cnl >= 1 && cnl <= 999)
		{
			channel = cnl;
			cout << "ä���� " << cnl << "���� �ٲ���ϴ�." << endl;
		}
	}

	void setVolume(int vol)
	{
		if (vol >= 0 && vol <= 100)
		{
			volume = vol;
		}
	}
};


//struct ��� class�� ���� �⺻������ ��ü�� ���� private�� ���Ѵ�.
//�׷��Ƿ� public�� �ᰡ���� �ܺο����� ������ ������ ����ߵȴ�.


int main(void)
{
	TV lg;
	//lg.powerOn = true;		-private�̹Ƿ� ���� �Ұ�
	lg.on();		//���� ����
	lg.setChannel(10);
	lg.setVolume(50);	
	//�� ���� �����ڸ� ����ϳĸ� volume���� �ִ�, �ּҰ� �������ִ� ���¿��� �߸��� ���� �Է¹��� �ʱ� ����
	//��ü�� �ٷ� �����ϴ� ���� �ƴ� �Լ��� ���ļ� �����ϴ� ���̴�.

}