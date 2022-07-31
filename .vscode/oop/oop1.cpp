#include<bits/stdc++.h>
using namespace std;

class hero
{
   private:
   int health;
    public:
    char*name;
   char level;

  static int time;
 
   hero(){
    cout<<"simple constructor called "<<endl;
    name =new char[100];
   
   }


   //paramaterized construc
   hero(int health){
   cout<<"this->"<<this<<endl;
    this-> health=health;
     
   }
      hero(int health,char level){
   this->level=level;
    this-> health=health;
     
   }
   //copy constructor
   hero(hero& temp)
{   
    char*ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
 
    cout<<"copy constructor called "<<endl;
    this->health=temp.health;
    this->level=temp.level;
}
   void print(){
    cout<<endl;
    cout<<"name  "<<this->name<<endl;
    cout<<"health  "<<this->health<<endl;
    cout<<"level  "<<this->level<<endl;
   } 

   int getHealth(){
    return health;

   }
  char getLevel(){
    return level;

   }
   void setHealth(int h){
    health=h;
   }

   void setLevel(char ch){
    level=ch;
   }
 void setName(char* name){
    strcpy(this->name,name);
 }
 static int random(){
   // cout<<time<<endl;
 return time;
 }
 //destructor
 ~hero(){
    cout<<"destructor called"<<endl;
 }
 


};
int hero::time=6;

int main()
{ 
  cout<<hero::random()<<endl;
// cout<<hero::time<<endl;

// hero a;
// cout<<a.time<<endl;


// hero b;
// b.time=5;
// cout<<a.time<<endl; 
// cout<<b.time<<endl;



//   hero a;
  
//   hero*b=new hero();

//  delete b;


















    // hero hero1;
    
    // hero1.setHealth(12);
    // hero1.setLevel('g');
    // char name[8]="nishant";
    // hero1.setName(name);

    // //hero1.print();

    // //use default copy
    // hero hero2(hero1);
    // //hero2.print();
    
    // hero1.name[0]='G';
    // hero1.print();
    
    // hero2.print();
    
    // hero1=hero2;
    //  hero1.print();
    
    // hero2.print();
    
    //hero shyam(2,'c');
//  shyam.setHealth(32);
//  shyam.setLevel('v');
//shyam.print();

   // hero ritesh(shyam);
    // ritesh.health=shyam.health;
    // ritesh.level=shyam.level;
  //  ritesh.print();
    
    
    
     //deafult constructor
    //object created statically
       // cout<<"hi"<<endl;
    //      hero ram(10);
    //     //cout<<"address  "<<&ram<<endl;
    //    ram.print();
    //    //ram.getHealth();
    //     hero *b=new hero;
    //     b-> print();
    //     hero temp(554,'b');
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     /*  //static allocation
    oop1 hello; //object of cLASS
    hello.setHealth(44);
    hello.setLevel('B');
    cout<<"level  "<<hello.level<<endl;
     cout<<"health is  "<<hello.getHealth()<<endl;
     // dynamicallly allocation
   

     oop1 *i=new oop1;

     i->setHealth(33);
     i->setLevel('R');

        cout<<"level  "<<(*i).level<<endl;
     cout<<"health is  "<<(*i).getHealth()<<endl;

       cout<<"level  "<<i->level<<endl;
     cout<<"health is  "<<i->getHealth()<<endl;*/





//     cout<<"health"<<hello.getHealth()<<endl;
  
//     //hello.health=70;
//     hello.level='A';
//     hello.setHealth(874);
//    // cout<<"health is  "<<hello.getHealth()<<endl;
//     cout<<"level is   "<<hello.level <<endl;
//     cout<<"health is  "<<hello.getHealth()<<endl;

//     return 0;

  
}
