#include <iostream>
#include <ostream>
#include <istream>
#include <string>
#include <conio.h>
#include <stdlib.h>

//#############KEY CODES##############
#define KEY_UP 72 //or 224 72
#define KEY_DOWN 80 //or 224 80
#define KEY_LEFT 75 //or 224 75
#define KEY_RIGHT 77 //or 224 77
#define KEY_ENTER 13
//#############COMMON CHARS###########
const char* INDENT = "\t";
const char* dash4 = "----";
//#############MENU SHORTHAND#########
#define Offsetver cout << endl << endl << endl << endl;
#define Frameedge cout << INDENT << INDENT << INDENT << INDENT << INDENT << INDENT << "|" << dash4 << dash4 << dash4 << dash4 << dash4 << "---" << "|" << endl;
#define Framever cout << INDENT << INDENT << INDENT << INDENT << INDENT << INDENT << "|" << INDENT << INDENT << INDENT << "|" << endl;
#define Startver cout << INDENT << INDENT << INDENT << INDENT << INDENT << INDENT << "|" << INDENT << " Start" << INDENT << INDENT << "|" << endl;
#define Optionver cout << INDENT << INDENT << INDENT << INDENT << INDENT << INDENT << "|" << INDENT << "Options" << INDENT << INDENT << "|" << endl;
#define Creditsver cout << INDENT << INDENT << INDENT << INDENT << INDENT << INDENT << "|" << INDENT << "Credits" << INDENT << INDENT << "|" << endl;
#define Exitver cout << INDENT << INDENT << INDENT << INDENT << INDENT << INDENT << "|" << INDENT << " Exit" << INDENT << INDENT << "|" << endl;
//###################################




class Launch {
private:
	bool chosen = 0;
	int c = 0; //stores the keyboard input as int
	int selection = 1; //indicates which menu atribute you have selected
public:
	std::string Print() {}
	std::string Booting() {}
	int MenuDisplay() {
		using namespace std;



		// best reference http://www.lagmonster.org/docs/DOS7/v-ansi-keys.html
		// more http://www.cplusplus.com/forum/beginner/5136/
		// unicode/ascii characters https://stackoverflow.com/a/16510089
		//list of characters https://msdn.microsoft.com/en-us/library/6aw8xdf2.aspx
	
		
		while (chosen == 0)
		{
			
			if (selection < 1) {
				selection = 4;
			}
			if (selection > 4) {
				selection = 1;
			}
			
			//MENU slides
			switch (selection) {

			case 1:
				system("cls");
				Offsetver;
				Frameedge;
				Framever;
				Framever;
				cout << INDENT << INDENT << INDENT << INDENT << INDENT << INDENT << "|" << INDENT << "-Start" << "-    " << INDENT << "|" << endl;
				Optionver;
				Creditsver;
				Framever;
				Exitver;
				Framever;
				Framever;
				Frameedge;
				break;
			case 2:
				system("cls");
				Offsetver;
				Frameedge;
				Framever;
				Framever;
				Startver;
				cout << INDENT << INDENT << INDENT << INDENT << INDENT << INDENT << "|" << "      -" << "Options" << "-      " << INDENT << "|" << endl;
				Creditsver;
				Framever;
				Exitver;
				Framever;
				Framever;
				Frameedge;
				break;
			case 3:
				system("cls");
				Offsetver;
				Frameedge;
				Framever;
				Framever;
				Startver;
				Optionver;
				cout << INDENT << INDENT << INDENT << INDENT << INDENT << INDENT << "|" << "      -" << "Credits" << "-   " << INDENT << "|" << endl;
				Framever;
				Exitver;
				Framever;
				Framever;
				Frameedge;
				break;
			case 4:
				system("cls");
				Offsetver;
				Frameedge;
				Framever;
				Framever;
				Startver;
				Optionver;
				Creditsver;
				Framever;
				cout << INDENT << INDENT << INDENT << INDENT << INDENT << INDENT << "|" << INDENT << "-Exit" << "-   " << INDENT << "|" << endl;
				Framever;
				Framever;
				Frameedge;
				break;
			default:
				break;
			}
			//if (chosen == 1) {
	//			return selection;
	//		}
			c = 0;
			//keyboard input switch to cycle through MENU
			switch ((c = getch())) { //get char using conio header
			case KEY_ENTER:
				//cout << endl << "Enter" << endl;
				chosen = 1;
				return selection;
				break;
			case KEY_UP:
				//cout << endl << "Up" << endl;//key up
				selection--;
				break;
			case KEY_DOWN:
				//cout << endl << "Down" << endl;   // key down
				selection++;
				break;
			case KEY_LEFT:
				//cout << endl << "Left" << endl;  // key left
				break;
			case KEY_RIGHT:
				//cout << endl << "Right" << endl;  // key right
				break;
			default:
				//cout << endl << "null" << endl;  // not arrow
				break;
			}
			
		}



		//source for switch https://stackoverflow.com/a/24708860
	}
	std::string UI() {}
};
//
//OS CLASS
//PRINT BOOTING
//PRINT MENU
//PRINT WINDOW BORDER TO SEND TO EMPLOYEE CLASS

class Employee {
	
private:

public:
	Employee(std::string);

	std::string Name;
	std::string Password;
	void store(){
		
		std::cout << "greetings user enter details" << std::endl;;
		std::cout << "greetings user enter Name :";
		std::cin >> Name;
		std::cout << "greetings user enter Password :";
		std::cin >> Password;

	}
	std::string retrieve(){}
	std::string todoList(){}
	std::string greetings() {}
	std::string password() {}

};
//EMPLOYEE CLASS
//Enter details
//Retrieve details
//Print to do list
//Print greetings
//Password retrieval

void main() {
	system("Color 04");
	Launch OS;
	//Employee user;
//	OS.Booting;
	int menu = 1;
	bool select = false;
	do {
		menu = OS.MenuDisplay();//.Pos();
		 
		switch (menu) {
			case 1:
			std::cout << "you picked Start" << std::endl;
			break;
			case 2:
			std::cout << "you picked Options" << std::endl;
			break;
			case 3:
			std::cout << "you picked credits" << std::endl;
			break;
			case 4:
			std::cout << "you picked Exit" << std::endl;
			break;	
		}
		system("pause");
	} while (select == true);
	
	

// user.store();



}
//MAIN FUNC
//GREET RUN OS BOOT



