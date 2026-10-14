typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
struct Object {
    char unknown0[0x64];
    int f64;
    char f68;
    char unknown69[0x7];
    Arg0_70 *f70;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern void call_8c197640(void);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c197804(void *);
extern void operation_8c197844(void *);
extern void operation_8c197884(void *);
extern void operation_8c197ab8(int);
extern void call_8c1979e8(Object *);
extern void call_8c197c58(Object *);
extern void call_8c199b74(void *);
extern void call_8c0db30c(Object *);
extern void update_view_nodes(void *, void *);
void operation_8c197514(Object *o)
{
    int t1;
    int t2;
    if (((o->f68 & 1)) == 0) {
        call_8c197640();
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t1 == 0) {
                goto L_8c19754c;
            }
        }
        operation_8c197804((void *)o);
L_8c19754c:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            t2 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
            if (t2 == 0) {
                goto L_8c19756a;
            }
        }
        operation_8c197844((void *)o);
    }
L_8c19756a:;
    operation_8c197884((void *)o);
    operation_8c197ab8((int)o);
    call_8c1979e8(o);
    call_8c197c58(o);
    if (!(7.5f > (float)o->f64)) {
        call_8c199b74((void *)(o->f70));
    }
    call_8c0db30c(o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
