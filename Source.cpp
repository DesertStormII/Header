#include <iostream>
#include "Header.h" 
using namespace std;


int main()
{
	system("color 1B");
	int ID;
	string name;
	double math;
	double english;
	double IT;
	StudentScoreSystem study;
	cout << endl << " Enter your ID." << endl << "\t";
	cin >> ID;
	study.setID(ID);
	cout << " Enter your name." << endl << "\t";
	cin >> name;
	study.setName(name);
	cout << " Enter your english exam score." << endl << "\t";
	cin >> english;
	study.setEnglish(english);
	if (english < 0 || english > 30) {
		cout << " Åhis cannot be (you have little or a lot)";
	}
	cout << " Enter your math exam score." << endl << "\t";
	cin >> math;
	study.setMath(math);
	if (math < 0 || math > 40) {
		cout << " Åhis cannot be (you have little or a lot)";
	}
	cout << " Enter your IT exam score." << endl << "\t";
	cin >> IT;
	study.setIT(IT);
	if (IT < 0 || IT > 30) {
		cout << " Åhis cannot be (you have little or a lot)";
	}
	cout << " Total score is: " << study.getTotal() << endl;
	cout << " Your grade: " << study.getGrade() << endl;
}