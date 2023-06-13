#include <iostream>
#include "monster.h"
#ifndef Thanos_h
#define Thanos_h

using namespace std;

class Thanos {
  private:
    int stones;
    int hp;
  public:
    Thanos(int = 0, int = 1000);
    ~Thanos();
    void snap_finger(monster *, int);
    void operator++();
};

Thanos::Thanos(int stones, int hp){
  this->stones = stones;
  this->hp = hp;
  cout << "\nThanos has always been known as the BEST fighter with";
  cout << hp<<" hp"<< "\n";
}

Thanos::~Thanos(){
  cout << "Do not start a FIGHT here again\nI'm out\nBYE " << endl;
}

void Thanos::snap_finger(monster *m, int mon_in){
  cout <<"Bruh these monster is annoying, let's try to SNAP my fingers";
  cout << "\nCurrent monster HP :" << "\n";
  for(int i = 0; i < mon_in; i++){
    cout << "Monster : " << i + 1 << "\n";
    m[i].print_hp();
    cout << "\n";
  }
  if(stones == 6){
    cout <<"\n" << "HAHA, I FINNALLY FOUND ENOUGH STONE, said Thanos" << "\n" << "\n";
    cout << "!!BOOOOOOM!!\n\n";
    for(int i = 0; i < (mon_in + 1) / 2; i++){
      m[i].set_hp(0);
      stones = 0;
    }
        cout << "Current monster HP :" << "\n";
        for(int i = 0; i < mon_in; i++){
        cout << "Monster : " << i + 1 << "\n";
        m[i].print_hp();
    }
    }else{
      cout << "NOOO, I have insufficient stone :(" << "\n";
      cout << "=============================="<<"\n\n";
  }
}

void Thanos::operator++(){
  stones++;
  cout << "\n";
  cout << "Thanos HP : " << hp << " stones obtained " << stones << "\n\n";
}

#endif