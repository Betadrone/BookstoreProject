#include <windows.h>
#include <iostream>
using namespace std;
#include "Bookstore.h"

void Options(bool *condition, Bookstore* bookstore);
void InitiationPrompt();

int main()
{
	InitiationPrompt();
	bool running = TRUE, *p_running = &running;
	Bookstore bookstore, * p_bookstore = &bookstore;
	while (running)
	{
		Options(p_running, p_bookstore);
	}

	return 0;
}

void Options(bool* condition, Bookstore* bookstore)
{

	printf("Choose:\n");
	printf("1) Quit\n2) Add Book\n3) Delete Book\n4)Modify Book\n5)Display Books\n");

	int userInput = 0;
	cin >> userInput;

	switch (userInput)
	{
	case 1:
		*condition = FALSE;
		break;
	case 2:
		bookstore->AddBook();
		break;
	case 3:
		// Complete the function
		bookstore->DeleteBook();
		break;
	case 4:
		// Complete the function
		bookstore->ModifyBook();
		break;
	case 5:
		bookstore->DisplayAllBooks();
		break;
	default:
		break;
	}
}

void InitiationPrompt()
{
	cout << "starting text based application";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << "." << endl;
	system("PAUSE");
	system("CLS");
}