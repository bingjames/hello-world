#include"stdio.h"
#include"stdlib.h"

int main(int argc, char *argv[])
{
	if(argc) printf("num:%d,content:%d,%c\n",argc,atoi(argv[1]),&argv[1]);
	if(argc) printf("num:%d,content:%d,%c\n",argc,atoi(argv[2]),&argv[2]);
	return 0;
}
