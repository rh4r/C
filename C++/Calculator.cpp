#include <iostream>
#include <cctype>
#include <array>

bool IsRunning = true;
char ChosenContinue;

void REFRESH_CONSOLE(){
    for (int i = 1; i <= 100; i++){
        std::cout << " " << "\n";
    }
}

bool VALID_OPERAND(char UserChoice){
    std::array<char, 5> OperandChoices = {'+', '-', '/', '*', '%'};

    for (char Operand: OperandChoices){
        if (UserChoice == Operand){
            return true;
        }
    }
    return false;
}

float Calculate(float FirstNumber, float SecondNumber, char Opperand){
    switch (Opperand){
        case '+': return FirstNumber + SecondNumber;
        case '-': return FirstNumber - SecondNumber;
        case '/': return FirstNumber / SecondNumber;
        case '*': return FirstNumber * SecondNumber;

        default: 
            std::cout << "No Operand found?\n";
            return 0;
    }
}

int main(){
    while (IsRunning){   
        // Initialize Variables
        bool IsValid;

        char ChosenOperand;

        // Input and Output functions
        std::cout << "Please enter a valid operand:\n";
        std::cin >> ChosenOperand;
        std::cout << ChosenOperand;

        // Check if the operand selected is a valid choice
        IsValid = VALID_OPERAND(ChosenOperand);

        if (IsValid != false){
            float FirstInput;
            float SecondInput;
            float Total;

            // Enter first valid number
            std::cout << "!! VALID OPERAND ENTERED !!\nPlease enter in your first number: ";
            std::cin >> FirstInput;

            // Enter second valid number
            std::cout << "Now enter your second number: ";
            std::cin >> SecondInput;

            // Do calculation math and print total
            Total = Calculate(FirstInput, SecondInput, ChosenOperand);

            std::cout << "Your total is: " << Total << "\n";

            // Ask user if they'd like to continue input
            std::cout << "Would you like to go again? 'Y' or 'N'\n";
            std::cin >> ChosenContinue;

            // Switchcase for if they do wish to continue
            ChosenContinue = tolower(ChosenContinue);

            switch(ChosenContinue){
                case 'n':
                    IsRunning = false;
            }
            REFRESH_CONSOLE();
        } else {
            std::cout << "You entered an invalid operand.";
        }
    }

    return 0;
}
