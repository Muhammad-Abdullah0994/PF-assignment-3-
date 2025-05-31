//#include <iostream>
//using namespace std;
//
//const int rows = 5;
//const int col = 5;
//
//void inputtemp(float grid[rows][col])
//{
//	cout << "Enter the temperature " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << "Temperature [" << i << "] [" << j << "] :";
//			cin >> grid[i][j];
//		}
//	}
//}
//
//void avgtemprow(float grid[rows][col])
//{
//	cout << "The average temperature is: " << endl;
//	for (int i = 0; i < rows; i++)
//	{
//		float sum = 0;
//		for (int j = 0; j < col; j++)
//		{
//			sum += grid[i][j];
//		}
//		float avg = sum / col;
//		cout << "Rows wise temp average " << i << ": " << avg << endl;
//	}
//}
//void detectextreme(float grid[rows][col])
//{
//	float maxtemp = grid[0][0];
//	float mintemp = grid[0][0];
//	int maxrows = 0;
//	int minrows = 0;
//	int maxcol = 0;
//	int mincol = 0;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (grid[i][j] > maxtemp)
//			{
//				maxtemp = grid[i][j];
//				maxrows = i;
//				maxcol = j;
//			}
//			if (grid[i][j] < mintemp)
//			{
//				mintemp = grid[i][j];
//				minrows = i;
//				mincol = j;
//			}
//		}
//	}
//	cout << "The extreme temperature is: " << endl;
//	cout << "Hotest " << maxtemp << "c at ["<< maxrows << "]["<< maxcol << "]" << endl;
//	cout << "Coldest " << mintemp << "c at [" << minrows << "][" << mincol << "]" << endl;
//
//}
//
//int main()
//{
//	float tempgrid[rows][col];
//	inputtemp(tempgrid);
//	avgtemprow(tempgrid);
//	detectextreme(tempgrid);
//	return 0;
//}