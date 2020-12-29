//program to demonstrate the concept of pure virtual destructor
//if our class contain pure virtual destructor then our class become a abstract class due to which we cant create object of that class

using namespace std;
#include<iostream>

using namespace std;
#include<iostream>

class Demo
{
	public:
	
	     int i,j;
		 Demo()
		 {
			 cout<<"Demo constructor\n";
		 }
		 
		 virtual ~Demo() = 0;
		 
		 void fun()
		 {
			 cout<<"Demo fun\n";
		 }
		 
};

int main()
{
	//Demo obj;  ---> error: cannot declare variable 'obj' to be of abstract type 'Demo'           (we cant create object)
	cout<<"size of Demo class\n"<<sizeof(Demo);
	return 0;
}

/*
output 
size of Demo class
12
*/