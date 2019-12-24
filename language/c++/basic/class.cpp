#include <iostream>

/*
	class 와 struct는 뭔가 비슷한 면이 있다.

	class = 자료저장 + 자료처리 = 변수 + 함수
	클래스(타입) : 특정한 용도를 수행하기 위한 변수와 함수의 틀.(틀 은 자료형 아닌가??)
	객체(오브젝트) : 그 틀을 이용하여 찍어낸 개체.(일종의 변수, 메모리상의 공간)
	즉 int a 처럼 자료형 + 변수로 되어있다고 볼 수 있다.
*/

using namespace std;

//간단한 TV 만들어보기
//3가지 지시자. private, protected, public, private는 외부에서 접근 불가, public은 외부에서 접근 가능
struct TV {
private:
	bool powerOn;
	int channel;
	int volume;

public:
	void on()
	{
		powerOn = true;
		cout << "TV를 켰습니다." << endl;
	}

	void off()
	{
		powerOn = false;
		cout << "TV를 껏습니다." << endl;
	}

	void setChannel(int cnl)
	{
		if (cnl >= 1 && cnl <= 999)
		{
			channel = cnl;
			cout << "채널을 " << cnl << "으로 바꿨습니다." << endl;
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


//struct 대신 class로 쓰면 기본적으로 개체는 전부 private에 속한다.
//그러므로 public을 써가지고 외부에서의 접근이 가능케 해줘야된다.


int main(void)
{
	TV lg;
	//lg.powerOn = true;		-private이므로 접근 불가
	lg.on();		//으로 접근
	lg.setChannel(10);
	lg.setVolume(50);	
	//왜 굳이 지시자를 사용하냐면 volume같이 최대, 최소가 정해져있는 상태에서 잘못된 값을 입력받지 않기 위해
	//개체에 바로 접근하는 것이 아닌 함수를 거쳐서 접근하는 것이다.

}