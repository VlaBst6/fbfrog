struct UDT {
	signed int i;
	unsigned long long int j;
	unsigned k;
	double a,b,c;

	int **a, *a, a;
	int a, **a, **a;
	int *a, a, a, **a, **a, a;

	struct T ****y;
	struct T *a, ****a, a;

	int *(*p)(int*);
	int f(int, int);
	void proc(void);

	int a;
#if 1
	int b;
#endif
	int c;
};

struct UDT {
	int a;
	int **a;
	int a, b;
	int  *a, b, *c, ***d;
	int a[20];
	void (*p[40])(void);

	void f(void);
	int f(void);
	void f();
	UDT **f(void);
	void f(int *a, int ***b);

	void (*a)(void);
	int (*a)(int);
	int (*a)(int a), (*b)(int a), c;
	int a, (*b)(int a), c, (*d)(int a);
	int **(*a)(int);

	void f(void (*a)(void));
	void f(void (*)(void));

	void (*a)(void (*a)(void));
	int ***(*p)(int ***(*)(int ***));
};
