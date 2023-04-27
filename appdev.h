#pragma once

#define NN 20 //length of username

typedef struct {
	int max;
	int min;
	char rname[NN]; //this string can hold N-1 characters
}rock;

void send_data(rock);