typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg2 Arg2;
struct Arg2 {
    int f00;
};
extern int call_8c12b0cc(void);
extern int fits_8c20b4f4(int, void *);
extern void call_8c12b154(int, int, int);
void operation_8c20b404(int a0, int a1, Arg2 *a2)
{
    int t1;
    int t2;
    if (a0 != 0) {
        t1 = call_8c12b0cc();
        t2 = fits_8c20b4f4(t1, (void *)a2);
        if (t2 != 0) {
            call_8c12b154(a1 + a2->f00, a0, t1);
            a2->f00 += t1;
        }
    }
}
