#include <iostream>
//#include <graphics.h>
using namespace std;
/*class A{
   int a;
   char b;
   float c;
};
int main()
{
    return 0;
}
*/
/*
int main(){
   int gd=DETECT,gm;
   initgraph(&gd,&gm," ");
   line(150,150,450,150);
   line(150,200,450,200);
   line(150,250,450,250);
   return 0;
   closegraph();
}

*/

/*
float area(float r);
int area(int a,int b);
float area(float x,float y);
int main()
{  float c,areac,h,bs,areat;
   int l,b,arear;
   cout<<"Enter radius:-";cin>>c;
   areac=area(c);
   cout<<"\nArea of circle:-"<<areac;
   cout<<"\nEnter length and breath:-";cin>>l>>b;
   arear=area(l,b);
   cout<<"\nArea of rectangle:-"<<arear;
   cout<<"\nEnter base and height:-";cin>>bs>>h;
   areat=area(bs,h);
   cout<<"\nArea of triangle:-"<<areat;
       return 0;
}
float area(float r)
{
    float area;
    area=3.14*r*r;
    return area;
}
int area(int a,int b)
{
    int area;
    area=a*b;
    return area;
}
float area(float x,float y)
{
    float area;
    area=0.5*x*y;
    return area;
}

*/


/*
// Counting objects of a class
class A{
 static int c,k;
   public:
       A(){
       while(c==0){
          k+=(c++);
       }
       cout<<k;
    }
};
int A::c;
int A::k;
int main(){
   A a1,a2,a3;
   return 0;
}
*/

/*
//Swapping the column of an array
void disp(int a[4][4],int n);
void swapcol(int a[4][4],int n);
int main(){
   int a[4][4],i,j;
   cout<<"Enter array elements:-\n";
   for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        cin>>a[i][j];
    }
   }
   disp(a,4);
   swapcol(a,4);
   cout<<"\nFinal array is:-";
   for(i=0;i<4;i++){
        cout<<"\n";
      for(j=0;j<4;j++){
          cout<<"\t"<<a[i][j];
      }
   }
  return 0;
}
void disp(int a[4][4],int n){
    int i,j;
    cout<<"\nArray is:-\n";
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        cout<<"\t"<<a[i][j];
    }
    cout<<"\n";
   }
}
void swapcol(int a[4][4],int n){
    int i,j,t;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(j==0){
                t=a[i][j];
                a[i][j]=a[i][j+3];
                a[i][j+3]=t;
            }
        }
    }
}
*/

class student{
  protected:
  char name[10];int age;
  public:
      void read(){
        cout<<"Enter Name:-";
        cin.getline(name,10);
        cout<<"\nEnter Age:-";
        cin>>age;
      }
};
class it_student{
    protected:
  int rn,sem; char branch[3];
  public:
      void get(){
        cout<<"\nEnter Roll no.:-";
        cin>>rn;
        cout<<"\nEnter Branch:-";
        cin>>branch;
        cout<<"\nEnter Semester:-";
        cin>>sem;
      }
      /*void show(){
        cout<<"\nName:-"<<name;
        cout<<"\nAge:-"<<age;
        cout<<"\nRoll no.:-"<<rn;
        cout<<"\nBranch:-"<<branch;
        cout<<"\nSemester:-"<<sem;
      }*/
};
class tech_club:public student,public it_student{
  char pos[10],l[7];
  public:
      void getdata(){
       cout<<"\nPosition in Club:-";
       cin>>pos;
       //cin.ignore(1);
       cout<<"\nExpert in :-";
       cin>>l;//cin.ignore(1);
       }
      void show(){
        cout<<"\nName:-"<<name;
        cout<<"\nAge:-"<<age;
        cout<<"\nRoll no.:-"<<rn;
        cout<<"\nBranch:-"<<branch;
        cout<<"\nSemester:-"<<sem;
        cout<<"\nPosition in club:-"<<pos;
        cout<<"\nExpert in:-"<<l;
      }
};
int main(){
  tech_club i;
  i.read();
  i.get();
  i.getdata();
  i.show();
  return 0;
}
