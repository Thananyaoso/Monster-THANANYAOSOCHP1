#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "monster.h"
#include "Thanos.h"

int main(int argc, char* argv[]) {
  Thanos T;
  int n;
  int hp_in;

  cout << "\n One upon a time, there is a group of monster that has been attacking each other and cause harm to innocent people." <<endl;
  cout << "\n- Thanos was annoyed and decided to get rid of them by himself - \n"<<endl;
  cout << "How many monsters? ";
  cin >> n;
  

  monster *m = new monster[n];
  

  for(int i = 0; i < n; i++){
    cout << "Input monster's HP : ";
    cin >> hp_in;
    m[i].set_hp(hp_in);
  }
  
  cout << "\nTHANOS HAS ARRIVED but did not have enough stone so he tried searching for the stone in that area, while the monsters are fighting\n \n";

srand(time(0)); 

  cout << "THANOS found the 1st stone!!" << "\n";
  T.operator++();
  m[rand() % n].attack(m[rand() % n]);
  T.operator++();
  m[rand() % n].attack(m[rand() % n]);

  T.snap_finger(m, n);

  cout << "THANOS found the 2nd stone!!" << "\n";
  T.operator++();
  m[rand() % n].attack(m[rand() % n]);
  cout << "THANOS found the 3rd stone!!" << "\n";
  T.operator++();
  m[rand() % n].attack(m[rand() % n]);

  T.snap_finger(m, n);

  cout << "THANOS found the 4th stone!!" << "\n";
  T.operator++();
  m[rand() % n].attack(m[rand() % n]);
  cout << "THANOS found the 5th stone!!" << "\n";
  T.operator++();
  cout << "THANOS found the 6th stone!!" << "\n";
  
  T.snap_finger(m, n);


  delete []m;
  
  return 0;
}
