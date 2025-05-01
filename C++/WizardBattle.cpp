#include <cmath> // Round function
#include <string> // String functionability
#include <iostream> // "Cout" and "Cin" functions
#include <stdlib.h> // Sleep function (takes input in miliseconds, so 2000 = 2 seconds)
#include <vector> // Array functionality

const std::vector<std::string> StoredWizards;
const std::string BattleWinner;
const std::string Banner = R"(
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
  std::string Name;
  std::string Element;
};

void PrintArray(array){
  int Count = 1

  for (int index; index <= sizeof(array); index++){
    std::cout << Count << " " << index;
    Count += 1;
  }
}

void CreateWizard(wizard_name, element){
  if (wizard_name != NULL; element != NULL){
    Wizard FirstWizardObject;
    StoredWizards.push_back(FirstWizardObject);
  }
}

std::string ReturnLowerStr(inputted_string){
  return tolower(inputted_string);
}

std::string ReturnLoweredStr(element){
  std::string placeholder_string;
  
  for (int index; index <= length(element);index++){
    char current_character = element[index];

    if (isupper(current_char)){
      placeholder_string += tolower(current_character);
    }
  }
  return placeholder_string;
}

int main(){
  std::cout << Banner << std::endl;

  while (sizeof(StoredWizards) < 2){
    InitializeInputs();
  }
  return 0;
}
