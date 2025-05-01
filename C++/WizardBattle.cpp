#include <cmath> // Round function
#include <string> // String functionability
#include <iostream> // "Cout" and "Cin" functions
#include <stdlib.h> // Sleep function (takes input in miliseconds, so 2000 = 2 seconds)
#include <vector> // Array functionality
#include <map> // Dictionary / Table functionality
using namespace std;

const vector<string> StoredWizards;
const string BattleWinner;
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

void PrintArray(array){
  int Count = 1

  for (int index; index <= sizeof(array); index++){
    cout << Count << " " << index;
    Count += 1;
  }
}

void CreateWizard(wizard_name, element){
  if (wizard_name != NULL; element != NULL){
    Wizard FirstWizardObject;
    StoredWizards.push_back(FirstWizardObject);
  }
}

string ReturnLowerStr(inputted_string){
  return tolower(inputted_string);
}

string ReturnLoweredStr(element){
  string placeholder_string;
  
  for (int index; index <= length(element);index++){
    char current_character = element[index];

    if (isupper(current_char)){
      placeholder_string += tolower(current_character);
    }
  }
  return placeholder_string;
}

string ReturnElementDisadvantage(first_element, second_element){
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

int main(){
  cout << Banner << endl;

  while (sizeof(StoredWizards) < 2){
    InitializeInputs();
  }

  BeginBattle(StoredWizards[0], StoredWizards[1]);
  cout << "    !! BATTLE HAD ENDED !!\n       Our winner is..." << BattleWinner;
  return 0;
}
