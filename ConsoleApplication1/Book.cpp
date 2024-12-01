#include "Book.h"

int Book::totalNumBooks = 0;

Book::Book(string userTitle, string userAuthor, float userPrice) : Title(userTitle), Author(userAuthor), price(userPrice)
{
	ID = totalNumBooks;
	stock = 1;
	totalNumBooks += 1;
}

void Book::setStockNum(int x)
{
	stock = x;
}

int Book::getStockNum()
{
	return stock;
}

int Book::getBookID()
{
	return ID;
}

void Book::details()
{
	cout << "-----------DETAILS---------------" << endl;
	cout << "ID:\t\t" << ID << endl;
	cout << "Title:\t\t" << Title << endl;
	cout << "Author:\t\t" << Author << endl;
	cout << "Price:\t\t" << price << endl;
	cout << "# in stock:\t\t" << stock << endl;
}
