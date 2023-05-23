#include <AppKit/AppKit.h>

int main(void)
{
	[[NSException exceptionWithName:@"Exception Name" reason:@"Exception Reason" userInfo:nil] raise];
	return 0;
}
