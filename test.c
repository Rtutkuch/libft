#include <string.h>
#include <stdio.h>

int main( void )
{
    char buf1[4096] = "abcdef";
    char buf2[4096] = "abcdef";

    // memset( buff, '\0', 80 );
    memmove( buf1 + 3, buf1, 6 );
    memcpy( buf2 + 3, buf2, 6 );

    printf( "%s\n", buf1 );
    printf( "%s\n", buf2 );
    
    return (0);
}
