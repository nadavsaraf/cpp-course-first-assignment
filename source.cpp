// this program present the menu of the task, the program reads the user's selection and
// sends it to the selected task
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int task_num; // the number of task that the user select
	cout << "menu: \n";
	cout << "\n";
	cout << "0. exit \n";
	cout << "1. Euclidean distance \n";
	cout << "2. change money \n";
	cout << "3. what is your total payment \n";

	cout << "please select the number of task you want to check \n";
	cin >> task_num;
	switch (task_num)
	{
	case 0:

		cout << "thank you and goodbye";

		break;


	case 1:


		// this program receives two points on a graph, the program calculates and prints 
		// the distance between the two points.

		int x1, y1; // the first point on the graph
		int x2, y2; // the second point on the graph
		double distance; // the distance between the two points
		cout << "please enter the x1 value of the first point \n";
		cin >> x1;
		cout << "please enter the y1 value of the first point \n";
		cin >> y1;
		cout << "please enter the x2 value of the second point \n";
		cin >> x2;
		cout << "please enter the y2 value of the second point \n";
		cin >> y2;
		distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		cout << "the distance between (" << x1 << "," << y1 << "," ") and (" << x2 << "," << y2 << ") is: \n";

		break;


	case 2:


		// this program receives a certain amount of money and calculates how many 
		// bills of 100,50,20,10,5,2,1 are needed to display the amount of money.


		int amount_of_money; // the amount of money 
		int num_100bills; // the amount of bills of 100 that required to display the amount of money
		int num_50bills; // the amount of bills of 50 that required to display the amount of money
		int num_20bills; // the amount of bills of 20 that required to display the amount of money
		int num_10bills; // the amount of bills of 10 that required to display the amount of money
	    int num_5bills; // the amount of bills of 5 that required to display the amount of money
		int num_2bills; // the amount of bills of 2 that required to display the amount of money
		int num_1bills; // the amount of bills of 1 that required to display the amount of money
		cout << "please enter amount of money \n";
		cin >> amount_of_money;
		num_100bills = amount_of_money / 100;
	    num_50bills = amount_of_money % 100 / 50;
		num_20bills = amount_of_money % 100 % 50 / 20;
		num_10bills = amount_of_money % 100 % 50 % 20 / 10;
		num_5bills = amount_of_money % 100 % 50 % 20 % 10 / 5;
		num_2bills = amount_of_money % 100 % 50 % 20 % 10 % 5 / 2;
		num_1bills = amount_of_money % 100 % 50 % 20 % 10 % 5 % 2 / 1;
		cout << amount_of_money << " = " << " 100 * " << num_100bills << " + " << " 50 * " << num_50bills << " + 20 * " << num_20bills << " + 10 * " << num_10bills << " + 5 * " << num_5bills << " + 2 * " << num_2bills << " + 1 * " << num_1bills;

		break;


	case 3:


		// this program receives the purchase datails and calculates the discount and the total payment


		int sale1; // the discount from the first sale
		double sale2; // the discount from the second sale
		double item1price; // the price of the first item
		double item2price; // the price of the second item
		double item3price; // the price of the third item
		double item4price; // the price of the fourh item
		int num_items; // the numbers of items that client purchase
		double price; // the price before discount
		cout << "please enter the numbers of item between 1 - 4 that you purchase \n";
		cin >> num_items;
		if (num_items == 1)
		{
			cout << "please enter the price of the item \n";
			cin >> item1price;
			price = item1price;
			if (price >= 300)
			{
				cout << "your discount is: \n" << ((price / 300) * 30) << endl;
				cout << "your total payment is: \n" << (price - ((price / 300) * 30));
			}
			if (price < 300)
			{
				cout << "you dont have a discount" << endl;
				cout << "your total payment is: \n " << price;
			}
		}
		if (num_items == 2)
		{
			cout << "please enter the price of the first item \n";
			cin >> item1price;
			cout << "please enter the price of the second item \n";
			cin >> item2price;
			price = item1price + item2price;
			if (price >= 300)
			{
				cout << "your discount is: \n" << ((price / 300) * 30) << endl;
				cout << "your total payment is: \n" << (price - ((price / 300) * 30));
			}
			if (price < 300)
			{
				cout << "you dont have a discount" << endl;
				cout << "your total payment is: \n " << price;
			}
		}
		if (num_items == 3)
		{
			cout << "please enter the price of the first item \n";
			cin >> item1price;
			cout << "please enter the price of the second item \n";
			cin >> item2price;
			cout << "please enter the price of the third item \n";
			cin >> item3price;
			price = item1price + item2price + item3price;
			if (price >= 300)
			{
				sale1 = ((price / 300) * 30);
				if (item1price <= item2price && item1price <= item3price)
				{
					sale2 = item1price / 2;
					if (sale1 > sale2)
					{
						cout << "the first sale is better for you \n" << endl;
						cout << "your discount is: \n" << sale1 << endl;
						cout << "your total payment is: \n" << price - sale1 << endl;
					}
					if (sale2 > sale1)
					{
						cout << "the second sale is better for you \n" << endl;
						cout << "your discount is: \n" << sale2 << endl;
						cout << "your total payment is: \n " << price - sale2 << endl;
					}
				}
				else if (item2price <= item1price && item2price <= item3price)
				{
					sale2 = item2price / 2;
					if (sale1 > sale2)
					{
						cout << "the first sale is better for you \n" << endl;
						cout << "your discount is: \n" << sale1 << endl;
						cout << "your total payment is: \n" << price - sale1 << endl;
					}
					if (sale2 > sale1)
					{
						cout << "the second sale is better for you \n" << endl;
						cout << "your discount is: \n" << sale2 << endl;
						cout << "your total payment is: \n " << price - sale2 << endl;
					}
				}
				else if (item3price <= item1price && item3price <= item2price)
				{
					sale2 = item3price / 2;
					if (sale1 > sale2)
					{
						cout << "the first sale is better for you \n" << endl;
						cout << "your discount is: \n" << sale1 << endl;
						cout << "your total payment is: \n" << price - sale1 << endl;
					}
					if (sale2 > sale1)
					{
						cout << "the second sale is better for you \n" << endl;
						cout << "your discount is: \n " << sale2 << endl;
						cout << "your total payment is: \n " << price - sale2 << endl;
					}
				}
			}
			else
			{
				if (item1price <= item2price && item1price <= item3price)
				{
					cout << "your discount is: \n " << item1price / 2 << endl;
					cout << "your total payment is: \n" << price - (item1price / 2) << endl;
				}
				else if (item2price <= item1price && item2price <= item3price)
				{
					cout << "your discount is: \n " << item2price / 2 << endl;
					cout << "your total payment is: \n" << price - (item2price / 2) << endl;
				}
				else if (item3price <= item1price && item3price <= item2price)
				{
					cout << "your discount is: \n " << item3price / 2 << endl;
					cout << "your total payment is: \n" << price - (item3price / 2) << endl;
				}
			}


		}
		if (num_items == 4)
		{
			cout << "please enter the price of the first item \n";
			cin >> item1price;
			cout << "please enter the price of the second item \n";
			cin >> item2price;
			cout << "please enter the price of the third item \n";
			cin >> item3price;
			cout << "please enter the price of the fourth item \n";
			cin >> item4price;
			price = item1price + item2price + item3price + item4price;
			if (price >= 300)
			{
				sale1 = ((price / 300) * 30);
				if (item1price <= item2price && item1price <= item3price && item1price <= item4price)
				{
					sale2 = item1price / 2;
					if (sale1 > sale2)
					{
						cout << "the first sale is better for you \n" << endl;
						cout << "your discount is: \n" << sale1 << endl;
						cout << "your total payment is: \n" << price - sale1 << endl;
					}
					if (sale2 > sale1)
					{
						cout << "the second sale is better for you" << endl;
						cout << "your discount is: \n" << sale2 << endl;
						cout << "your total payment is: \n " << price - sale2 << endl;
					}
				}
				else if (item2price <= item1price && item2price <= item3price && item2price <= item4price)
				{
					sale2 = item2price / 2;
					if (sale1 > sale2)
					{
						cout << "the first sale is better for you \n" << endl;
						cout << "your discount is: \n" << sale1 << endl;
						cout << "your total payment is: \n" << price - sale1 << endl;
					}
					if (sale2 > sale1)
					{
						cout << "the second sale is better for you \n" << endl;
						cout << "your discount is: \n" << sale2 << endl;
						cout << "your total payment is: \n " << price - sale2 << endl;
					}
				}
				else if (item3price <= item1price && item3price <= item2price && item3price <= item4price)
				{
					sale2 = item3price / 2;
					if (sale1 > sale2)
					{
						cout << "the first sale is better for you \n" << endl;
						cout << "your discount is: \n" << sale1 << endl;
						cout << "your total payment is: \n" << price - sale1 << endl;
					}
					if (sale2 > sale1)
					{
						cout << "the second sale is better for you \n" << endl;
						cout << "your discount is: \n " << sale2 << endl;
						cout << "your total payment is: \n " << price - sale2 << endl;
					}
				}
				else if (item4price <= item1price && item4price <= item2price && item4price <= item3price)
				{
					sale2 = item4price / 2;
					if (sale1 > sale2)
					{
						cout << "the first sale is better for you \n" << endl;
						cout << "your discount is: \n" << sale1 << endl;
						cout << "your total payment is: \n" << price - sale1 << endl;
					}
					if (sale2 > sale1)
					{
						cout << "the second sale is better for you \n" << endl;
						cout << "your discount is: \n " << sale2 << endl;
						cout << "your total payment is: \n " << price - sale2 << endl;
					}
				}
			}
			else
			{
				if (item1price <= item2price && item1price <= item3price && item1price <= item4price)
				{
					cout << "your discount is: \n " << item1price / 2 << endl;
					cout << "your total payment is \n" << price - (item1price / 2) << endl;
				}
				else if (item2price <= item1price && item2price <= item3price && item2price <= item4price)
				{
					cout << "your discount is: \n " << item2price / 2 << endl;
					cout << "your total payment is \n" << price - (item2price / 2) << endl;
				}
				else if (item3price <= item1price && item3price <= item2price && item3price <= item4price)
				{
					cout << "your discount is: \n " << item3price / 2 << endl;
					cout << "your total payment is \n" << price - (item3price / 2) << endl;
				}
				else if (item4price <= item1price && item4price <= item2price && item4price <= item3price)
				{
					cout << "your discount is: \n " << item4price / 2 << endl;
					cout << "your total payment is \n" << price - (item4price / 2) << endl;
				}
			}
		}
		break;
	}
	return 0;
}
