// main.cpp -- downloads a file and displays contents
// File Version: 1.3

// standard libraries
#include <iostream>

// versidyne libraries
#include "http.h"
//#include "text.h"

// namespaces
using namespace std;

// main program code
int main (int argc, char *argv[]) {
	
	//declare variables
	http web;
	//text file;
	
	// login and grab session
	const char *session = web.get("api.versidyne.com", "/?login=email&pass=password");
	const char *exip = web.get("api.versidyne.com", "/?info=external_ip");
	
	//cout << session << "\n";
	cout << web.get("api.versidyne.com", "/?login=email&pass=password") << '\n';
	//cout << exip << "\n";
	cout << web.get("api.versidyne.com", "/?info=external_ip") << '\n';
	
	// display usage & exit
	//if (argc == 1) { cout << "usage: " << argv[0] << " file" << "\n"; return 0; }
	
	// set filename
	//file = argv[1];
	
	// exit
	return 0;
	
}
