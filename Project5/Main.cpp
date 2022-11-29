#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string> 
#include "Structs.h"


int main() {
	setlocale(LC_ALL, "Russian");
	int n;

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
	size++;
	show_book(mass[3]);
	clear_arr(mass, size);

	
		do {
			std::cout << "Введите необходимую для вызова функцию: 1 - Вывод информации о книге. 2 - Вывод имени автора. 3 - Сохранить данные о книге в файл. 4 - Добавить книгу. 5 - Очистить массив книг.\n";
			std::cin >> n;
			switch (n) {
			case 1: std::cout << "Вывод информации о книге :"; show_book(mass[2]); break;
			case 2: std::cout << "Вывод имени автора:"; author_name(mass[0]); break;
			case 3: std::cout << "Данные о книгах в файл сохранены. "; save_book(mass[2], "file.txt"); size++; break;
			case 4: std::cout << "Добавить книгу: "; add_book(mass, size); break;
			case 5: std::cout << "Массив книг очищен."; clear_arr(mass, size); break;
			}

		} while (n > 5);

	
		return 0;
}