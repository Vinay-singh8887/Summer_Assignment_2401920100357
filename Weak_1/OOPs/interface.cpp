#include<iostream>
#include<string>

using namespace std;

class LibraryUser{
    public:
    virtual void registerAccount()=0;
    virtual void requestBook()=0; 

};

class Kiduser:public LibraryUser{
 public:
 int age;
 string booktype;

 void registerAccount() override{
    if(age<12) cout<<"You have successfully registered under a kids Acoount\n";

    else cout<<"Sorry! Age must be less than 12 to register as a kid\n";
 }

 void requestBook() override{
    if(booktype=="kids")
    cout<<"Book issued succesfully, please return the book within 10 days\n";

    else 
    cout<<"oops, you are allowed to take only kids books\n";

 }
};

class Adultuser:public LibraryUser{
    public:
    int age;
    string booktype;

    void registerAccount() override{
        if(age>12)
        cout<<"You have successfully registered under as Adult Acoount\n";

        else 
        cout<<"Sorry!, Age must be greater than 12 to register as an adult\n";

    }

    void requestBook() override{

        if(booktype=="Fiction")
        cout<<"Book issued successfully, please return the book within 7 days \n";
        else 
        cout<<"OOps, you are allowed to take only adult fiction book\n";
    }
};


int main(){
    Kiduser Kid1;
    Kid1.age =10;
    Kid1.booktype="kids";
    Kid1.registerAccount();
    Kid1.requestBook();

    cout<<endl;

     Kiduser Kid2;
    Kid2.age =18;
    Kid2.booktype="Fiction";
    Kid2.registerAccount();
    Kid2.requestBook();

    cout<<endl;


    Adultuser adult1;
    adult1.age =5;
    adult1.booktype="kids";
    adult1.registerAccount();
    adult1.requestBook();
    cout<<endl;

     Adultuser adult2;
    adult2.age =23;
    adult2.booktype="Fiction";
    adult2.registerAccount();
    adult2.requestBook();


    return 0;
}