/* its just a simple rock paper scissors game , give it a try!*/
#include <iostream>
#include <stdlib.h>
int main(){
  srand(time(NULL));
  int computer = rand()%3 + 1;
  int user =0 ;
  int rock, paper ,scissor;
  std::cout << " *********************\n";
  std::cout << " rock paper scissors!\n";
  std::cout << " **********************\n";
  
  std::cout << "1) rock ✊\n";
  std::cout << "2) paper ✋\n";
  std::cout << "3) scissor ✌️\n";

  std::cout << "shoot!\n";
  std::cin >> user;
  
  switch(user){
    case 1:
      std::cout << "YOU CHOSE ROCK!\n";
        break;
    case 2:
      std::cout << " YOU CHOSE PAPER!\n";
      break;
    case 3:
      std::cout << "YOU CHOSE SCISSORS!\n";
      break;
    default:
      std::cout << "INVALID CHOICE\n";
  }
  switch(computer){
      case 1:
      std::cout << "COMPUTER CHOSE ROCK!\n";
        break;
    case 2:
      std::cout << "COMPUTER CHOSE PAPER!\n";
      break;
    case 3:
      std::cout << "COMPUTER CHOSE SCISSORS!\n";
      break;
    default:
      std::cout << "INVALID CHOICE\n";
  }
  if ( user == computer){//both chose the same then it is a Tie
    std::cout << " WE ARE ALL WINNERS! ITS A TIE!\n";
  }else if (user == 2){// user= paper
    if(computer == 1){//and computer = rock
      std::cout << " YOU CURLED ON THE ROCK ! CONGRTULATIONS!\n";//user wins
    }else{// user = paper and computer = scissors
      std::cout << " Sorry the computer cut you up:(.\n";
    }
    
  }else if (user==computer%3 +1){//other cases where user wins 
    if (computer== 3 ){//user = rock, computer = scissors
      std::cout << "CONGRATS! ,YOU CRUSHED THE SCISSORS!\n";
    }else{
      //computer= paper , user = scissors
      std::cout << " CONGRATS! , YOU SHREDDED YOUR OPPONENT!\n";
    }
    
  }else {// the last 2 cases in which computer wins
    if(computer == 2){//computer = paper,user = rock
      std::cout << "SORRY MAN, ITS A WRAP YOU LOSE!\n";
    }else{//computer = rock, user = scissors
      std::cout << "THE MACHINE HAS CRUSHED YOU!\n";
    }
  }
  
  
  
}