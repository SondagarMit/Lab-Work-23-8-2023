#include<iostream.h>
#include<conio.h>
class Test
{
       int n;
	 public:
		void setdata()
		{
		 cout << "Enter Your Value: ";
		 cin >> n;
		 }
		 void getdata()
		 {
		  int i;
		  for (i=0;i<n;i++)
		   {
		      cout << i << "\t";
		   }



		 }


};
class Test1:public Test
{
  public:
    void ans()
    {
      setdata();
      getdata();
    }
};


 void main()
{
  clrscr();

  Test1 obj;
  obj.ans();

  getch();
}