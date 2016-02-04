//
// time.h
//
// information regarding the time library
//

#define LS 0x4000001c
#define MS 0x40000020
#define PRESCALE 0x40000008
#define	ONE_SECOND	1500		// you define this however you want/need


extern unsigned int gettime( void );
extern unsigned int timediff( unsigned int now, unsigned int then );
extern void wait( unsigned int time );

