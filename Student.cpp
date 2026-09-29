#include <iostream> 
using namespace std;

class Student
{
public:
	int studentId = 0;
	int score = 0;
	string name = "이름을 찾을 수 없습니다.";

	void setScore(int s)
	{
		score = s;
	}
	string printGrade()
	{
		if (score >= 90) {
			return name + "의 학점 : " +"A";
		}
		else if (score >= 80)
		{
			return name + "의 학점 : " + "B";
		}
		else if (score >= 70)
		{
			return name + "의 학점 : " + "C";
		}
		else if (score >= 60)
		{
			return name + "의 학점 : " + "D";
		}
		else {
			return name + "의 학점 : " + "F";
		}
	}
	void print() {
		cout << "이름 : " + name;
		cout << ", ";
		cout << "학번 : ";
		cout << studentId;
		cout << ", ";
		cout << "점수 : ";
		cout << score;
		cout << ", " << endl;
	}
};

int main() {

	Student student1;
	Student student2;
	Student student3;

	student1.name = "망율";
	student2.name = "당령";
	student3.name = "쟝이";
	
	student1.studentId = 2658024;
	student2.studentId = 2658025;
	student3.studentId = 2658026;

	student1.score = 90;
	student2.score = 80;
	student3.score = 70;

	student1.print();
	student2.print();
	student3.print();

	cout << student1.printGrade() << endl;
	cout << student2.printGrade() << endl;
	cout << student3.printGrade() << endl;

	student1.setScore(60);
	student2.setScore(50);

	student1.print();
	student2.print();
	student3.print();

	cout << student1.printGrade() << endl;
	cout << student2.printGrade() << endl;
	cout << student3.printGrade() << endl;

}
