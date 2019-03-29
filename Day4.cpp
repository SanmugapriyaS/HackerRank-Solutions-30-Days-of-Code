
using namespace std;
#include <iostream>

class Person{
    public:
        int age;
     
        void amIOld();
        void yearPasses();
    

    Person(int initialAge){
        // Add some more code to run some checks on initialAge
    
      age=initialAge;
      }
}; 
    void Person::amIOld(){
         if(age<0)
       {   cout<<"Age is not valid, setting age to 0.\n";
           age=0;
       }
        if(age<13)
          cout<<"You are young.\n";
        else if(age>=13 & age<18)
          cout<<"You are a teenager.\n";
        else if(age>=18)
          cout<<"You are old.\n";
        // Do some computations in here and print out the correct statement to the console 

    }

    void Person::yearPasses(){
        ++age;
        
    }


int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}