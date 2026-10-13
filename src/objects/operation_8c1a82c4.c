typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4df894 S_g8c4df894;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
};
extern void call_8c34d6ae(void *);
extern int call_8c34da3c(void *);
extern void operation_8c104c60(void);
void operation_8c1a82c4(Object *o, int a1)
{
    int t1;
    call_8c34d6ae((void *)(o->f20));
L_8c1a82d4:;
    t1 = call_8c34da3c((void *)(o->f20));
    if (t1 != 3) {
        operation_8c104c60();
        goto L_8c1a82d4;
    }
    *(void **)0x8c4df894 = &*(int *)((char *)((char *)*(S_g8c4df894 **)0x8c4df894 + 0x0) + (a1 << 11));
}
