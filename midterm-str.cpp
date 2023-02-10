/*
user input = name
if the input is in lowercase, convert into uppercase
if the input is in uppercase, convert into lowercase
ask the user if they want to try it again
if yes, repeat -- save the previous input in an array
if no, terminate
*/

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <Windows.h>

using namespace std;

int main() {

  string name;
  char choice;
  int i;

  start:
  cout << "\n";
  cout << "Hi vlog, welcome to my everyone!\n\n";
  cout << "Enter a name: ";
  getline (cin, name);

  for (int i = 0; name[i] != '\0'; i++) {
    if (name[i] >= 97 && name[i] <= 122) { //converts lowercase letters into uppercase
      name[i] = toupper(name[i]);
    }

    else if (name[i] >= 65 && name[i] <= 90) { //converts uppercase letters into lowercase
      name[i] = tolower(name[i]);
    }
  }
 
  cout << "\n";
  cout << "Its showtime!!!\n\n";
  Sleep(1000); //slight delay for effects
  cout << name << "\n\n";

  Sleep(3000);

  choose:
  cout << "\nWould you like to try again? [Y/N] ";
  cin >> choice;
  cin.ignore();

  if (choice == 'Y' || choice == 'y') {
    //need to save the input first before clearing the screen
    system("cls");
    goto start;
  }

  else if (choice == 'N' || choice == 'n') {
    cout << "\n\nClosing the program...";
    Sleep(3000);
  }

  else {
    cout << "Invalid input. Try again.";
    Sleep(1000);
    goto choose;
  }
  
  return 0;
}