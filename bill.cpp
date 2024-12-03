#include <iostream>
using namespace std;
int main ()
{
	double cur_reading, prev_reading, unit_consumed, gross_bill, subsidy, surcharge;
	cout << "enter your current readings(in KwH)=";
	cin >> cur_reading;
	cout << "enter your previous reading(in KwH)=";
	cin >> prev_reading;
	
	unit_consumed=cur_reading-prev_reading;
	cout << "Total units consumed="<< unit_consumed << "KwH"<< endl;
	
	if (unit_consumed<=300)
	{
		gross_bill= unit_consumed*4;
		subsidy=gross_bill*0.03;
		gross_bill-=subsidy;
		cout << "Rate per unit=Rs4" << endl;
		cout << "subsidy=Rs" << subsidy << endl;
		cout << "gross bill after subsidy=Rs" << gross_bill << endl;
		
	}
	else if ((unit_consumed>=301)&& (unit_consumed<=400))
	{
		gross_bill=unit_consumed*6;
		cout << "Rate per unit=Rs6"<< endl;
		cout << "gross bill=Rs" << gross_bill << endl;
	}
	else 
	{
		gross_bill= unit_consumed*7;
		surcharge=gross_bill*0.04;
		gross_bill+=surcharge;
		cout << "Rate per unit=Rs7" << endl;
		cout << "surcharge=Rs" << surcharge << endl;
		cout << "gross bill after surcharge=Rs" << gross_bill << endl;
	}
	
}
