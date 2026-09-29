#include <iostream> 
using namespace std;

class Book
{
public:
	int price = 0;
	string title = "제목을 찾을 수 없습니다.";
	string author = "작자를 찾을 수 없습니다.";
	bool borrowed = false;

	void borrow()
	{
		borrowed = true;
	}
	void returnBook()
	{
		borrowed = false;
	}
	void print() {
		cout << "제목 : " + title + ", " + "작자 : " + author + ", ";
		cout << "가격 : ";
		cout << price;
		if (borrowed == true)
		{
			cout << ", 대출 중" << endl;
		}
		else
		{
			cout << ", 보유 중" << endl;
		}

	}
};

int main() {
	Book book1;
	Book book2;

	book1.title = "C++ programming";
	book1.author = "Kim";
	book1.price = 30000;
	book1.borrow();

	book2.title = "C# programming";
	book2.author = "yul";
	book2.price = 32000;

	book1.print();
	book2.print();

	book1.returnBook();
	book1.print();

	return 0;
}