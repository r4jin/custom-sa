#ifndef __COMMON_H__
#define __COMMON_H__

#include <stdio.h>
#include <errno.h>

#define EXITWITHEXITCODEIFFALSE(x, code) if(!x)exit(code);
#ifdef __GNUC__
#define print(format, arg...) fprintf(stderr, format ,##arg)
#define fprint(format, arg...) fprintf( stderr, "%s:%d " format , __FILE__ , __LINE__ , ##arg)
#endif
#define debug(x, y) fprintf( stderr, #x " = %" #y "\n" , x)
#define arraysizeof(x) (sizeof(x)/sizeof(x[0]))

#define BACKSLASH '\\'
#define SPACE ' '

#define min(x, y) ({__typeof__(x) __x=(x),__y=(y);(__x < __y) ? __x : __y; })
#define max(x, y) ({__typeof__(x) __x=(x),__y=(y);(__x < __y) ? __y : __x; })
#define swap(x, y)({__typeof__(x) __x=(y);(y)=(x);(x)=__x;})
#define SUCCESSFUL "successful"
#define FAILED "failed"

#define LOCK 1
#define UNLOCK 0

#define STRINGBUFSIZ    4096

#define time_diff_us(new, old) ((unsigned)( (new.tv_sec - old.tv_sec)*1000000 + ( new.tv_usec - old.tv_usec  ) ))


extern int snprintf(char *, size_t, const char *, ...)
#ifdef __GNUC__
    __attribute__ ((format (printf, 3, 4)));

#else
;
#endif

#define ON  1
#define OFF 0
#define FALSE 0
#define TRUE  1

#endif
