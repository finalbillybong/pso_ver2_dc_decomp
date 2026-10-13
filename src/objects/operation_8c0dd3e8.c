typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
typedef struct Arg0_58 Arg0_58;
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x32];
    Arg0_54 *f54;
    Arg0_58 *f58;
};
struct Arg0_58 {
    char unknown0[0x4];
    short f04;
};
extern int operation_8c1dd614(void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c20937c(int, Object *);
void operation_8c0dd3e8(Object *o)
{
    int v1;
    int t1;
    int t2;
    if (((*(unsigned short *)0x8c46fe24 & 2)) != 0) {
        if (*(int *)0x8c4dbde0 == 0) {
            v1 = (int)0;
        } else {
            v1 = (int)((*(S_g8c4dbde0 **)0x8c4dbde0)->f20 & 1);
        }
        if (v1 == 0 && ((o->f20 & 1)) == 0) {
            if (o->f54 == 0) {
                goto L_8c0dd44a;
            }
            t1 = operation_8c1dd614((void *)(o->f54));
            if (t1 == 0) {
                goto L_8c0dd44a;
            }
        }
    }
    if (o->f58 != 0) {
        o->f58->f04 |= 1;
        o->f58 = (Arg0_58 *)0;
        return;
L_8c0dd44a:;
        if (o->f58 == 0) {
            t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x30);
            if (t2 != 0) {
                call_8c20937c(t2, o);
            }
            o->f58 = (Arg0_58 *)t2;
        }
    }
}
