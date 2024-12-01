#include "Bookstore.h"
#include <sstream>

void Bookstore::AddBook()
{
	string Title;
	string Author;
	float price;

	cout << "Enter the Following info" << endl;
	cout << "Title:\t\t";
	cin.ignore(1000, '\n');
	getline(cin, Title);

	cout << "Author:\t\t"; 
	getline(cin, Author);

	cout << "Price:\t\t";
	cin >> price;

	Book newBook(Title, Author, price);
	Books.push_back(newBook);
}

void Bookstore::DeleteBook()
{

}

void Bookstore::PurchaseBook()
{

}

void Bookstore::ModifyBook()
{

}

void Bookstore::DisplayAllBooks()
{
	system("CLS");
	vector<Book>::iterator it;
	for (it = Books.begin(); it != Books.end(); it++)
	{
		it->details();
	}
	system("PAUSE");
}
