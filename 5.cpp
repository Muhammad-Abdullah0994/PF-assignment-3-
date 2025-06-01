//#include <iostream>
//using namespace std;
//
//const int teams = 6;
//const int rounds = 4;
//
//void inputscores(int scores[teams][rounds])
//{
//	for (int i = 0; i < teams; i++)
//	{
//		cout << "Teams " << i + 1 << ": " << endl;
//		for (int j = 0; j < rounds; j++)
//		{
//			cout << "Rounds " << j + 1 << ":" << endl;
//			cin >> scores[i][j];
//		}
//	}
//}
//
//void caltotalscores(int scores[teams][rounds], int total[teams])
//{
//	for (int i = 0; i < teams; i++)
//	{
//		total[i] = 0;
//		for (int j = 0; j < rounds; j++)
//		{
//			total[i] += scores[i][j];
//		}
//
//	}
//}
//
//void findwinner(int total[teams], int &winner, int &runnerup)
//{
//	winner = runnerup = -1;
//	int max = -1, max2 = -1;
//
//	for (int i = 0;i < teams; i++)
//	{
//		if (total[i] > max)
//		{
//			max2 = max;
//			runnerup = winner;
//			max = total[i];
//			winner = i;
//		}
//		else if (total[i] > max2)
//		{
//			max2 = total[i];
//			runnerup = i;
//		}
//	}
//}
//
//void displaylowscores(int scores[teams][rounds])
//{
//	cout << "Teams thats scores equal to 10 or less in any round  " << endl;
//	bool found = false;
//	for (int i = 0; i < teams; i++)
//	{
//		for (int j = 0; j < rounds; j++)
//		{
//			if (scores[i][j] <= 10)
//			{
//				cout << "Team " << i + 1 << " scored " << scores[i][j]
//					<< " in Round " << j + 1 << endl;
//
//				found = true;
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//	int score[teams][rounds];
//	int total[teams];
//	int winner;
//	int runnerup;
//
//	inputscores(score);
//	caltotalscores(score, total);
//	findwinner(total, winner, runnerup);
//
//	cout << "Display total scores " << endl;
//	for (int i = 0; i < teams; i++)
//	{
//		cout << "Teams " << i + 1 << total[i] << endl;
// 	}
//	cout << "Winner " << winner + 1 << "with " << total[winner] << "points" << endl;
//	cout << "Runner up " << runnerup + 1 << "with " << total[runnerup] << "points" << endl;
//	displaylowscores(score);
//	return 0;
//}