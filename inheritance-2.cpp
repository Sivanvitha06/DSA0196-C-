#include<iostream>
#include<cmath>
using namespace std;
class s
{
	public:
		float number=5;
		
};
class square:public s
{
	public:
		double q()
		{
			return number*number;
		}
};
class cube:public s
{
	public:
		double t()
		{
			return number*number*number;
		}
};
int main()
{   
    square u;
    cube b;
	cout<<"square of number:"<<u.q()<<endl;
	cout<<"cube of number:"<<b.t()<<endl;	
}
