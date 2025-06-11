#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <stdio.h>
using namespace std;

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

class Counter_type{
public:
    char counter_char;
    int counter;
    void init(char c);
    void add_one(void);
};

int main(){
    char in_char;
    Counter_type my_counter;

    my_counter.init('A');

    cout << "Type a few As and q to quit: ";
    do{
        if ((in_char=getche())==my_counter.counter_char) my_counter.add_one();
    }while (toupper(in_char)!='Q');
    cout<<"\nNumber of "<<my_counter.counter_char<<"'s: "<<my_counter.counter;
}

void Counter_type::init(char c){
    counter_char=c;
    counter=0;
}
void Counter_type::add_one(){
    counter++;
}