#include <stdio.h>
#include "scheduler.h"
#include <time.h>
#include <stdlib.h>
#include <algorithm>


using namespace std; 



int main()
{
	srand(time(NULL));
	int pid[5]={1,2,3,4,5} ,at[5], bt[5];
	
	for(int i=0;i<5;i++){
		
		at[i] = rand()%10 + 1;
		bt[i] = rand()%10 + 1;

	}

	srt_gen(pid,at,bt);
	
	return 0;
}
