//#include <iostream>
//using namespace std;
//
//const int days = 7;
//const int items = 4;
//
//void inputSales(float sales[days][items])
//{
//    cout << "Enter the sales for " << items << " items over " << days << " days:\n";
//    for (int i = 0; i < days; i++)
//    {
//        cout << "Day " << i + 1 << ":\n";
//        for (int j = 0; j < items; j++)
//        {
//            cout << "  Item " << j + 1 << " sales: ";
//            cin >> sales[i][j];
//        }
//    }
//}
//
//void calculateTotalSalesPerItem(float sales[days][items], float totalPerItem[items])
//{
//    for (int j = 0; j < items; j++)
//    {
//        float total = 0;
//        for (int i = 0; i < days; i++)
//        {
//            total += sales[i][j]; 
//        }
//        totalPerItem[j] = total;
//    }
//
//    cout << "\nTotal sales per item:\n";
//    for (int j = 0; j < items; j++)
//    {
//        cout << "Item " << j + 1 << ": " << totalPerItem[j] << endl;
//    }
//}
//
//void totalSalesPerDay(float sales[days][items], float totalPerDay[days])
//{
//    cout << "\nTotal sales per day:\n";
//    for (int i = 0; i < days; i++)
//    {
//        float total = 0;
//        for (int j = 0; j < items; j++)
//        {
//            total += sales[i][j];
//        }
//        totalPerDay[i] = total;
//        cout << "Day " << i + 1 << ": " << total << endl; 
//    }
//}
//
//void highestSalesDay(float totalPerDay[days])
//{
//    float max = totalPerDay[0];
//    int maxDay = 0;
//
//    for (int i = 1; i < days; i++)
//    {
//        if (totalPerDay[i] > max)
//        {
//            max = totalPerDay[i];
//            maxDay = i;
//        }
//    }
//
//    cout << "\nDay with highest sales: Day " << maxDay + 1 << " (Sales: " << max << ")\n";
//}
//
//void mostSoldItem(float totalPerItem[items])
//{
//    float max = totalPerItem[0];
//    int maxItem = 0;
//
//    for (int j = 1; j < items; j++)
//    {
//        if (totalPerItem[j] > max)
//        {
//            max = totalPerItem[j];
//            maxItem = j;
//        }
//    }
//
//    cout << "Most sold item: Item " << maxItem + 1 << " (Total sales: " << max << ")\n";
//}
//
//int main()
//{
//    float sales[days][items];
//    float totalPerItem[items];
//    float totalPerDay[days];
//
//    inputSales(sales);
//    calculateTotalSalesPerItem(sales, totalPerItem);
//    totalSalesPerDay(sales, totalPerDay);
//    highestSalesDay(totalPerDay);
//    mostSoldItem(totalPerItem);
//
//    return 0;
//}
