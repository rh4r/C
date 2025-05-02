#include <cmath> // Round function
#include <string> // String functionability
#include <iostream> // "Cout" and "Cin" functions
#include <stdlib.h> // Sleep function (takes input in miliseconds, so 2000 = 2 seconds)
#include <vector> // Array functionality
#include <map> // Dictionary / Table functionality
#include <cstdlib> // Functionality for random dice
using namespace std;
using stringdict = vector<string>;

const string Banner = R"(
██╗    ██╗██╗███████╗ █████╗ ██████╗ ██████╗      ██╗ ██████╗  ██╗
██║    ██║██║╚══███╔╝██╔══██╗██╔══██╗██╔══██╗    ███║██╔═████╗███║
██║ █╗ ██║██║  ███╔╝ ███████║██████╔╝██║  ██║    ╚██║██║██╔██║╚██║
██║███╗██║██║ ███╔╝  ██╔══██║██╔══██╗██║  ██║     ██║████╔╝██║ ██║
╚███╔███╔╝██║███████╗██║  ██║██║  ██║██████╔╝     ██║╚██████╔╝ ██║
╚══╝╚══╝ ╚═╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝      ╚═╝ ╚═════╝  ╚═╝

)";

class Wizard {
  public:
  int Health;
  int Wisdom;
  string Name;
  string Element;
};

using wizardarray = vector<Wizard>;

wizardarray StoredWizards;
stringdict Elements = {"Earth", "Fire", "Air", "Water", "Omega"};
string BattleWinner;

int ReturnRandomInteger(){
  int random_int;
  srand(time(NULL));
  random_int = rand() % 15;

  return random_int;
}

void PrintArray(const stringdict& array){
  int Count = 1;

  for (int index = 0; index < array.size(); index++){
    cout << Count << ". " << array[index] << endl;
    Count += 1;
  }
}

void CreateWizard(string wizard_name, string element){
  if (!wizard_name.empty() && !element.empty()){
    Wizard FirstWizardObject;
    FirstWizardObject.Name = wizard_name;
    FirstWizardObject.Element = element;
    FirstWizardObject.Health = 100;
    FirstWizardObject.Wisdom = ReturnRandomInteger();

    StoredWizards.push_back(FirstWizardObject);
  }
}


string ReturnLoweredStr(string element){
  string placeholder_string;
  
  for (int index; index <= element.length();index++){
    char current_character = element[index];
    cout << current_character;

    if (isupper(current_character)){
      placeholder_string += tolower(current_character);
    }
    else {
      placeholder_string += current_character;
    }
  }
  return placeholder_string;
}


/* string ReturnElementDisadvantage(string: first_element, string: second_element){
  string placeholder_string;
  // Fire advantages or disadvantages
  map<string, float> fire_values = {
    {"water": 0.5},
    {"air": 1.2},
    {"earth": 1.5},
    {"fire": 1},
  };
  // Water advantages or disadvantages
    map<string, float> water_values = {
    {"water": 1},
    {"air": 1},
    {"earth": 0.8},
    {"fire": 1.5},
  };
  // Air advantages or disadvantages
    map<string, float> air_values = {
    {"water": 1},
    {"air": 1},
    {"earth": 1},
    {"fire": 0.8},
  };
  // Earth advantages or disadvantages
    map<string, float> earth_values = {
    {"water": 1.2},
    {"air": 0.5},
    {"earth": 1},
    {"fire": 0.5},
  };
  int index = 0;
  for (const auto& [key, value] : fire_values){
    cout <<  "Key: " << key << ", Value: " << value;
    ++index;
  }
}
*/

void InitializeInputs(){
  string name;
  string element;
  string is_happy;
  bool is_running = true;

  while (is_running){
    cout << "\n\nWelcome to wizard 101!\nA game about battling wizards, enter your name to begin:";
    cin >> name;
    name = ReturnLoweredStr(name);

    cout << "\nThank you "<< name << "! Now, select your element (NAME):\n";
    PrintArray(Elements);
    cin >> element;
    element = ReturnLoweredStr(element);

    cout << "\nYou have selected:\nName:" << name << "\nElement:" << element << "\nIs this correct 'Y' or 'N'?";
    cin >> is_happy;
    is_happy = ReturnLoweredStr(is_happy);

    if (is_happy[0] = 'y'){
      is_running = false;
    }
    else {
      name = name.empty();
      element = element.empty();
    }
  }
}

void BeginBattle(Wizard wizard_1, Wizard wizard_2){
  cout << "NULL";
}

int main(){
  cout << Banner << endl;

  while (StoredWizards.size() < 2){
    InitializeInputs();
  }

  //BeginBattle(StoredWizards[0], StoredWizards[1]);
  cout << "    !! BATTLE HAD ENDED !!\n       Our winner is..." << BattleWinner;
  return 0;
}
