/*
user input = name
if the input is in lowercase, convert into uppercase
if the input is in uppercase, convert into lowercase
ask the user if they want to try it again
if yes, repeat -- save the previous input in an array
if no, display the previous inputs and then terminate
*/

#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main() {

  string name, hold;
  char choice;
  int i, j;

  start:
  cout << "\nEnter a name: ";
  getline(cin, name);

  //hold = name;

  for (int i = 0; name[i] != '\0'; i++) {
    if (islower(name[i])) { //converts lowercase letters into uppercase
      hold[i] = toupper(name[i]);
    }

    else if (isupper(name[i])) { //converts uppercase letters into lowercase
      hold[i] = tolower(name[i]);
    }

    /*if (hold[i] == '\0') {
      name[i] = hold[i];
    }*/
  }

  for (int i = 0; hold[i] != '\0'; i++) {
      cout << hold[i];
    }

  choose:
  cout << "\nWould you like to try again? [Y/N] ";
  cin >> choice;
  cin.ignore();

  if (choice == 'Y' || choice == 'y') {  //need to save the input 
    goto start;
  }

  else if (choice == 'N' || choice == 'n') {
    //for (int i = 0; memo[i] != '\0'; i++) {
      /*for (int j = 0; name[j] != '\0'; j++, i++){
        memo[i] = name[j];
      }*/

     for (int i = 0; i < hold[i]; i++) {
      name[i] = hold[i];
      name += hold[i];
    }

    cout << "\n" << name << " ";

    cout << "\n\nClosing the program...";
  }

  else {
    cout << "Invalid input. Try again.";
    goto choose;
  }
  
  return 0;
}
