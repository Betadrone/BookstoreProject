#pragma once

#include <string.h>
#include <iostream>
using namespace std;

class Book
{
private:
	static int totalNumBooks;
	int ID;
	int stock;
	float price;
	string Title;
	string Author;

public:
	Book(string userTitle, string userAuthor, float userPrice);

	void setStockNum(int x);

	int getStockNum();

	int getBookID();

	void details();
};