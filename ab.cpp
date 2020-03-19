#include <iostream>
#include <unistd.h>
#include <sys/types.h>
using namespace  std;



int main(){
  pid_t pid;
  fork();
  cout << "1";
  pid = fork();
  if (pid > 0){
    fork();
    cout << "2";
  }
 cout << "3";
 return 0;
 
}
