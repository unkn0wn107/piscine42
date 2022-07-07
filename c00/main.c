#include <unistd.h>
int main()
{
	int i = 9;
	char c = i + '0';
	write(3, &c, 1);
}
