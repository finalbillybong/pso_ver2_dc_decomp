typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x24];
    int f24;
    int f28;
    Arg0_2c *f2c;
};
extern int call_8c34da3c(void *);
extern void call_8c34d4e8(void *);
extern int operation_8c03ed64(void);
extern void operation_8c22c1c4(void *);
extern void operation_8c22c190(void *);
extern void operation_8c22c100(void *, int);
void operation_8c22bfcc(Object *o)
{
    char *v41;
    char *v1;
    int t1;
    int t2;
    int t3;
    v41 = (char *)o->f24;
    if ((int)(v41) == 1) {
        t1 = call_8c34da3c((void *)(o->f2c));
        if (t1 != 1) {
            if (t1 == 2) {
                return;
            }
            if (t1 != 3) {
                if (t1 == 4) {
                    goto L_8c22c014;
                }
                return;
            }
            call_8c34d4e8((void *)(o->f2c));
            t2 = operation_8c03ed64();
            if (t2 != 0) {
                operation_8c22c1c4((void *)o);
                return;
            }
            o->f24 = 3;
            return;
        }
L_8c22c014:;
        v1 = (char *)o->f28;
        operation_8c22c190((void *)o);
        operation_8c22c100((void *)o, (int)(v1));
        return;
    }
    if ((int)(v41) == 3) {
        t3 = operation_8c03ed64();
        if (t3 != 0) {
            operation_8c22c1c4((void *)o);
        }
    }
}
