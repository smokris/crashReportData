#include <stdlib.h>

struct {
	unsigned int version __attribute__((aligned(8)));
	char *message        __attribute__((aligned(8)));
	char *signature      __attribute__((aligned(8)));
	char *backtrace      __attribute__((aligned(8)));
	char *message2       __attribute__((aligned(8)));
	void *reserved       __attribute__((aligned(8)));
	void *reserved2      __attribute__((aligned(8)));
} crashInfo __attribute__((section("__DATA,__crash_info"))) = { 4, 0,0,0,0,0,0 };

int main(void)
{
	crashInfo.message   = "crashInfo.message text";
	crashInfo.signature = "crashInfo.signature text";
	crashInfo.backtrace = "crashInfo.backtrace text";
	crashInfo.message2  = "crashInfo.message2 text";
	abort();
}
