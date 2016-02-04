//
// hello, world!!!
//

#include "time.h"
#include "led.h"


void
notmain()
{
	unsigned int now, then, delta;
	while (1) {
		blink_led( GRN );
		wait( ONE_SECOND );
		then = gettime();
		now = gettime();
		delta = timediff( now, then );
	}
}
