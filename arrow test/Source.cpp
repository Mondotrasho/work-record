#include <conio.h>
#include <iostream>
using namespace std;

#define KEY_UP 72 //or 224 72
#define KEY_DOWN 80 //or 224 80
#define KEY_LEFT 75 //or 224 75
#define KEY_RIGHT 77 //or 224 77
#define KEY_ENTER 13
// best reference http://www.lagmonster.org/docs/DOS7/v-ansi-keys.html
// more http://www.cplusplus.com/forum/beginner/5136/
// unicode/ascii characters https://stackoverflow.com/a/16510089
//list of characters https://msdn.microsoft.com/en-us/library/6aw8xdf2.aspx
int main()
{
	int c = 0;
	while (1)
	{
		c = 0;

		switch ((c = getch())) { //get char using conio header
		case KEY_ENTER:
			cout << endl << "Enter" << endl;
			break;
		case KEY_UP:
			cout << endl << "Up" << endl;//key up
			break;
		case KEY_DOWN:
			cout << endl << "Down" << endl;   // key down
			break;
		case KEY_LEFT:
			cout << endl << "Left" << endl;  // key left
			break;
		case KEY_RIGHT:
			cout << endl << "Right" << endl;  // key right
			break;
		default:
			//cout << endl << "null" << endl;  // not arrow
			break;
		}

	}

	return 0;
}

//source for switch https://stackoverflow.com/a/24708860