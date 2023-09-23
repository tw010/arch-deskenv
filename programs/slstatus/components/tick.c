#include <stdio.h>
#include <string.h>

#include "../slstatus.h"
#include "../util.h"

int i = 0;

const char *
tick(const char *unused){
	i=(i+1)%2;
	return i==0 ? "󰣇" : "";
}
