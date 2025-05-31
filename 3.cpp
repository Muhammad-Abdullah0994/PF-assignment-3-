//#include <iostream>
//using namespace std;
//
//const int patient = 5;
//const int days = 7;
//
//void inputStatus(char status[patient][days]) 
//{
//    cout << "Enter the patient record (s=stable, c=critical, r=recovered)" << endl;
//    for (int i = 0; i < patient; i++)
//    {
//        cout << "Patient " << i + 1 << ":" << endl;
//        for (int j = 0; j < days; j++) 
//        {
//            cout << "  Day " << j + 1 << ": ";
//            cin >> status[i][j];
//            while (status[i][j] != 's' && status[i][j] != 'c' && status[i][j] != 'r') 
//            {
//                cout << "  Invalid input. Enter 's', 'c', or 'r': ";
//                cin >> status[i][j];
//            }
//        }
//    }
//}
//
//void controlOverallStatus(char status[patient][days]) 
//{
//    int stable = 0, critical = 0, recovered = 0;
//
//    for (int i = 0; i < patient; i++) 
//    {
//        for (int j = 0; j < days; j++) 
//        {
//            switch (status[i][j])
//            {
//            case 's': stable++; break;
//            case 'c': critical++; break;
//            case 'r': recovered++; break;
//            }
//        }
//    }
//
//    cout << "\nOverall Status Count:\n";
//    cout << "Stable: " << stable << endl;
//    cout << "Critical: " << critical << endl;
//    cout << "Recovered: " << recovered << endl;
//}
//
//void countCriticalDaysPerPatient(char status[patient][days]) {
//    cout << "\nNumber of days each patient was critical:\n";
//    for (int i = 0; i < patient; i++) 
//    {
//        int criticalDays = 0;
//        for (int j = 0; j < days; j++) 
//        {
//            if (status[i][j] == 'c') 
//            {
//                criticalDays++;
//            }
//        }
//        cout << "Patient " << i + 1 << ": " << criticalDays << " days\n";
//    }
//}
//
//int main() 
//{
//    char status[patient][days];
//
//    inputStatus(status);
//    controlOverallStatus(status);
//    countCriticalDaysPerPatient(status);
//
//    return 0;
//}
