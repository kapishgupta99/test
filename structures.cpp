//******Structures By Abdul Bari *************//
#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breath;
    char x;

};


int main()
{
   struct Rectangle r1 ={10,5}; //initilization
   r1.length=15;                //accessing members
   r1.breath=7;
   cout<<r1.length<<endl;
   cout<<r1.breath<<endl;
   
   return 0;

   
    

}

























/*#include<iostream>
using namespace std;

struct Person 
{
    char name[50];
    int age;
    float salary;
};
void displayData(Person); //Function is declared
int main() {
    Person p;
    cout<<"enter full name: "<<endl;
    cin.get(p.name,50);
    cout<<"age: ";
    cin>>p.age;
    cout<<"salary: ";
    cin>>p.salary;
     

}
void displayData(Person p) {
    cout<<"\n*****Information Display*****"<<endl;
    cout<<"Name: "<<p.name<<endl;
    cout<<"Age: "<<p.age<<endl;
    cout<<"Salary: "<<p.salary<<endl;
    
}*/

