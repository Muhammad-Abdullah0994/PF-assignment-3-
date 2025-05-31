//#include <iostream>
//using namespace std;
//
//const int students = 10;
//const int subjects = 5;
//
//void inputmarks(int marks[students][subjects])
//{
//	cout << "\t=============================================" << endl;
//	cout << "\tEnter marks for " << students << " students and " << subjects << " subjects." << endl;
//	cout << "\t=============================================" << endl;
//	for (int i = 0; i < students; i++)
//	{
//		cout << "students" << i + 1 << endl;
//		for (int j = 0; j < subjects; j++)
//		{
//			cout << "Subjects" << j+ 1 << endl;
//			cin >> marks[i][j] ;
//		}
//	}
//}
//
//void calculatetotalandavg(int marks[students][subjects], int total[], float avg[])
//{
//	for (int i = 0; i < students; i++)
//	{
//		total[i] = 0;
//		for (int j = 0; j < subjects; j++)
//		{
//			total[i] += marks[i][j];
//		}
//		avg[i] = total[i] / (float)subjects;
//	}
//}
//
//int findtopscorer(int total[])
//{
//	int topindex = 0;
//	for (int i = 1; i < students; i++)
//	{
//		if (total[i] > total[topindex])
//		{
//			topindex = i;
//		}
//	}
//	return topindex;
//}
//
//void displaygrades(float avg[])
//{
//	cout << "The average marks is: " << endl;
//	for (int i = 0; i < students; i++)
//	{
//		char grade;
//		if (avg[i] >= 90)
//			grade = 'A';
//		else if (avg[i] >= 75)
//			grade = 'B';
//		else if (avg[i] >= 50)
//			grade = 'C';
//		else
//			grade = 'F';
//
//		cout <<"Students" << i+1<< "Average = " << avg[i] << "," << "Grade = " << grade << endl;
//	}
//}
//
//int main()
//{
//	int marks[students][subjects];
//	int total[students];
//	float avg[students];
//
//	inputmarks(marks);
//	calculatetotalandavg(marks, total, avg);
//	int topscores = findtopscorer(total);
//	displaygrades(avg);
//	return 0;
//
//}