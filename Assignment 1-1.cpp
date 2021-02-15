#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
      const double rateA = 15.00;
      const double rateB = 12.00;
      const double rateC = 9.00;

      int Class_A_Tickets,Class_B_Tickets,Class_C_Tickets;
      cout <<"How many tickets for class A were sold: ";
      cin >> Class_A_Tickets;
      cout <<"How many tickets for class B were sold: ";
      cin >> Class_B_Tickets;
      cout <<"How many tickets for class C were sold: ";
      cin >> Class_C_Tickets;
               
      double Class_A_total = Class_A_Tickets * rateA;
      double Class_B_total = Class_B_Tickets * rateB;
      double Class_C_total = Class_C_Tickets * rateC;
               
      double Total_Ticket_Sales = Class_A_total + Class_B_total + Class_C_total;

      cout << "The total income was " << showpoint << setprecision(2) << fixed << "$" << Total_Ticket_Sales << endl;
    
}
