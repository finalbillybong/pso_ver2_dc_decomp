typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_50 S_g8c46fe20_50;
typedef struct Object Object;
struct S_g8c46fe20 {
    char unknown0[0x50];
    S_g8c46fe20_50 *f50;
};
struct Object {
    char unknown0[0x4];
    short f04;
};
extern char g_8c3405f4[];
extern void request_resource_release(void *);
extern int call_8c24bce8(void *);
void operation_8c25e61c(Object *o)
{
    int t1;
    if (*(int *)0x8c4e2ba0 != 0) {
        if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f50 != 0) {
            request_resource_release((void *)((*(S_g8c46fe20 **)0x8c46fe20)->f50));
            (*(S_g8c46fe20 **)0x8c46fe20)->f50 = (S_g8c46fe20_50 *)0;
        }
        if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f50 != 0) {
            request_resource_release((void *)((*(S_g8c46fe20 **)0x8c46fe20)->f50));
            (*(S_g8c46fe20 **)0x8c46fe20)->f50 = (S_g8c46fe20_50 *)0;
        }
        if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f50 == 0) {
            t1 = call_8c24bce8((void *)((g_8c3405f4 + 0x11)));
            (*(S_g8c46fe20 **)0x8c46fe20)->f50 = (S_g8c46fe20_50 *)t1;
        }
        o->f04 |= 1;
    }
}
