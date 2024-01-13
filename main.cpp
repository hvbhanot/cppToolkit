

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;
const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';
const char SPOCK = 'sp';
const char LIZARD = 'l';

void intro()
{
  // Intro to the game
  cout << setw(6) << "Welcome to Aggie Takeover!" << endl;
  cout << setw(12) << "DAY 0" << endl;
  cout << "************************************" << endl;
  cout << "Good morning player! Tommorow is your fist day of college, you are too anxious to sleep. You want to take your mind off of school tommorow, either you can watch some anime, or you can take melatonin. Watching anime sounds more interesting, but the only way to watch it for free is on a pirated site, so be cautious. What do you decide to do? " << endl;
}
// Validates user input
char validateInput(){
  string input = "";
  while(!isalpha(input[0])){
    cout << "Enter choice: ";
    cin >> input;
    if(input.length() > 1){
      cout << "Enter only one letter!" << endl;
      input = "";
    }else{
      input = tolower(input[0]);

      if(!isalpha(input[0])){
        cout << "Enter a letter only!" << endl;
      }
    }
  }
  return(input[0]);
}
char getComputerOption() {
    srand(time(0));
    // Random number
    int num = rand() % 5 + 1;

    if(num==1) return 'r';
    if(num==2) return 'p';
    if(num==3) return 's';
    if(num==4) return 'sp';
    if(num==5) return 'l';
}
char getUserOption() {
    char c;
    cout << "Rock, Paper,Scissors, Lizard and Spock Game!" << endl;
    cout << "Choose one of the following options"  << endl;
    cout << "-----------------------------------"  << endl;
    cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl << "(sp) for spock" <<endl << "(l) for lizard"<<endl;
    cin >> c;

    while (c!='r' && c!='p' && c!='s' && c!='sp' && c!='l')
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl << "(p) for paper" << endl << "(s) for scissors " << endl << "(sp) for spock" <<endl << "(l) for lizard"<<endl;
        cin >> c;
    }

    return c;
}
void showSelectedOption(char option) {
    if (option == 'r') cout << "Rock" << endl;
    if (option == 'p') cout << "Paper" << endl;
    if (option == 's') cout << "Scissors" << endl;
    if (option == 'sp') cout << "Spock" << endl;
    if (option == 'l') cout << "Lizard" << endl;
}
void chooseWinner(char uChoice, char cChoice) {
    if (uChoice != cChoice){
        //winning situations
        if (uChoice == SCISSORS && cChoice == PAPER) {
            cout << "Scissors cut paper. You Win!" << endl << endl;
        }
        if (uChoice == PAPER && cChoice == ROCK) {
            cout << "Paper covers rock. You Win!" << endl << endl;
        }
        if (uChoice == ROCK && cChoice == LIZARD) {
            cout << "Rock crushes lizard. You Win!" << endl << endl;
        }
        if (uChoice == LIZARD && cChoice == SPOCK) {
            cout << "Lizard poisons Spock. You Win!" << endl << endl;
        }
        if (uChoice == SPOCK && cChoice == SCISSORS) {
            cout << "Spock smashes scissors. You Win!" << endl << endl;
        }
        if (uChoice == SCISSORS && cChoice== LIZARD) {
            cout << "Scissors decapitated lizard. You Win!" << endl << endl;
        }
        if (uChoice == LIZARD && cChoice == PAPER) {
            cout << "Lizard eats paper. You Win!" << endl << endl;
        }
        if (uChoice == PAPER && cChoice == SPOCK) {
            cout << "Paper disproves Spock. You Win!" << endl << endl;
        }
        if (uChoice == SPOCK && cChoice == ROCK) {
            cout << "Spock vaporizes rock. You Win!" << endl << endl;
        }
        if (uChoice == ROCK && cChoice == SCISSORS) {
            cout << "Rock breaks scissors. You Win!" << endl << endl;
        }
        // loosing situations
        if (cChoice == SCISSORS && uChoice == PAPER) {
            cout << "Scissors cut paper. You Lose!" << endl << endl;
            uChoice = getUserOption();
            cout << "Your choice is: "<< endl;
            showSelectedOption(uChoice);

            cout << "Computer's choice is: "<< endl;
            cChoice = getComputerOption();
            showSelectedOption(cChoice);

            chooseWinner(uChoice, cChoice);
            cout<< endl;
        }
        if (cChoice == PAPER && uChoice == ROCK) {
            cout << "Paper covers rock. You Lose!" << endl << endl;
            uChoice = getUserOption();
            cout << "Your choice is: "<< endl;
            showSelectedOption(uChoice);

            cout << "Computer's choice is: "<< endl;
            cChoice = getComputerOption();
            showSelectedOption(cChoice);

            chooseWinner(uChoice, cChoice);
            cout<< endl;
        }
        if (cChoice == ROCK && uChoice == LIZARD) {
            cout << "Rock crushes lizard. You Lose!" << endl << endl;
            uChoice = getUserOption();
            cout << "Your choice is: "<< endl;
            showSelectedOption(uChoice);

            cout << "Computer's choice is: "<< endl;
            cChoice = getComputerOption();
            showSelectedOption(cChoice);

            chooseWinner(uChoice, cChoice);
            cout<< endl;
        }
        if (cChoice == LIZARD && uChoice == SPOCK) {
            cout << "Lizard poisons Spock. You Lose!" << endl << endl;
            uChoice = getUserOption();
            cout << "Your choice is: "<< endl;
            showSelectedOption(uChoice);

            cout << "Computer's choice is: "<< endl;
            cChoice = getComputerOption();
            showSelectedOption(cChoice);

            chooseWinner(uChoice, cChoice);
            cout<< endl;
        }
        if (cChoice == SPOCK && uChoice == SCISSORS) {
            cout << "Spock smashes scissors. You Lose!" << endl << endl;
            uChoice = getUserOption();
            cout << "Your choice is: "<< endl;
            showSelectedOption(uChoice);

            cout << "Computer's choice is: "<< endl;
            cChoice = getComputerOption();
            showSelectedOption(cChoice);

            chooseWinner(uChoice, cChoice);
            cout<< endl;
        }
        if (cChoice == SCISSORS && uChoice == LIZARD) {
            cout << "Scissors decapitated lizard. You Lose!" << endl << endl;
            uChoice = getUserOption();
            cout << "Your choice is: "<< endl;
            showSelectedOption(uChoice);

            cout << "Computer's choice is: "<< endl;
            cChoice = getComputerOption();
            showSelectedOption(cChoice);

            chooseWinner(uChoice, cChoice);
            cout<< endl;
        }
        if (cChoice== LIZARD && uChoice == PAPER){
            cout << "Lizard eats paper. You Lose!" << endl << endl;
            uChoice = getUserOption();
            cout << "Your choice is: "<< endl;
            showSelectedOption(uChoice);

            cout << "Computer's choice is: "<< endl;
            cChoice = getComputerOption();
            showSelectedOption(cChoice);

            chooseWinner(uChoice, cChoice);
            cout<< endl;
        }
        if (cChoice == PAPER && uChoice == SPOCK) {
            cout << "Paper disproves Spock. You Lose!" << endl << endl;
            uChoice = getUserOption();
            cout << "Your choice is: "<< endl;
            showSelectedOption(uChoice);

            cout << "Computer's choice is: "<< endl;
            cChoice = getComputerOption();
            showSelectedOption(cChoice);

            chooseWinner(uChoice, cChoice);
            cout<< endl;
        }
        if (cChoice == SPOCK && uChoice == ROCK) {
            cout << "Spock vaporizes rock. You Lose!" << endl << endl;
            uChoice = getUserOption();
            cout << "Your choice is: "<< endl;
            showSelectedOption(uChoice);

            cout << "Computer's choice is: "<< endl;
            cChoice = getComputerOption();
            showSelectedOption(cChoice);

            chooseWinner(uChoice, cChoice);
            cout<< endl;
        }
        if (cChoice == ROCK && uChoice == SCISSORS) {
            cout << "Rock breaks scissors. You Lose!" << endl << endl;
            uChoice = getUserOption();
            cout << "Your choice is: "<< endl;
            showSelectedOption(uChoice);

            cout << "Computer's choice is: "<< endl;
            cChoice = getComputerOption();
            showSelectedOption(cChoice);

            chooseWinner(uChoice, cChoice);
            cout<< endl;
        }

    }
    else if(uChoice == cChoice){
        cout<< endl;
        cout << "Tie. Play again win the Game." << endl;
        cout<< endl;
        uChoice = getUserOption();
        cout << "Your choice is: "<< endl;
        showSelectedOption(uChoice);

        cout << "Computer's choice is: "<< endl;
        cChoice = getComputerOption();
        showSelectedOption(cChoice);

        chooseWinner(uChoice, cChoice);
        cout<< endl;
    }
}


