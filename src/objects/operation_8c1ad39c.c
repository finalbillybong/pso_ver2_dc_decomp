typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c012a14 S_c8c012a14;
typedef struct S_g8c4e2284 S_g8c4e2284;
typedef struct S_g8c4e2288 S_g8c4e2288;
typedef struct S_g8c4e228c S_g8c4e228c;
typedef struct Object Object;
typedef struct Arg0_8 Arg0_8;
struct Object {
    char unknown0[0x2];
    short f02;
    short f04;
    char unknown6[0x2];
    Arg0_8 *f08;
};
struct S_c8c012a14 {
    char unknown0[0x398];
    int f398;
};
extern S_g8c4e2284 *g_8c4e2284;
extern S_g8c4e2288 *g_8c4e2288;
extern S_g8c4e228c *g_8c4e228c;
extern S_c8c012a14 *operation_8c012a14(short);
extern void operation_8c1ae010(void *, int);
extern void call_8c1b4548(void *, void *);
extern void call_8c1b1748(void *, void *);
extern void call_8c1b8584(void *, void *);
void operation_8c1ad39c(Object *o)
{
    Object *base = o;
    S_c8c012a14 *t1;
    int v1;
    t1 = operation_8c012a14(base->f02);
    if (t1 != 0) {
        v1 = base->f04;
        if (v1 != -1 && v1 >= 0 && !(v1 >= 0x10) && v1 != t1->f398) {
            operation_8c1ae010(t1, v1);
        }
        v1 = (int)base->f08;
        if (v1 != -1) {
            switch (t1->f398) {
            case 5:
            case 6:
                if (g_8c4e2284 == 0) {
                    return;
                }
                call_8c1b4548(g_8c4e2284, (void *)v1);
                return;
            case 7:
            case 8:
            case 9:
                if (g_8c4e2288 == 0) {
                    return;
                }
                call_8c1b1748(g_8c4e2288, (void *)v1);
                return;
            case 12:
            case 13:
            case 14:
                if (g_8c4e228c != 0) {
                    call_8c1b8584(g_8c4e228c, (void *)v1);
                }
                return;
            case 10:
            case 11:
                break;
            }
        }
    }
}
