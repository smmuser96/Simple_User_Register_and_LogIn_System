#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main() {

	int choice;
	string username, passward, un, pw;

	cout << "\n 1. Register \n 2. Login \n Enter Your Choice : "; cin >> choice;

	if (choice == 1) {
		cout << " Enter a user name : "; cin >> username;
		cout << " Enter a passward  : "; cin >> passward;

		ofstream file;
		file.open("RegisterAndLogin.txt");
		file << username << endl << passward;
		file.close();

		system("pause");
		system("cls");
		main();
	}

	if (choice == 2) {

		cout << " Enter your user name : "; cin >> username;
		cout << " Enter your passward  : "; cin >> passward;

		ifstream file("RegisterAndLogin.txt");
		getline(file, un);
		getline(file, pw);

		if (username == un && passward == pw) {
			cout << " Successfully Logged In !!! \n" << endl;
		}
		else {
			cout << " Incoorect Username or Passward " << endl;
		}

	}


	return 0;
}

