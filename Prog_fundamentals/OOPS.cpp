/*
OOPS- Object oriented Programming

The way of writing code or programming in a structured around object rather than Fxn and Logic.
This is way of writing code in Production to enhance structue, redability and performance of code.

To reduce redundancy we uses class and object.

We can insert data and function in class.
Class is a user defined data type.
Class is a blueprint for object.
Class have its attributes which is called properties of object.
Methods- function to operate on attributes or properties.

Object is an entity that has state and behaviour.
Class is blueprint of object which have attributes(properties) and methods(fxn) about object.

Class is not a real world entity its just a template.
A object is a real world entity so it occopy space.
A size of empty class is 1.
cout<<sizeof(vasu);-- size of object

A empty class always have a size 1 because cpp requires every object to have unique address.
Distinct objects always have distinct address this is rule of cpp.
&vasu != &chunnu

Padding is unused bytes the compiler reserved so that CPU can handle it efficiently.

int a
a a a a - 4
char c
c -1
int a char c //padding
a a a a c x x x -8
char c int a //padding
c x x x a a a a -8
char c int a char b //padding
c x x x a a a a b x x x -12 - less memory efficient
int a char b char c //padding
a a a a b c x x -8 - more memory efficient

we always use greedy approach in order to get a correct allingment so it uses least size.
Largest to smallest
string- long long- double- long- int- float- bool- char

Example(Padding)-
class Bad{
    char a;  //1 + 7 padding
    double b; // 8
    bool c; //1 + 3 padding
    int d; // 4
    string s; //32

    structure: a xxxxxxx bbbbbbbb c xxx dddd ssssssssssssssssssss
};
class Good{
    string s; //32
    double d; //8
    int a; //4
    char c; //1
    bool b; //1+2 tail padding

    structure: sssssssssssssssssss ddddddd aaaa c b xx
};

rule- There should always be least padding and it should always be in last- tail padding.

**Way it aquire memory in computer memory.**
If there is only single varible in any class it will start from 0 cause 0 is a multiple of everything.

bool/char - always start from multiple of 1 (0 1 2 3)
int/float- always start from multiple of 4 (0 4 8 12 16)
string/double/long- always start from multiple of 8 (0 8 16 24 32)

string s1="hi"
string s2="vasu_mudgal"
string s3="I am currently studying B.Tech"

In Memory (s1==s2==s3) 32 bits
*/
/*
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        string name;
        int age;
        char grade;
};
int main(){
    student s1;   //object s1
    s1.name="Vasu";  //we cant access it here because a class is private by default we need to make it public
    s1.age=21;
    s1.grade='A';
    student s2;
    s2.name="Chunnu";
    s2.age=21;
    s2.grade='B';
}
*/
/*
Access modifiers- Giving access of any variables (public/protected/private)
Acess in same Class- yes/yes/yes
Acess in derived class- yes/yes/no
Acess in outside code ex in main fxn- yes/no/no

By default a class is always private if we dot mention.
We need to secure critical data that not anyone can modify.
The derived class is a class that inherits from another class. 
The derived class is called child class. The class it enherit its property 
from is called Parent or Base class.

There are two types of memory allocations in cpp we can allocate memory to any object.
1. Static memory allocation- stack based allocation of any object. Automatically empty afted scope }.

#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        string name;
        int age;
};
int main(){
    student s1;
    s1.name="Vasu";
    s1.age=21;

    //Access
    cout<<s1.name<<"\n";
    cout<<s1.age<<"\n";
}

2. dynamic memory allocation- heap based allocation of any object.
                              does not delete automatically we need to use delete pointer.
                              

We need dynamic memory allocation because when we are dealing with data with large memory.
int arr[1000000] //stact overflow
vector<int>v(1000000) //heap based- no problem

To avoid this stack overflow we either declare array globally or use dynamic memory allocation.

#Reason to use dynamic memory allocation---------
1.Large data- vector<int>v(1000000)
2.Linked structure- Linked list or Tree
3.Size known only at runtime. 
int n;
cin>>n;
vector<int>v(n);

int arr[n]-- blunder/ not possible 
we cannot allocate variable size to an array

4. Must outliv the fxn - A stack object dies when function returns.
5. Polymorphism- You want base/parent class to be pointer which can point to different derived objects.

#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        string name;
        int age;
};
int main(){
    student *s1= new student;
    (*s1).name="vasu";
    (*s1).age=21;
    //Access
    cout<<s1->name<<"\n";
    cout<<s1->age<<"\n";

    delete s1; //freeup memory use delete[] for array
    s1=nullptr; optional but good habit
}
    //Mordern version
auto s1 = make_unique<student>();
s1->name = "Vasu";
s1->age = 21;
cout << s1->name << "\n" << s1->age << "\n";
// freed automatically, no delete needed
*/
/*
#include<bits/stdc++.h>
using namespace std;
class student{
    public:
        string name;
        int age;
};
int main(){
    student *s1;
    (*s1).name="vasu";
    (*s1).age=21;
    //Access
    cout<<s1->name<<"\n";
    cout<<s1->age<<"\n";
}

#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
        double balance;
        string pin;
    protected:
        string Account_number;
    public:
        string holder_name;
        string age;
        string mobileno;
};
int main(){
}*/
////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
class bankaccount{
    private:
        double balance;
        string account_number;
        string holder_name;

    //getter and setter fxn
    public:
        void getname(string name){
            if(name.size()==0){
                cout<<"Invalid";
                return;
            }
            holder_name=name;
        }

        void getbalance(double paise){
            balance=paise;
        }
        void getaccount(string ac){
            account_number=ac;
        }

        string showdetails(string password){
            if(password=="XXXX1234"){
                return holder_name;
            }
            return "invalid_password";
        }
        string AC(string password){
            if(password=="XXXX1234"){
                return account_number;
            }
            return "invalid_password";
        }
        double showbalance(string password){
            if(password=="XXXX1234"){
                return balance;
            }
            return 0000.00;
        }
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    bankaccount vasu;
    vasu.getname("Vasu_Mudgal");
    vasu.getbalance(11111.25);
    vasu.getaccount("1234abcd5678");
    string password="XXXX1234";
    cout<<vasu.showdetails(password)<<"\n";
    cout<<vasu.AC(password)<<"\n";
    cout<<vasu.showbalance(password)<<"\n";
}
