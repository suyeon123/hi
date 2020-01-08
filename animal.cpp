#include <iostream>

using namespace std;

typedef struct Animal {
   char name[30];
   int  age;

   int health;
   int food;
   int clean;
} Animal;


void create_animal(Animal *animal) {
     cout<< " Animal Name : ";
     cin>>animal->name;

     cout<< " Animal Age : ";
     cin>animal->age;

     animal->health = 100;
     animal->food = 100;
     animal->clean = 100;
}

void play(Animal *animal){
     animal->health -= 30;
     animal->food -= 20;
     animal->clean -= 30;
}

void sleep(Animal *animal){
     animal->health += 50;
     animal->food -= 30;
     animal->clean -=10;
}

void shower(Animal *animal){
     animal->health -= 5;
     animal->food -= 5;
     animal->clean = 100;
}

void food (Animal *animal){
     int input;
     
     cout<<" 1. apple "<<endl;
     cout<<" 2. carrot "<<endl;
     cin>>input;

     switch(input){
     int food;
     case 1 :
          animal->health += 10;
          animal->food += 30;
          break;
     case 2 :
          animal->health += 20;
          animal->food += 20;
          break;
     }
}

void show_stat(Animal *animal){
     cout<<" State of "<< animal->name<<endl;
     cout<<" Health : "<<animal->health<<endl;
     cout<<" Food : " <<animal->food<<endl;
     cout<<" Clean : " <<animal->clean<<endl;
}


int main(){
    Animal *list[10];
    int animal_num = 0;
   
    for (;;)
    {
        cout<<" 1. Add animal "<<endl;
        cout<<" 2. Play "<<endl;
        cout<<" 3. Sleep "<<endl;
        cout<<" 4. Shoewr "<<endl;
        cout<<" 5. Feed "<endl;

        int input;
        cin>>input;

        switch(input) {
        case 1 :
             break;
    }
}

