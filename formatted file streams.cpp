#include<iostream>
#include<string>
#include<fstream>

using namespace std;


/* Task1
int main()
{
	//creaton of file through constructor

	ofstream outf;
	outf.open("student.txt");

	if (!outf)
	{
		cerr << "File Creation Failed" << endl;
		exit(0);
	}

	int rollno;
	float marks;
	string firstName;
	string lastName;

	cout << "Student recods is roll no, first name , last name , marks" << endl;

	while (true)
	{
		cout << "Enter rol no:" << endl;
		cin >> rollno;
		if (rollno == -999)
		{
			break;
		}

		cout << "Enter the marks:" << endl;
		cin >> marks;

		cout << "Enter the first name:" << endl;
		cin >> firstName;

		cout << "Enter the second name:" << endl;
		cin >> lastName;

		outf << rollno << " " << marks << " " << firstName << " " << lastName << " " << endl;
	}

	outf.close();
}
*/


/* Task2
int main()
{
	ifstream inf("student.txt");

	if (!inf)
	{
		cerr << "File Creation Failed" << endl;
		exit(0);
	}

	cout << "RollNo    Name   Marks" << endl;

	int rollno;
	float marks;
	string firstName;
	string lastName;

	while (inf >> rollno >> firstName >> lastName >> marks)
	{
		string fullName = firstName + " " + lastName;
		cout << rollno << " " << fullName << " " << marks << endl;
	}
	inf.close();
	}
*/



/* Task3
int main()
{
	ifstream inputfile("input.txt");

	if (!inputfile)
	{
		cerr << "File Creation Failed" << endl;
		exit(0);
	}

	int rollno, score;

	while (inputfile >> rollno)
	{
		int highscore = 0;
		cout << rollno;

		for (int i = 0; i < 10; i++)
		{
			inputfile >> score;
			cout << " " << score;

			if (score > highscore)
			{
				highscore = score;
			}
			cout << " " << highscore << endl;
		}

	}
	inputfile.close();
}


Task4
int main()
{
	ifstream inputfile("input.txt");
	ofstream outputfile("outputfile.txt");

	if (!inputfile)
	{
		cerr << "File Creation Failed" << endl;
		exit(0);
	}

	int rollno, score;

	while (inputfile >> rollno)
	{
		int best1 = -1;
		int best2 = -1;

		for (int i = 0; i < 10; i++)
		{
			inputfile >> rollno;

			if (score >= best1)
			{
				best2 = best1;
				best1 = score;
			}
			else if (score >= best2)
			{
				best2 = score;
			}
		}
		outputfile << rollno << " " << score << " " << endl;
	}
	inputfile.close();
	outputfile.close();
}*/