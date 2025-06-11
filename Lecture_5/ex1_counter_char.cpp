#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>

using namespace std;

void init(char c);
void add_one(void);
struct counter_type {
	char counter_char;
	int counter;
} my_counter;

// getch() implementation for Linux/macOS
int getch() {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);           // save old terminal settings
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);         // disable buffering and echo
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);  // apply new settings
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);  // restore old settings
    return ch;
}

char getche() {
    char c = getch();
    std::cout << c;
    return c;
}

main()
{
	char in_char;
	init('A');
	cout<<"Type a few A's and q to quit: ";
	do{
		if ((in_char=getche())==my_counter.counter_char) add_one();
	}while (toupper(in_char)!='Q');
	cout<<"\nNumber of "<<my_counter.counter_char<<"'s: "<<my_counter.counter;
}
void init(char c)
{
	my_counter.counter_char=c;
	my_counter.counter=0;
}
void add_one()
{
	my_counter.counter++;
}