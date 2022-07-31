#include<iostream>
using namespace std;
//encapsultaion
/*
class student
{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }
};


int main()
{
    student first;
    cout<<"all ok"<<endl;
    
    return 0;
}

*/

//inheritence
class human{
    public:
    int height;
    int weight;

    int age;

    public:
    int getAge(){
       // return this-> age;
         return  age;
    }

    void setWeight(int w){
       weight=w;
    }

};

class male:private human{
    public:
    string color;
    void sleep(){
        cout<<"all ok"<<endl;
    }
    int getHeight()
    {
        return height;
    }
};

int main(){

male m1;
cout<<m1.getHeight()<<endl;






//     male obj1;
//     cout<<obj1.age<<endl;
//       cout<<obj1.weight<<endl;
//         cout<<obj1.height<<endl;

//         cout<<obj1.color<<endl;
//         obj1.setWeight(89);
//         cout<<obj1.weight<<endl;
//         obj1.sleep();

}