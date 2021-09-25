
#include <stdio.h>
#include <signal.h>
#include <conio.h>
#include <Windows.h>



/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

sig_atomic_t diSignalkan = 0;

void handle_sigint(int param) {
	diSignalkan = 1;
}

int main() {
	signal(SIGINT, handle_sigint);
	
	while (1) {
		printf("hello world\n");
		sleep(1);
	}

	_getch();
	return 0;
}
