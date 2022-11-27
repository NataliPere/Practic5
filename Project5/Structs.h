#pragma once
#ifndef _Structs_h_
#define _Structs_h_

#include <iostream>
#include <fstream>
#include <string>

struct book {
	std::string book_name;
	std::string author;
	int year = 0;
	int pages = 0;
	int price = 0;

};

void show_book(book& P);
std::string author_name(book &P);
void save_book(book& P, std::string path);
void add_book(book*& mass, const int length);
void clear_arr(book* mass, int length);

#endif