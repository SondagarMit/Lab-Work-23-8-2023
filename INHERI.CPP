#include<iostream.h>
#include<conio.h>
class Test
{
   int *p;
   public:
	   void pointer()
	   {
	     int a,b;

	     cout << "Enter Pointer Value: ";
	     cin >> a >> b;

	    * p = a * b;
	    }
	   void getter()
	   {
	   int ans;
	   pointer();

	   cout <<*p ;
	   }
};
class Test2:public Test
{
   public:
	   void gamer()
	   {
	     pointer();
	     getter();
	   }


};
void main()
{
  clrscr();

  Test2 obj;
  obj.gamer();
  getch();



}