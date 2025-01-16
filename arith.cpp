#include<iostream>
using namespace std;

class arithmatic
{
	public:
		int a,b;
		
		void get()
		{
			cout<<"Enter two numbers= ";
			cin>>a>>b;
		}
		int add()
		{
			return a+b;
		}
		int sub()
		{
			return a-b;
		}
		int mul()
		{
			return a*b;
		}
		float div()
		{
			return (float)a/b;
		}
		
		void show()
		{
			cout<<"Addition is= "<<add()<<endl;
			cout<<"Substraction is= "<<sub()<<endl;
			cout<<"Multiplication is= "<<mul()<<endl;
			cout<<"Division is= "<<div();
		}
};
int main()
{
	arithmatic a;
	a.get();
	a.show();
}
