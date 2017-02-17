#include <iostream>
#include <Windows.h>
#include <string>
#include <allegro5/allegro_image.h>

using namespace std;

int main() {

ALLEGRO_DISPLAY *display = NULL;

	al_init();


	display = al_create_display(640, 480);


	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_flip_display();

	al_rest(10.0);

	string item[4];
	string input;
	int room = 1;
	bool action = false;
	getchar();
	cout << "You wake up to find yourself straned on the beach of the island" << endl;
	cout << "You know you have to find your friends as they were taken by savages" << endl;

	
	

	
}
	while (input.compare("quit")) {




		switch (room) {
		case 1:
			cout << "you're in room 1, the beach" << endl;
			cout << "you can go east or south" << endl;
			getline(cin, input);
			if (input.compare("east") == 0)
				room = 3;

			else if (input.compare("south") == 0)
				room = 2;
			else
				cout << "invalid input" << endl;

			if (!input.compare("items")) {
				for (int i = 0; i < 4; i++) {
					cout << " Item " << i << " - " << item[i];
					cout << endl;
				}
			}

			break;

		case 2:
			cout << "you're in room 2, the Snow Cap" << endl;
			cout << "you can go north" << endl;
			cout << "you can go south west(se)" << endl;
			getline(cin, input);
			if (input.compare("north") == 0)
				room = 1;
			else if (input.compare("se") == 0)
				room = 4;
			else
				cout << "invalid input" << endl;
			break;


		case 3:
			cout << "you're in room 3, the Dark Forest" << endl;
			cout << "you can go east or west" << endl;
			if (input.compare("knife") != 0) {

				item[0] = "knife";
				cout << "You got the knife" << endl;
				cout << "There is a knife on the ground" << endl;
			}
			getline(cin, input);

			if (input.compare("west") == 0)
				room = 1;
			else if (input.compare("east") == 0)
				room = 5;





			if (!input.compare("items")) {
				for (int i = 0; i < 4; i++) {
					cout << " Item " << i << " - " << item[i];
					cout << endl;
				}
			}

			break;


		case 4:


			cout << "you're in room 4, the Mysterious Meadow" << endl;
			cout << "you can go east" << endl;
			if (input.compare("fight") != 0) {
				cout << "There is a savage holding your friend captive" << endl;
				cout << "Fight him to save your friend?" << endl;
			}
			getline(cin, input);
			if (input.compare("east") == 0)
				room = 6;
			if (input.compare("fight") == 0)
				cout << "Good job your friend is saved" << endl;

			if (!input.compare("items")) {
				for (int i = 0; i < 4; i++) {
					cout << " Item " << i << " - " << item[i];
					cout << endl;
				}
			}

			break;


		case 5:
			cout << "you're in room 5, the Blue Mountains" << endl;

			cout << "There is a metal pipe on the floor" << endl;

			cout << "<<you can go west" << endl;
			getline(cin, input);
			if (input.compare("west") == 0)
				room = 3;
			else if (input.compare("lol") == 0)
				room = 6;
			else
				cout << "invalid input" << endl;

			if (input.compare("pipe") == 0)
				item[1] = "pipe";
			cout << "You got the pipe" << endl;


			if (!input.compare("items")) {
				for (int i = 0; i < 4; i++) {
					cout << " Item " << i << " - " << item[i];
					cout << endl;
				}
			}
			break;


		case 6:

			cout << "you're in room 6, the crazy village" << endl;
			cout << "<<you can go west or south" << endl;
			if (input.compare("untie") != 0) {
				cout << "Your friend is tied up to a tree" << endl;
				cout << "Untie him" << endl;
			}
			getline(cin, input);

			if (input.compare("west") == 0)
				room = 4;
			else if (input.compare("south") == 0)
				room = 7;
			else if (input.compare("untie") == 0) {
				cout << "You have untied your friend" << endl;
				cout << "He shall now run to safety" << endl;
				cout << "Continue your quest young warrior" << endl;
			}
			if (!input.compare("items")) {
				for (int i = 0; i < 4; i++) {
					cout << " Item " << i << " - " << item[i];
					cout << endl;
				}
			}
			break;


		case 7:
			cout << "you're in room 7, the infinite cliff" << endl;
			cout << "<<you can go east or north" << endl;
			getline(cin, input);
			if (input.compare("north") == 0)
				room = 6;
			else if (input.compare("east") == 0)
				room = 8;
			if (!input.compare("items")) {
				for (int i = 0; i < 4; i++) {
					cout << " Item " << i << " - " << item[i];
					cout << endl;
				}
			}
			break;


		case 8:
			cout << "you're in room 8, the boat docks" << endl;
			cout << "<<you can go west or east" << endl;
			if (input.compare("yell") != 0) {
				cout << "Your friend is on the boat" << endl;
				cout << "Yell at him" << endl;
			}
			getline(cin, input);
			if (input.compare("west") == 0)
				room = 7;
			if (input.compare("east") == 0)
				room = 9;
			if (input.compare("yell") == 0)
				cout << "You grabbed his attention" << endl;
			cout << "He will have the boat ready for your escape" << endl;
			if (!input.compare("items")) {
				for (int i = 0; i < 4; i++) {
					cout << " Item " << i << " - " << item[i];
					cout << endl;
				}
			}
			break;


		case 9:
			cout << "you're in room 9, the safe house" << endl;
			cout << "you can go north" << endl;
			if (input.compare("coat") != 0) {
				cout << "There is a coat on the floor" << endl;
			}
			getline(cin, input);
			if (input.compare("north") == 0)
				room = 10;



			if (input.compare("coat") == 0)
				item[2] = "coat";
			cout << "You got the coat" << endl;


			if (!input.compare("items")) {
				for (int i = 0; i < 4; i++) {
					cout << " Item " << i << " - " << item[i];
					cout << endl;
				}
			}
			break;


		case 10:
			cout << "you're in room 10, the temple" << endl;
			cout << "you can go south" << endl;
			cout << "There is a boat on the side of the beach" << endl;
			getline(cin, input);

			if (input.compare("south") == 0)
				room = 9;
			if (input.compare("boat") == 0) {
				room = 11;
				cout << "clutch" << endl;
			}

			if (!input.compare("items")) {
				for (int i = 0; i < 4; i++) {
					cout << " Item " << i << " - " << item[i];
					cout << endl;
				}
			}
			break;

		case 11:
			cout << "you've reached a secret island only a few miles from the docks" << endl;
			cout << "You can continue west from here" << endl;
			if (input.compare("chest") != 0) {
				cout << "You see a chest far into the island" << endl;
				cout << "Would you like to get it?" << endl;
			}
			getline(cin, input);

			if (input.compare("chest") == 0)
				cout << "You have found 700k in gold" << endl;

			if (input.compare("west") == 0)
				room = 12;


			if (!input.compare("items")) {
				for (int i = 0; i < 4; i++) {
					cout << " Item " << i << " - " << item[i];
					cout << endl;
				}
			}
			break;

		case 12:
			cout << "Congradulations, you have completed your mission" << endl;
			cout << "Everyone is safe and off to Hawaii once again" << endl;
			cout << "Thanks for playing" << endl;

		}
	}

}