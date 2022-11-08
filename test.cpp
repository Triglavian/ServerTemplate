#include "Char.h"
#include "Int.h"
#include "MainSession.h"
#include "FileTransitionSession.h"

int main() {
	Char _char = 'b';
	Char ch2 = _char;
	ch2 = 'd';
	Int num1 = 3;
	Int num2 = 6;
	bool flag1 = num1 == num2;
	bool flag2 = num1 != num2;
	bool flag3 = num1 == 0;
	bool flag4 = num1 != 0;

	float f1 = 3.4;
	float f2 = 2.3;
	float f3 = f1 / f2;

	MainSession* m = new MainSession();
	FileTransitionSession* f = new FileTransitionSession();
	ISession* session = m;
	session = f;


	//std::cout << (num1 + num2).ToString() + (num1 + num2).ToString() << std::endl << num1 - num2 << std::endl << num1 * num2 << std::endl << num2 / num1 << std::endl << num1 % num2;
	//std::cout << num1 == num2;// << num1 != num2 << num1 == 0 << num1 != 0;
}