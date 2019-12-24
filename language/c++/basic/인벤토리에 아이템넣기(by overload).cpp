#include <iostream>

using namespace std;

int inventory[64] = { 0 };
int score = 0;
//slot has 64 blocks, each block mean the number of item which saved

int inventory_s[64] = { 0 };
int score_s = 0;

void getItem(int itemId)
{
	inventory[itemId]++;
}

void getItem(int itemId, int cnt)		//cnt means the number of item which get
{
	inventory[itemId] += cnt;
}

void getItem(int itemId, int cnt, int sc)		//sc means score which can get when having some item
{
	inventory[itemId] += cnt;
	score += sc;
}

//#################################################################################################################3

void getItem_s(int itemId, int cnt = 1, int sc = 0)		//이러면 cnt, sc에 값이 할당되지 않게되면 자동으로 0, 1로 할당. 이렇게되면 기존의 함수와 동일
{
	inventory_s[itemId] += cnt;
	score_s += sc;
}

int main(void)
{
	getItem(6, 5);
	getItem(3, 2);
	getItem(3);
	getItem(11, 34, 7000);
	for (int i = 0; i < 16; i++)
	{
		cout << inventory[i] << " ";
	}
	cout << endl;
	cout << "score = " << score << endl;


	cout << "\n" << "\n" << endl;

	/*
			요놈처럼 변수의 자료형 혹은 숫자에 따라 자동으로 할당해준다.
			근데 아예 다르게 해줄 수 있다. 함수도 하나로~~~
	*/
	getItem_s(6, 5);
	getItem_s(3, 2);
	getItem_s(3);
	getItem_s(11, 34, 7000);
	for (int i = 0; i < 16; i++)
	{
		cout << inventory_s[i] << " ";
	}
	cout << endl;
	cout << "score = " << score_s << endl;
	//완벽히 동일하다.
}
