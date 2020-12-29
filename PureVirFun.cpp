//program to demonstrate the concept of pure virtual function
//pure virtual function is the virtual function without the defination

using namespace std;
#include<iostream>

class Base
{
	public:
	
	       int i,j;
	
	       Base()
		   {
			   i = 11;
			   j = 0;
		   }
		   
		   void fun()             //if you are not used virtual keyword then call fun of base
		   {
			   cout<<"Base fun\n";
		   }
		   virtual void gun()= 0;
};
class Derived : public Base
{
	public:
	   
	       int i;
		   
		   Derived()
		   {
			   i = 21;
		   }
		  
		   void sun()
		   {
			   cout<<"Derived sun\n";
		   }
		                          // if we not provide defination to the pure virtual function then we cant create object of that class,so must be provide defination in dirived class
           void gun()                         		// error: cannot declare variable 'dobj' to be of abstract type 'Derived'
		   {
			   cout<<"Derived gun\n";
		   }
};
int main()
{
	Base *bp = NULL;            //	Base class pointer 
	Derived dobj;
	
	cout<<"size of Base class"<<"\t"<<sizeof(Base)<<"\n";        
	cout<<"size of Derived class"<<"\t"<<sizeof(Derived)<<"\n"; 
	
	bp = &dobj;     //upcasting (base class pointer points to derived class object
	
	bp->fun();         //derived fun
	bp->gun();          //Base gun
	
	
	return 0;
}

/*
output 
size of Base class      12
size of Derived class   16
Base fun
Derived gun
*/