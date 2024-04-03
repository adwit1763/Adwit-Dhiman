#include<iostream>
using namespace std;
int rno;
char name[20];

class student{
             private:
                    char name[20];
                     int rn;

            public:
                     void getdata(){
                     cin>>name;
                     cin>>rn;
                     }
                     void display(){
                      cout<< "\nName :"<<name;
                     cout<< "\nRoll no. :"<<rn;


                     }
};
int main(){
  student obj;
  obj.getdata();
  obj.display();
}
class student{
  public:
        int x;
}
