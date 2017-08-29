#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main () {
  char number[1];
  time_t timer;
  char buffer[26];
  struct tm* tm_info;
  time(&timer);
  tm_info = localtime(&timer);
  strftime(buffer, 26, "\n%Y-%m-%d %H:%M:%S", tm_info);
  ofstream tempfile;
  tempfile.open ("savefile.txt", ios::app);
  tempfile << buffer;
  printf("What are your thoughts?\n");
  string thoughts;
  getline(cin, thoughts);
  tempfile << "\n";
  tempfile << thoughts;
  tempfile.close();
  return 0;
}
