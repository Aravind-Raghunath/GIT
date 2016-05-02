#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
  pid_t pid;
  pid = fork();

  if (pid == 0) {
    cout << "Child\n";
    system("ps -o pid,ppid");
  } else {
    if(pid=fork()<0)
      perror("fork error");
      if(pid==0){
        cout<<"Grand child\n";
      } else {
        cout<<"Parent of second child\n";
      }
    cout << "Parent is tired go on to Child\n";
    sleep(1);
    cout<<"Parent is active\n";
    cout << "Parent\n";
  }

  cout << "Parent and Child\n";
  return 0;
}
