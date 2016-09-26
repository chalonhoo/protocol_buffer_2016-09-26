
//Reader

#include "test_one.HelloWorld.pb.h"

#include <iostream>
#include <fstream>

using namespace std;

void ListMsg(const test_one::HelloWorld & msg) 
{ 
	cout << msg.id() << endl; 
	cout << msg.str() << endl; 
} 


int main(int argc, char* argv[]) 
{ 
	test_one::HelloWorld msg1; 
	
	{ 
	  fstream input("../Writer/log", ios::in | ios::binary); 
	  if (!msg1.ParseFromIstream(&input)) { 
	    cerr << "Failed to parse address book." << endl; 
	    return -1; 
	  } 
	} 
	
	ListMsg(msg1); 
	
	return 0;
}