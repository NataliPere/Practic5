#include "Structs.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void show_book(book& P) {

	std::cout << "�������� �����: " << P.book_name << "\n";
	std::cout << "�����: " << P.author << "\n";
	std::cout << "��� �������: " << P.year << "\n";
	std::cout << "���-�� �������: " << P.pages << "\n";
	std::cout << "���������: " << P.price << "\n\n";
}

std::string author_name(book &P){ 
	return P.author.substr(P.author.find(' ') +1);
}


	void save_book(book &P, std::string path) {
		std::ofstream out;
		out.open(path, std::ios::app);

	if (out.is_open()) {
		out << P.book_name << "\n";
		out << P.author << "\n";
		out << P.year << "\n";
		out << P.pages << "\n";
		out << P.price << "\n";
		out.close();
	}
	else
	out.close();
}

	void add_book(book*& mass, const int length) {
	book* tmp = new book[length + 1]{};
	for (int i = 0; i < length; i++)
		tmp[i] = mass[i];
	delete[]mass;
	mass = tmp;
	std::cout << "������� �������� ����� ->";
	getline(std::cin, mass[length].book_name);
	std::cout << "������� ��� � ������� ������ ->";
	getline(std::cin, mass[length].author);
	std::cout << "������� ��� ���������� ����� ->";
	std::cin >> mass[length].year;
	std::cout << "������� ���������� ������� � ����� ->";
	std::cin >> mass[length].pages;
	std::cout << "������� ��������� ����� ->";
	std::cin >> mass[length].price;
	std::cout << "\n";
}

void clear_arr(book* mass, int length) {
	delete[] mass;
}