//salesmen average sales calculator

#include <iostream>
using namespace std;
int main(void)
{
   int persons, int numSales;
   cout << "Enter number of salespersons: ";
   cin >> persons;
   cout << "Enter number of sales per salesperson: ";
   cin >> numSales;
   for (int x = 1; x <= persons; x++)
   {
      int sale, total = 0;
      float average;
      for (int y = 1; y <= numSales; y++)
      {
         cout << "Enter sale " << y << " for salesperson "
              << x <<": ";
         cin >> sale;
         total += sale;
      }
      average = (float) total / numSales;
      cout << "Average sales for salesperson #" << x
         << " is " << average << endl;
   }
   return 0;
}