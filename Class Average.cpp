//Program for Recording Grades of Students
#include <iostream>
using namespace std;

//Function Prototypes
void obtainGrades(double grades[], int number);
void displayGrades(double grades[], int number);
double calcAverage(double grades[], int number);
char getLetterGrade(double average);										//overloaded function
char getLetterGrade(double grades[], int number);							//overloaded function

//Main Function
int main() {
	int size;																//Variable for number of students that grades will be taken in for
	double grades[50];														//Array
	double average;															//Variable for average from calcAverage function
	char letterGrade;														//Variable for letter grade from getLetterGrade function

	cout << "How many students will you be entering grades for?\n>";
	cin >> size;															//Number of students value input
	cout << endl;

	obtainGrades(grades, size);												//Calling obtainGrades Function 										

	displayGrades(grades, size);											//Calling displayGrades Function
	cout << endl;															//Displaying User Inputed Grades

	average = calcAverage(grades, size);									//Calling calcAverage Function
	cout << "Average: " << average << endl << endl;							//Displaying result from calcAverage Function

	letterGrade = getLetterGrade(grades, size);								//Calling letterGrade Function
	cout << "Grade: " << letterGrade << endl << endl;						//Displaying letterGrade function results

	return 0;
}

//Function to input user grades depending on user-selected variable in main function
void obtainGrades(double grades[], int number) {
	for (int n = 0; n < number; n++) {
		cout << "Student " << n + 1 << ": ";
		cin >> grades[n];
		if (grades[n] < 0 || grades[n] > 100) {
			cout << "Please enter again\n";
			cin >> grades[n];
		}
	}
	cout << endl;
}

//Function to display user inputed grades
void displayGrades(double grades[], int number) {
	for (int n = 0; n < number; n++) {
		cout << "Grade " << n + 1 << ": " << grades[n] << endl;
	}
}

//Function to calculate average of user inputed grades
double calcAverage(double grades[], int number) {
	double average = 0;

	for (int n = 0; n < number; n++) {
		average += grades[n];
	}

	return (average / number);
}

//Function that calculates letter grade depending on the class average mark 
char getLetterGrade(double average) {
	char letterGrade;
	if (average >= 80)
		letterGrade = 'A';
	else if (average >= 70)
		letterGrade = 'B';
	else if (average >= 60)
		letterGrade = 'C';
	else if (average >= 50)
		letterGrade = 'D';
	else
		letterGrade = 'F';

	return letterGrade;
}

//Function that determines letter grade for student depending on input
char getLetterGrade(double grades[], int number) {
	char letterGrade;
	double average = 0;

	for (int n = 0; n < number; n++) {
		average += grades[n];
	}
	average = (average / 2);

	if (average >= 80)
		letterGrade = 'A';
	else if (average >= 70)
		letterGrade = 'B';
	else if (average >= 60)
		letterGrade = 'C';
	else if (average >= 50)
		letterGrade = 'D';
	else
		letterGrade = 'F';

	return letterGrade;
}

//Ishan Chaurasia 101011068