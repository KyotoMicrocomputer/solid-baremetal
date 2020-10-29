#include "dhrystone.h"

extern void _init_coverage(void);

int main(int argc, char **argv)
{
	dhrystone();
	return 0;
}
