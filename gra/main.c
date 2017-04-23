/*
 * main.c
 *
 *  Created on: 20.04.2017
 *      Author: Jsiek
 */

#include<stdio.h>

#include<time.h>


long count(){
	clock_t time_t, stop_t;
	int var = 0;

	printf("start\n");


	time_t = clock();
	printf("%ld\n", time_t);

	fflush(stdout);
	scanf("\r%d", &var);

	while (var == 0) {

	}

	stop_t = clock();

	printf("\n%ld\n\r", (stop_t - time_t));

	return (stop_t - time_t);
};

int main(){

	long counter;
	int loop_cnt = 0;

	while (loop_cnt < 4) {
		loop_cnt ++;
		counter = count();

		printf("\n\n____________%ld_____________\n", (counter/CLOCKS_PER_SEC));
		printf("%d",CLOCKS_PER_SEC);

	}


	return 0;
}
