/*
	exploring
		inttypes.h
		stdint.h

	http://www.opengroup.org/onlinepubs/9699919799/basedefs/inttypes.h.html

	ts: Sat Jun 29 11:42:32 PDT 2024

   */

#include <stdint.h>
#include <inttypes.h>

#include <wchar.h>

int main(void)
{
	uint8_t		b = 0x3ef;
	printf( "%d %d %d\n", 
			b,
		       	(signed char)b, 
			sizeof(b)
		);
	
	b = sizeof( struct {char a;} );
	printf( "%d\n", b );

	b = sizeof( char [5] ); 
	printf( "%d\n", b );



	uintmax_t	i = UINTMAX_MAX; // This type always exists.
	wprintf(L"The largest integer value is %020" PRIxMAX "\n", i);

	return 0;
}



