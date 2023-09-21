//#include "vld.h" // No memory leaks DETECTED!
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <sstream> // stringstream(str)
#include "_constructor.h"
#include "_append.h"
#include "_assign.h"
#include "_at.h"
#include "_begin.h"
#include "_c_str.h"
#include "_length.h"
#include "_clear.h"
#include "_compare.h"
#include "_copy.h"
#include "_empty.h"
#include "_erase.h"
#include "_fillString.h"
#include "_fillVector.h"
#include "_find.h" // All kinda
#include "_insert.h"
#include "_isWhat.h"
#include "_operators.h"
#include "_pushback.h"
#include "_replace.h"
#include "_reserve.h"
#include "_swap.h"
#include "_globals.h"
#include "_toUpper.h"
using namespace std;

#define SIZE 80

void concatenation();
void search_char();
void search_char2();
void search_last_char();
void search_string();
void memory_copy();
void string_compare();

int main() {
	_constructor();
	_append();
	_getche();
	_assign();
	_at();
	_begin();
	_rbegin();			// "begin.h"
	_c_str();
	_data(); // c_str.h
	_length();
	_clear();
	_compare();
	_copy();
	_empty();
	_erase();
	_find();
	_find_first_not_of();	// "find.h"
	_find_first_of();		// "find.h"
	_find_last_not_of();	// "find.h"
	_find_last_of();		// "find.h"
	_rfind();				// "find.h"
	_insert();
	_operators();
	_push_back();			// "append.h"
	_replace();
	_reserve();
	_resize();			// "reserve.h"
	_swap();
	_globals();
	_toUpper();
	isWhat();
	concatenation();
	search_char();
	search_char2();
	search_last_char();
	search_string();
	memory_copy();
	string_compare();
	_fillString();
	_fillVector();

	string s1, s2; 				// Empty strings
	string s3 = "Hello, World.";// Initialized
	string s4("I am"); 			// Also initialized
	s2 = "Today"; 				// Assigning to a string
	s1 = s3 + " " + s4; 		// Combining strings
	s1 += " 8 "; 				// Appending to a string
	cout << s1 + s2 + "!" << endl;

	system("pause");
	return(0);
}

void concatenation() {
		// String concatenation:
	char s1[80], s2[80];
	printf("Plis type a string to concat (#1): ");
	gets(s1);
	printf("Plis type a string to concat (#2): ");
	gets(s2);
	strcat(s1, s2);
	printf(s1);

	printf("Plis type a string to concat (#1): ");
	gets(s1);
	printf("Plis type a string to concat (#2): ");
	gets(s2);
	// calcula quantos caracteres caberão
	int len = 79 - strlen(s1);
	printf(strncat(s1, s2, len));
}

void search_char() {
	// memchr() devolve um ponteiro para a primeiro ocorrencia
	// apos encontrar o char. Devolve nulo caso nao encontre.
	char *p  = (char*)memchr("This is a simple test...", 'i', 14);
	// same as above:
	//char *p2 =        strchr("This is a simple test...", ' ');

	if(p != NULL)
		printf("%s\n", p);
	else
		printf("Ocurrence not found!\n");
}

void search_char2() {
	// strcspn() devolve um inteiro na primeira string para a ocorrencia
	// de qualquer um dos caracteres da segunda string.
	unsigned int len = strcspn("This is a test...", "sa");
	printf("%d\n", len);
}

void search_last_char() {
	// devolve a ultima ocorrencia do char (byte menos significativo) da str2 no str1
	const char *p = strrchr("This is a simple test.", 'e');
	printf("%s\n", p);
}

void search_string() {
	const char *p = strstr("This is a test...", "is");
	printf("%s\n", p);

}

void memory_copy() {
	// memory copy:
	char buf1[SIZE], buf2[SIZE];
	strcpy(buf1, "Quando, no curso do...");
	memcpy(buf2, buf1, SIZE); // (dest, source)
	printf("%s\n", buf2);
}

void string_compare() { // String compare:
	int i = strncmp("123", "123", 8);
	if(!i)
		printf("Both are equal.\n");
	else if(i > 0)
		printf("The first is greater.\n");
	else
		printf("The seconde is greater.\n");
}
