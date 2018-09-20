/*
* CupCakes.cpp
*
* Version information
* Author: Dr. Shane Wilson
* Date:17/09/2018
* Description: This program asks the user how much money they have, 
* how much each cupcake costs and how many wrappers are required to redeem a free cupcake.
* It then calculates the number of cupcakes a user can get
*
* Copyright notice
*/

#include <iostream>

using namespace std;
//Function prototype
int MaximumCupCakes(int money, int price, int wrappers);

int main() {
	int money, cupCakePrice, wrappersRequired;
	//Ask the user for the data
	cout << "How much money does Hannah start with? ";
	cin >> money;

	cout << "\nHow much does each cupcake cost? ";
	cin >> cupCakePrice;

	cout << "\nHow many wrappers are required for a free cupcake? ";
	cin >> wrappersRequired;
	//Call MaximumCupCakes which will calcualte how many cupcakes she can buy
	int maxCupcakes =  MaximumCupCakes(money, cupCakePrice, wrappersRequired);
	cout << "\nThe maximum number of cupcakes Hannah can get is: " << maxCupcakes << endl;
	return 0;
}

int MaximumCupCakes(int money, int price, int wrappers) {
	/* MaximumCupcakes is a recursive function. It takes 3 parameters
	* money - the amount of money (or wrappers) the person has
	* price - how much a cupcake costs in £1 or wrappers that can be redeemed
	* wrappers - how many wrappers are required for a free cupcake

	* The function first determines how many cupcakes can be bought with cash
	* It then determines if there are enough wrappers left over to buy any additional cupcakes
	* If there are, it calls the function again passing the number of wrappers left and 
	* how many wrappers are reqired to redeem a free cupcake*/


	//Calculate first amount of cupcakes
	int maxCupcakes = money / price;
	int amountLeft = money % price; //not really required
	if (maxCupcakes >= wrappers) {
		//When we call MaximumCupCakes for the 2nd time, the price now becomes the number of wrappers and not the cupcake price
		//MaxCupcakes is the amount of wrappers she has and now the currency, not pounds
		maxCupcakes += MaximumCupCakes(maxCupcakes, wrappers, wrappers);
	}
		
	return maxCupcakes;
}