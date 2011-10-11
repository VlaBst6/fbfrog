// type T2 : ... : end type
// type TT2 as T2
// (Both ids might be needed)
typedef struct T2 {
	int a;
	double x;
} TT2;

// type TT3 : ... : end type
typedef struct {
	int a;
	double x;
} TT3;

// type T1 : ... : end type
// (also, any places using <struct T1> will become just <T1>, so they work ok)
struct T1 {
	signed int i;
#if 1
	unsigned long long int j;
#endif
	unsigned k;
	double a,b,c;
	struct T2 ****y;
};

typedef struct { int a; } T3;