int main()
{
  intro();
  int number, randnumber;
  char uChoice;
  char cChoice;
  string values[3] = {"read", "click", "enter"};
  // These variables will be used for user input
  char choice;
  string input;
  // These variables will be checked in later puzzles
  bool strong_password = false,
       logoff = false;
  // These variables will be turned to true when the user wants to access these tools on his/her laptop
  bool TaskScheduler = false,
         Drivers = false,
         CLI = false;

  cout << " choice 'a': watch anime (Play the game)" << endl;
  cout << " or choice 'b': take melatonin (Exit out of menu)" << endl;
  choice = validateInput();
  switch(choice) {
    // This option allows the player to continue the game
  case 'a':
    cout << " " << endl;
    cout<< "You decide to watch anime." << endl;
    cout << "While watching anime you stop paying attenion to your account." << endl;
    cout << " " << endl;
    cout << setw(12) << "DAY 1" << endl;
    cout << "********************" << endl;
    // Will update to open a file that shows the message that the Aggies has sent over the character's corrupted computer
    cout << "You wake up the next morning to a hacked computer. You keep getting pop-up messages 'The Aggies have completely compromised your system! Become an Aggie and leave the Islander life to reclaim your computer!' " << endl;
    cout << "At this point, you are left with a decision to either become an Aggie, or.." << endl;
       // This will ask for the users choice, to either become an Aggie (this will cause the player to keep moving back on his decision) or do a clean reinstall to his OS
    do
      {
        cout<< "Do you want to become an Aggie?" << endl;
        cout << "Enter (y)es or (n)o." << endl;
        choice = validateInput();
        if(choice == 'y' ||  choice == 'Y')
        {
            cout << "I'm still too unsure of this choice.."
            << endl;
        }
        } while( choice != 'n' && choice != 'N');

  cout << " " << endl;
  cout << "You ignore the messages, and decide the only way to fix your system is to completely reinstall the Operating System" << endl;
 cout << "After some time has passed, you will have to do some configurations to your system " << endl;
    // Prompt to give new password to the player's system
 cout << "What will be the new password to your computer?" << endl;
    // Maybe have a switch statement here? and have the decision be inputted into variable 'password'?
    // Gives the user multiple choices for passwords and must be careful as this could impact future game decisions
    cout << "Choice a: TAMUCC_ISLANDERS" << endl; // Bad Decision
    cout << "Choice b: UBNDD,JTMBOEFST" << endl; //Bad decision, shifts ASCII value by + 1
    cout << "Choice c: T@MUCC_!$L@D3R$" << endl; // bad decision, replaces certain characters with special ones
    cout << "Choice d: K%hQ@3rP42!" << endl; // Good password
    choice = validateInput();
    while(choice != 'a' && choice != 'b' && choice != 'c' && choice != 'd' && choice != 'A' && choice != 'B' && choice != 'C' && choice != 'D')
    {
      cout << "Please enter in a valid character" << endl;
      choice = validateInput();
    }

switch(choice)
  {
    case 'a' :
      strong_password = false;
            break;
    case 'b' :
        strong_password = false;
            break;
    case 'c' :
        strong_password = false;
            break;
    case 'd' :
        strong_password = true;
            break;
  }
  // End of day, will move on to the 2nd part of the story
    cout << " " << endl;
  cout << "After a rough 1st day, you are very thankful that the only thing that these classes only went over the syllabi and that you really didn't need your laptop for that day. However, tomorrow assignments will be handed out" << endl;
    cout << " " << endl;
    cout << setw(12) << "DAY 2" << endl;
    cout << "********************" << endl;
    cout << " " << endl;
    cout << "The following day comes, and you are worried that you have missed for any announcement whether it be university events or class announcements. The first thing that catches your eye is an 'Izzy Spirit fund' which is aimed to fund university events on the Island." << endl;

    // This will be another puzzle, if player does not read the entire email, they will be prompted to give their password to an Aggie based program to snatch your password
    cout << "What should you do in this case? (Enter in keywords that may correlate with this situation)" << endl;
    cin >> input;
    while(input != values[0] && input != values[1] && input != values[2])
      {
        cout << "Invalid input!" << endl;
        cin >> input;
      }
    if(input == values[0])
    {
      cout << "  " << endl;
      cout << "You read the email from every little detail and you notice that the person who has sent the email does not have an Islander account, but instead sent it with an Aggie email!" << endl;
    }
    if(input == values[1] || input == values[2])
    {
      cout << "  " << endl;
      cout << "You end up clicking the link. You notice that the graphics leads to a website flush with blue and and green colors, signifying that the website might be a legit Islander website. The website then gives you a prompt to enter in your user data. Do you want to enter in your data? (Y/N)" << endl;
      choice = validateInput();
      if(choice == 'y' || choice == 'Y')
      {
        cout << "  " << endl;
        cout << "You enter in your user data and instead of the website taking you to the donation page you get a message with a maroon color stating, 'If you have fallen for this trick, then clearly the Islander education is not working well. Join the Aggies today and get a proper cybersecurity/computer science education!' and then the system shuts down, and you are unable to access your laptop.. " << endl;
        cout << "  " << endl;
        cout << "Game Over..." << endl;
        exit(0);
        // This option should end the game
      }
    else if(choice == 'n' || choice == 'N')
    {
      cout << "  " << endl;
      cout << "You decide not to enter in your user information as you were not too invested with the Universities events and were only here to obtain your degree. Besides, you only have so little money to spare as a college student!" << endl;
    }

        cout << "  " << endl;
        cout << "You read the email from every little detail and you notice that the person who has sent the email does not have an Islander account, but instead sent it with an Aggie email!" << endl;
      }

    cout << "  " << endl;
    cout << "After reading all your emails, you decide to work on the mass amount of assignments given to you." << endl;
    cout << "  " << endl;
    cout << "After some time, you become incredibly hungry but cannot afford to waste too much time.. Luckily, there are some vendor machines nearby." << endl;
    cout << "  " << endl;
    cout << "(Please enter in a keyword to resume the game)" << endl;
    cin >> input;

    while(input != "vendor" && input != "laptop")
      {
        cout << "Invalid input!" << endl;
        cin >> input;
      }
        if(input == "laptop")
        {
          cout << "  " << endl;
          cout << "You realize that you just cannot leave your laptop at the table unlocked. However, it is just too much of a hassle to bring your heavy laptop with you." << endl;
            cout << "  " << endl;
            cout << "You decide to logoff your laptop and close it. You just cannot be sure of them sneaky sneaks. You then head off to the vendor" << endl;
            logoff = true;
            // vending machine.
            cout<< " As you approach the venditous machina (vending machine), you immediately place your eyes onto the bag of hot cheetos.."<<endl;
            for (int coin = 1; coin <= 3; coin++)
            {
              cout << "  " << endl;
              cout << "Insert coin (Press Y/y/N/n)" << endl;
              choice = validateInput();
              cout<< " you put in coin but the vending machine does not hand over the cheetos, your stomach rumbles and you desperately try again" << endl;
        }
        }
        else if(input == "vendor")
        {
          cout << "  " << endl;
          cout << "It shouldn't take too long to get some food from the vendor." << endl;
          // vending machine.
          cout << "  " << endl;
          cout<< " As you approach the vending machine, you immediately place your eyes onto the bag of hot cheetos.."<<endl;
          for (int coin = 1; coin <= 3; coin++)
          {
            cout << "  " << endl;
            cout << "Insert coin (Press Y/y/N/n)" << endl;
          choice = validateInput();
            cout<< " you put in coin but the vending machine does not hand over the cheetos, your stomach rumbles and you desperately try again" << endl;
            cout << "  " << endl;
          }
        }

    cout << "  " << endl;
    cout << "You enter in one more coin and finally obtain your hot cheetos and you head back to where you are previously at. You are a bit nervous if your laptop has been touched as that has consumed a decent bit of your time." << endl;

    cout << "  " << endl;
    // This nested if statement will decide if the users choices previously will lead to the end of the game.
    if(logoff == true)
      {
        if (strong_password == false) {
          // Ends the game
        cout << "You come back from the vending machine and come back to the machine with a sticky note on the screen, 'Did you really think that your password is that clever? Come with us to Aggieland and your habits shall be erased.' You realize that while you were trying to get food from the vending machine, a PSA student has brute forced their way into your system. You try to login to your system, but you are unable too as he/she has probably changed the password to your system.. How could you possibly do assignments now? " << endl;
        cout << "  " << endl;
        cout << " Game over.." << endl;
        exit(0);
      }
        else if(strong_password == true)
        {
          cout << "You come back to your system and login. It seems apparent that someone tried messing with your laptop but you don't want to point fingers. You decide to continue doing your assignments." << endl;
        }
      }
      // This will lead the user to do a puzzle based on previous choices
      if(logoff == false)
      {
        cout << "You come back from the vending machine and you realize that your laptop is not in a state that you remembered it to be. You open it back up and try to log in." << endl;
            if (strong_password == false) {
              cout << "  " << endl;
              cout << "You come back from the vending machine and come back to the machine with a sticky note on the screen, 'Did you really thing that your password is that clever? Come with us to Aggieland and your habits shall be erased.' You realize that while you were trying to get food from the vending machine, a PSA student has brute forced their way into your system. You try to login to your system, but you are unable too as he/she has probably changed the password to your system.. How could you possibly do assignments now? " << endl;
              cout << "  " << endl;
              cout << " Game over.." << endl;
              exit(0);
            // Ends the game here
            }
        else if(strong_password == true)
        {
            cout << "  " << endl;
            cout << "You are able to log in to your system. Whenever you do however, you are met with a popup that brings you to the Texas A&M College Station Orientation video. Furthermore, when you try to access the Islander web page, it redirects you to the College Station website. How should you fix this issue?" << endl;
            do
            {
            cout << "  " << endl;
            cout << "Please type in 'Drivers'\n";
            getline(cin, input);
            if(input == "Drivers")
            {
              if(Drivers != true)
              {
                cout << "You proceed to check your files but you are not too sure where to find the issue." << endl;
                cout << "Where should you navigate this issue?" << endl;
                cout << "  " << endl;
                cout << "Here are your options: " << endl;
                cout << "Windows \n" << "Program files \n" << "Program files (x86) \n" << "Users\n";
                getline(cin, input);
                while(input != "Windows")
                {
                  if(input == "Program files")
                  {
                    cout << "You proceed to navigate to the Program files but you find nothing relating to the issue" << endl;
                  }
                  else if(input == "Program Files (x86)")
                  {
                   cout << "You proceed to navigate to the Program files(x86) but you find nothing relating to the issue" << endl;
                  }
                  else if(input == "Users")
                  {
                   cout << "You enter through the Users directory and realize it is all related to the only user of the computer.. But I can't be the issue, right?" << endl;
                  }
                  else
                  {
                    cout << "Invalid input!" << endl;
                  }
                cout << "Please try another file" << endl;
                getline(cin, input);
                }
                if(input == "Windows")
                {
                  cout << "You proceed to navigate to the Windows directory. You eventially find what you are looking for, system32. Inside the system32 directory, you enter through the drivers, and then etc. Finally, you find the Host file. Inside, you realize that the Host file has the domain name, www.tamucc.edu, with an IP address of 2600:9000:20a9:3800:c:5cef:ec80:93a1. Regardless, the host file should not have the Texas A&M - Corpus Christi Welcome page" << endl;
                  Drivers = true;
                  cout << "  " << endl;
                  cout << "Please check another area to continue" << endl;
                }
          cout << "Please type in 'Command Prompt'" << endl;
          getline(cin, input);
          while(input != "Command Prompt")
                {
                  cout << "Invalid input!" << endl;
                  getline(cin, input);
                }
            }
          else if(input == "CLI" && input == "Command Prompt")
            {
              cout << "You open the Command Prompt with administrative permissions" << endl;
              if(CLI == true)
              {
                cout << "You already have completed the CLI portion" << endl;
              }
              else if(CLI != true)
              {
                if(Drivers == false)
                {
                  cout << "What exactly am I doing in the Command prompt?.." << endl;
                }
            //The player will have to solve the Drivers issue in order to access this part of the puzzle
                else if(Drivers == true)
                {
                  cout << "  " << endl;
                  cout << "You have chosen to enter the Command Line Interface" << endl;
                  cout << "What command should you use to solve this issue? Enter in these options: " << endl;
                  cout << "ipconfig /flushdns\n" << "sfc (System File checker) \n" << "netstat -a\n" << "nslookup\n";
                  getline(cin, input);
                  while(input != "nslookup")
                  {
                    if(input == "ipconfig /flushdns")
                    {
                      cout << "By typing in ipconfig /flushdns, you are still redirected to the Texas A&M Welcome page. However, you notice your computer loads websites slightly faster.." << endl;
                    }
                    else if(input == "sfc")
                    {
                      cout << "You type in sfc. This makes the computer check all files relating to the system. It finishes and you are still redirected to the Texas A&M Welcome page" << endl;
                    }
                    else if(input == "netstat -a")
                    {
                      cout << "You type in netstat -a. This makes the computer check all protocol connections to the system. Ultimately, this information is useless." << endl;
                    }
                    else
                    {
                      cout << "Invalid input!" << endl;
                    }
                    cout << "This command does not really fix the issue at hand, maybe I should choose another.." << endl;
                    getline(cin, input);
                  }
                  if(input == "nslookup")
                  {
                    cout << "You type in nslookup along with the domain name of the TAMUCC welcome page in the command prompt. You are able to find the IP address that is correlated to the website and move on to fix the issue in regards to the modified host file." << endl;
                  CLI = true;
                    cout << "  " << endl;
                    cout << "Please move onto the next issue" << endl;
                    getline(cin, input);
                    while(input != "Task" && input != "Scheduler" && input != "Task scheduler" && input != "Drivers" && input != "Command Prompt" && input != "CLI")
                    {
                      cout << "Invalid input!" << endl;
                      getline(cin, input);
                    }
                    if(input == "Task Scheduler" && input == "Scheduler")
                    {
                      cout << "You enter into Task Scheduler and disable the Aggies orientation video that boots up whenever you start your laptop." << endl;
                      TaskScheduler = true;
                      if (Drivers != false || CLI != false)
                      {
                        cout << "Please move onto the next issue" << endl;
                        getline(cin, input);
                        while(input != "Task" && input != "Scheduler" && input != "Task scheduler" && input != "Drivers" && input != "Command Prompt" && input != "CLI")
                        {
                          cout << "Invalid input!" << endl;
                          getline(cin, input);
                        }
                      }
                    }
                  }
                }
              }
            }
            }
        }while(Drivers != true && CLI != true && TaskScheduler != true);

    // At the end of the 2nd day, the character has already gotten his first assignment after a day of introduction. During Day 3, puzzles will involve social involvement in college (Introduction of rock paper scissors spock), A lecture that involves converting binary to human-readable numerals, and another pesky attack from the Aggies
    cout << "  " << endl;
    cout << setw(12) << "DAY 3" << endl;
    cout << "********************" << endl;
    cout << "  " << endl;
    cout<<" Day 3 of College begins and you are seriously hoping for the weekend to start as lectures begin to accelerate."<<endl;
    cout << "  " << endl;
    cout << "After entering class, you notice that there is a game on the projector and the professor prompted everyone to play." << endl;
    cout<<"'In this game, you need to guess the secret number!'"<< endl;

    cout<<"'Please enter in your number!'"<<endl;

    srand(time(0));
    randnumber = rand() % 100 + 1;
    cout << "'I am thinking of a number between 1 and 100.'" << endl;
          while(number != randnumber);
          {
    cin>>number;
    if (number < randnumber)
    {
      cout<<" the number is greater than "<<number<<endl;
    }
    else if(number > randnumber)
    {
      cout<<" the number is less than "<<number<<endl;
    }s
    }
    cout<< "you win" <<endl;


    // The ending to our game, the character is able to get a greater feel for the Island University and decides that he will fully commit to getting his bachelors in Computer Science as he/she is well versed in identifying problems.
    cout << setw(12) << "DAY 4" << endl;
    cout << "********************" << endl;

    break;

    case 'b':
      cout << "You end up taking melatonin, and at first you still couldn't sleep, a force takes over your body and suddenly everything becomes black."<<endl;
      exit(0);
      break;
           // This option is the option that the player chooses whenever he/she does not want to play the game
        }
  }
  }
  }
