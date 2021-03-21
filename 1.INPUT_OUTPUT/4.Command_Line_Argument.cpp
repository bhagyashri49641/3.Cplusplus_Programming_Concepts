// This program demonstate consept of command line argument

// If we pass the argument while running the program then it
// is called as command line arguments

// Entry point function has three arguments as 
// argv : It is array of haracter pointers which points to arguments passed to the application
// argc : It is the number which stores number of arguments passed to the application
// envp : It is the enviornmrnt variable
 
#include <iostream> 
using namespace std; 

int main(int argc, char** argv) 
{ 
	cout << "You have entered " << argc << " arguments:" << "\n"; 

		
	for (int i = 0; i < argc; ++i) 
		cout << argv[i] << "\n"; 

	return 0; 
} 
