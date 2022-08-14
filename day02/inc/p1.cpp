/*
fork()  -> create child process withits own pid
it will duplicate all the execution steps after itis called

*/

#include<myHeader.h>

int main()
{
	cout<<"PID: "<<getpid()<<endl;
	cout<<"PPID: "<<getppid()<<endl;
	cout<<"Hello World"<<endl;

	return 0;
}
