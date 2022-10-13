/** A program that opens a text file for reading while writing them to another file 
*   The script takes two command-line arguments which are text files
*   The first text file (e.g. file1.txt) is used to read the contents and copy from
*   The second text file (e.g. file2.txt) is the file to write
*   The application will close both files and exit after no more lines to read and copy
*   Example invocation: debian@beaglebone:~/tranhw6$ ./myCopier file1.txt file2.txt
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH  "."


int main(int argc, char* argv[]){
  if(argc!=3){
    cout << endl;
    cout << "Usage is myCopier and name of files: " << endl;
    cout << " e.g. myCopier file1.txt file2.txt" << endl;
    return 3;
  }

  string cmd1(argv[1]);
  string cmd2(argv[2]);
  cout << endl;
  cout << "Starting the reading and writing file program" << endl;
  cout << "The current FILE PATH is: " << FILE_PATH << endl;
  cout << "Files name passed are: " << cmd1 + " " + cmd2 << endl;
  cout << endl;
  fstream f1;
  fstream f2;
  string line;
  string path(FILE_PATH);
  f1.open((path+"/"+cmd1).c_str(), fstream::in);
  f2.open((path+"/"+cmd2).c_str(), fstream::out);
  while(getline(f1,line)) {
           cout << line << endl;
           f2 << line << endl;
   }
   cout << endl;
   cout << "Done Copy \n";
   f1.close();
   f2.close();
}

