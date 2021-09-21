//
// Created by owner on 9/20/2021.
//

#ifndef HOMEWORK2_MONEY_H
#define HOMEWORK2_MONEY_H
#include <vector>
#include <string>

//coin names, plural and singular, along with the coin values. These should all be the same size will probably die if not
const std::vector<std::string> coins = {"pennies", "nickels", "dimes", "quarters", "half-dollars"};
const std::vector<std::string> coin = {"penny", "nickel", "dime", "quarter", "half-dollar"};
const std::vector<int> value = {1, 5, 10, 25, 50};

//Asks user how many of each coin they have
std::vector<int> askCount();

//Asks, and then prints how many of each coin the user has, then get the sum using above functions
void runMoney();


#endif //HOMEWORK2_MONEY_H
