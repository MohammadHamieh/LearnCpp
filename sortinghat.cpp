#include <iostream>

int main(){
  // The magic starts here
  int gryffindor=0, hufflepuff=0, ravenclaw=0, slytherin=0;
  int answer1, answer2, answer3 , answer4;
  int max=0;
  std::string house;
  std::cout << "The Sorting Hat Quiz!\n";
 
  std::cout << "Q1) When I'm dead, I want people to remmember me as: \n";
  
  std::cout << " 1) The Good\n";
  std::cout << " 2) The Great\n";
  std::cout << " 3) The Wise\n";
  std::cout << " 4) The Bold\n";
  std::cin >> answer1;
  
  switch(answer1){
    case 1:
      hufflepuff=hufflepuff+1;
      break;
    case 2:
      slytherin = slytherin+1;
      break;
    case 3:
      ravenclaw=ravenclaw+1;
      break;
    case 4:
      gryffindor=gryffindor+1;
      break;
    default:
      std::cout<<"Invalid input.\n";
  }
  
  std::cout << "Q2) Dawn or Dusk?\n";
  std::cout << " 1) Dawn\n";
  std::cout << " 2) Dusk\n";
  std::cin >> answer2;
  
  if(answer2 == 1){
    gryffindor=gryffindor+1;
    ravenclaw=ravenclaw+1;
  }else if (answer2 == 2 ){
    hufflepuff=hufflepuff+1;
    slytherin=slytherin+1;
  }else{
    std::cout << "Invalid input.\n";
  }
  
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
  
  std::cout << " 1) The violin\n";
  std::cout << " 2) The trumpet\n";
  std::cout << " 3) The piano\n";
  std::cout << " 4) The drum\n";
  std::cin >> answer3;
  
  if ( answer3 == 1){
    slytherin=slytherin+1;
  }else if (answer3 == 2){
    hufflepuff=hufflepuff+1;
  }else if ( answer3==3 ){
    ravenclaw=ravenclaw+1;
  }else if ( answer3 == 4){
    gryffindor=gryffindor+1;
  }else {
    std::cout << " Invalud input.\n";
  }
  
  std::cout << "Q4) Which road tempts you the most>\n";
  std::cout << " 1) The wide, sunny grassy lane\n";
  std::cout << " 2) The narrow, dark, lantern-lit alley\n";
  std::cout << " 3) The twisting, leaf-strewn path through woods\n";
  std::cout << " 4)The cobbled street lined ( ancient buildings)\n";
  std::cin >> answer4;
  
  if ( answer4 == 1){
    hufflepuff=hufflepuff+1;
  }else if ( answer4==2){
    slytherin=slytherin+1;
  }else if ( answer4 == 3 ){
    gryffindor=gryffindor+1;
  }else if (answer4==4){
    ravenclaw=ravenclaw+1;
  }else {
    std::cout << " Invalid input.\n";
  }
  
  if(gryffindor> max){
    max = gryffindor;
    house="Gryffindor";
  }else if(hufflepuff>max){
    max = hufflepuff;
    house = "Hufflepuff";
  }else if (ravenclaw>max){
    max = ravenclaw;
    house="Ravenclaw";
  }
  else if ( slytherin> max){
    max = slytherin;
    house = "Slytherin";
  }
  std::cout << house << "!\n";
  

    
}