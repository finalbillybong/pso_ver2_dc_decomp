typedef struct { int a, b; } Pair;
extern void func_8c366d48(int, int, int *);
extern int func_8c35978e(int *, int *);

int pair_compare_8c359848(int a, int b, int c, int d)
{
    int p[2], q[2];
    func_8c366d48(a, d, p);
    func_8c366d48(c, b, q);
    return func_8c35978e(p, q);
}
