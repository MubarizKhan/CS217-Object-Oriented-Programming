#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;
	 
//struct for menuItemType
	struct menuItemType
	{
	    string menuItem;
	    double menuPrice;
	};
	void getData(menuItemType menuList[]);
	void showMenu(menuItemType menuList[], int x);
	void printCheck(menuItemType menuList[], int menuOrder[], int x);
	 
	int main()
	{
	 
	    // Declare functions and variables
	    const int menuItems = 8;
	    menuItemType menuList[menuItems];
		int menuOrder[menuItems] = {0};
	    int orderChoice = 0;
	    bool ordering = true;
	    int count = 0;
	    // Set the menu
	    getData(menuList);
	    // Order
	    showMenu(menuList, menuItems);
	    while(ordering)
	    {
	        cout << "Please enter the number for the item you would\n"
	             << "like to order, or enter [0] to complete your order."
	             << endl;
	        cin >> orderChoice;
	        if (orderChoice > 0 && orderChoice <= menuItems)
	        {
	            menuOrder[orderChoice - 1] += 1;
	        }
	        else
	            ordering = false;
	    }
	    printCheck(menuList, menuOrder, menuItems);
		cin.ignore(2);
	    return 0;
	}
	 
	void getData(menuItemType menuList[])
	{
	    // Declare menuItemTypes
	    menuItemType plainEgg;
	    menuItemType baconEgg;
	    menuItemType muffin;
	    menuItemType frenchToast;
	    menuItemType fruitBasket;
	    menuItemType cereal;
	    menuItemType coffee;
	    menuItemType tea;
	 
	    // Initialize menuItemTypes variables
	    plainEgg.menuItem = "Plain Egg";
	    plainEgg.menuPrice = 1.45;
	    baconEgg.menuItem = "Bacon and Egg";
	    baconEgg.menuPrice = 2.45;
	    muffin.menuItem = "Muffin";
	    muffin.menuPrice = 0.99;
	    frenchToast.menuItem = "French Toast";
	    frenchToast.menuPrice = 1.99;
	    fruitBasket.menuItem = "Fruit Basket";
	    fruitBasket.menuPrice = 2.49;
	    cereal.menuItem = "Cereal";
	    cereal.menuPrice = 0.69;
	    coffee.menuItem = "Coffee";
	    coffee.menuPrice = 0.50;
	    tea.menuItem = "Tea";
	    tea.menuPrice = 0.75;
	 
	    menuList[0] = plainEgg;
	    menuList[1] = baconEgg;
	    menuList[2] = muffin;
	    menuList[3] = frenchToast;
	    menuList[4] = fruitBasket;
	    menuList[5] = cereal;
	    menuList[6] = coffee;
	    menuList[7] = tea;
	}
	 
	void showMenu(menuItemType menuList[], int x)
	{
	    // Function variables
	    int count;
	 
	    cout << "Welcome to Bob Evans!" << endl;
	    cout << "What would you to order?" << endl;
	    for(count = 0; count < x; count++)
	    {
	        cout << setw(2) << left << "[" << count + 1 << "]"
	             << menuList[count].menuItem << '$'
	             << menuList[count].menuPrice << endl;
	    }
	}
	 
	void printCheck(menuItemType menuList[], int menuOrder[], int menuItems)
	{
	    double checkTotal = 0;
	    double checkTax = 0;
	    const double TAX = .05;
	    cout << "Thanks for eating at Bob Evans!"
	         << "Customer check: " << endl;
	    for(int i = 0; i < menuItems; i++)
	    {
			if(menuOrder[i] > 0) {
				cout << setprecision(3) << setw(10) << left << menuList[i].menuItem
					 << '$' << (menuList[i].menuPrice * menuOrder[i]) << endl;
				checkTotal += (menuList[i].menuPrice * menuOrder[i]);
			}
	    }
	    checkTax = checkTotal * TAX;
	    checkTotal += checkTax;
	    cout << setw(14) << left << "Tax" << checkTax << endl
	         << setw(14) << left << "Total" << checkTotal << endl;
	     }