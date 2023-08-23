#include<iostream.h>
#include<conio.h>
class Result
{
 int total;
 float avg;
  public:
	 void collect()
	 {
	   int s1,s2,s3,s4,s5;


	   cout << "Enter 5 Subject mark: ";

	   cin >> s1 >> s2 >> s3 >> s4 >> s5;

	   total = s1+s2+s3+s4+s5;

	 }
	      void total1()
	      {

		avg = total / 5;
		cout << avg << "\t";


	      }



};
class Child:public Result
{
    public:
	    void getter()
	    {
	       collect();
	       total1();

	    }

};


void main()
{


   Child obj;
   clrscr();
   obj.getter();

   getch();





}