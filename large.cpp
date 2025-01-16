#include<iostream>
using namespace std;

class large
{
	public:
		int a,b,c;
		
		void get()
		{
			cout<<"Enter three numbers= ";
			cin>>a>>b>>c;
		}
		
		int show()
		{
			int large_num=a;
			
			if(large_num<b)
			{
				return b;
			}
			if(large_num<c)
			{
				return c;
			}
			return large_num;
		}
};
int main()
{
	large l;
	l.get();
	cout<<"The large number is= "<<l.show();
}
