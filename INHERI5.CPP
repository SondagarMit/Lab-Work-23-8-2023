#include<iostream.h>
#include<conio.h>
 class Test
  {
    int n;
	 public:
		 void setdata()
		 {
		  cout << "enter your value: ";
		  cin >> n;
		}
		void getdata()
		{
		  int i;
		  for (i=0; i<n ; i++)
		  {
		    cout << i << "\t";

		  }

		}

  };
  class Test2:public Test
  {
   public:
      void Mitu()
      {
       setdata();
       getdata();
      }
};
  void main()
{
   Test2 obj;

   clrscr();

   obj.Mitu();

   getch();
}