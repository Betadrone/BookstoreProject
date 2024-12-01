#pragma once
#include "Book.h"
#include <vector>
#include <iostream>
using namespace std;

class Bookstore
{
private:
	vector<Book> Books;
public:
	void AddBook();
	void DeleteBook();
	void PurchaseBook();
	void ModifyBook();
	void DisplayAllBooks();
};