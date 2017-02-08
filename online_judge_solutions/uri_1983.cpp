//O Escolhido

#include <bits/stdc++.h>

using namespace std;

int main() {
	double maxGrade = 0;
	string maxStudentCode = "";

	int qtdStudents;
	cin >> qtdStudents;

	for (int i = 0; i < qtdStudents; i++) {
		string studentCode;
		double grade;

		cin >> studentCode >> grade;

		if (grade > maxGrade) {
			maxStudentCode = studentCode;
			maxGrade = grade;
		}

	}

	if (maxGrade < 8.0)
		cout << "Minimum note not reached" << endl;

	else
		cout << maxStudentCode << endl;

	return 0;
}