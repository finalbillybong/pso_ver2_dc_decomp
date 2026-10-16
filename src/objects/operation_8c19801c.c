typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
};
struct S_vv1 {
    char unknown0[0x2c];
    int f2c;
};
extern int lookup_low_id(int);
extern int call_8c1ac704(int, int, int);
extern void call_8c10393c(S_vv1 *, int, int);
extern void operation_8c103ac8(void *, void *, int, int);
void operation_8c19801c(Object *o, Arg1 *a1, int a2, int a3)
{
    S_vv1 *v1;
    int v2;
    int t1;
    int t2;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        v1 = (S_vv1 *)*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (*(unsigned char *)((char *)((char *)a1 + 0x0) + ((int)((void *)0x8c2878d0))) << 2));
        v2 = (int)*(int *)((char *)((char *)o->f30 + 0x0) + (*(unsigned char *)((char *)((char *)a1 + 0x0) + ((int)((void *)0x8c2878d6))) << 2));
        t2 = call_8c1ac704(t1, a2, a3);
        if (t2 != 0) {
            v1->f2c = -1;
        } else {
            v1->f2c = -0xbfbfc0;
        }
        call_8c10393c(v1, a2, a3);
        operation_8c103ac8((void *)v2, (void *)v1, a2, a3);
    }
}
