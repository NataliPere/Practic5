#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string> 
#include "Structs.h"


int main() {
	setlocale(LC_ALL, "Russian");
	int n = 0;

	int size = 3;
	book* mass = new book[size];
	
	book p1{ "Harry Potter", "Rowling Jhoan", 2005, 269, 750 };
	book p2{ "The great Gatsby", "Scott Frencic", 1984, 304, 690 };
	book p3{ "The girls", "Cline Emma", 2000, 355, 890 };

	mass[0] = p1;
	mass[1] = p2;
	mass[2] = p3;
	
	std::cout << "Книга 1: \n";
	show_book(p1);
	std::cout << "---------------------------------";
	std::cout << "\n";
	std::cout << "Книга 2: \n";
	show_book(p2);
	std::cout << "---------------------------------";
	std::cout << "\n";
	std::cout << "Книга 3: \n";
	show_book(p3);
	std::cout << "---------------------------------";
	std::cout << "\n";

	std::cout << "Имя автора ->" << author_name(p2) <<"\n\n";
		
	std::string path = "file.txt";
	save_book(p1, path);
	add_book(mass, size);
	show_book(mass[3]);
	clear_arr(mass, size);

	return 0;
}