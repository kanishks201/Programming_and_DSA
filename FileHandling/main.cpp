#include <iostream>
#include<fstream>
using namespace std;
/*
class Book{
  int bno;
  char btitle[50];
  int bprize;
  char bauthor[50];
  public:
      void getbook();
      void showbook();
      void readAllbooks();
};

Book::getbook(){
  cout<<"\n\nEnter Book No:";
  cin>>this->bno;
  cout<<"\n\nEnter Book Name:";
  cin>>this->btitle;
  cout<<"\n\nEnter Book Prize:";
  cin>>this->bprize;
  cout<<"Enter Author";
  cin>>this->bauthor;
}
Book::showbook(){
  cout<<bno<<"  "<<btitle<<"  "<<bprize<<"  "<<bauthor<<endl;
}
Book::readAllbooks(){
  fstream f;
  f.open("book.text",ios::app);
  if(!f){
    cout<<"File not open";
  }
}
int main()
{

    return 0;
}
*/

//program to store student records in a file
class student{
    char name[10],branch[3];
    int rn,sem;
public:
    void get(){
        cout<<"Enter Name:-";cin>>name;
        cout<<"\nEnter Roll:-";cin>>rn;
        cout<<"\nEnter Branch:-";cin>>branch;
        cout<<"\nEnter Semester:-";cin>>sem;
        cout<<"\n";
    }
    void display(){
        cout<<"Name:-"<<name;
        cout<<"\nRoll No.:-"<<rn;
        cout<<"\nBranch:-"<<branch;
        cout<<"\nSemester:-"<<sem<<endl;
    }
};
int main(){
    char ch;
    student s;
    ofstream fout;
    fout.open("Students.txt",ios::app);
    do{
        s.get();
        fout.write((char*)&s,sizeof(s));
        cout<<"Want to enter more records(y/n):-";cin>>ch;
    } while(ch=='y'||ch=='Y');
    fout.close();
    ifstream fin;
    fin.open("Students.txt",ios::in);
    //fin.read((char*)&s,sizeof(s));
    while(!fin.eof()){
        s.display();
        fin.read((char*)&s,sizeof(s));
        return 0;
    }
    fin.close();
    return 0;
}
