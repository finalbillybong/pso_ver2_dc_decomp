typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_4cc S_g8c467180_2c_4cc;
typedef struct Object Object;
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x4cc];
    S_g8c467180_2c_4cc *f4cc;
};
struct Object {
    char unknown0[0x24];
    int f24;
};
extern S_g8c467180 *g_8c467180;
extern int call_8c223298(Object *);
extern void operation_8c220be8(int, int);
extern void operation_8c2222e4(void *);
extern void operation_8c22232c(void *);
extern void call_8c222398(Object *);
extern void call_8c222514(Object *);
extern void call_8c22259c(Object *);
extern void call_8c2227d0(Object *);
extern void operation_8c222920(void *);
extern void operation_8c2229e0(void *);
extern void operation_8c222a20(void *);
extern void operation_8c222ab8(void *);
extern void operation_8c222c20(void *);
extern void operation_8c222cec(void *);
extern void operation_8c222e50(void *);
extern void operation_8c222f28(void *);
extern void operation_8c223078(void *);
extern void operation_8c223130(Object *);
extern void operation_8c223134(void *);
extern void operation_8c223174(void *);
extern void operation_8c2231b4(void *);
void operation_8c222138(Object *o)
{
    int t1;
    t1 = call_8c223298(o);
    if (t1 != 0) {
        operation_8c220be8((int)(g_8c467180->f2c->f4cc), 1);
        o->f24 = 0x12;
    }
    switch (o->f24) {
    case 0:
        operation_8c2222e4((void *)o);
        return;
    case 1:
        operation_8c22232c((void *)o);
        return;
    case 2:
        call_8c222398(o);
        return;
    case 3:
        call_8c222514(o);
        return;
    case 4:
        call_8c22259c(o);
        return;
    case 5:
        call_8c2227d0(o);
        return;
    case 6:
        operation_8c222920((void *)o);
        return;
    case 7:
        operation_8c2229e0((void *)o);
        return;
    case 8:
        operation_8c222a20((void *)o);
        return;
    case 9:
        operation_8c222ab8((void *)o);
        return;
    case 15:
        operation_8c222c20((void *)o);
        return;
    case 10:
        operation_8c222cec((void *)o);
        return;
    case 11:
        operation_8c222e50((void *)o);
        return;
    case 12:
        operation_8c222f28((void *)o);
        return;
    case 13:
        operation_8c223078((void *)o);
        return;
    case 14:
        operation_8c223130(o);
        return;
    case 16:
        operation_8c223134((void *)o);
        return;
    case 18:
        operation_8c223174((void *)o);
        return;
    case 17:
        operation_8c2231b4((void *)o);
        return;
    }
}
