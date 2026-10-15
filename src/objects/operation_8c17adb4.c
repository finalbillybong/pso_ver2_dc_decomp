typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_234 Arg0_234;
typedef struct Arg0_238 Arg0_238;
struct Object {
    char unknown0[0x234];
    Arg0_234 *f234;
    Arg0_238 *f238;
};
extern void call_8c37e02c(int, int);
extern void call_8c37dd28(int, void *);
void operation_8c17adb4(Object *o)
{
    if (*(int *)0x8c4689f0 != 1) {
        if (*(int *)0x8c4689f0 == 2) {
            goto L_8c17adda;
        }
        if (*(int *)0x8c4689f0 == 3) {
            goto L_8c17ade8;
        }
        return;
    }
    call_8c37e02c(0, (int)(-(int)(o->f238)));
    return;
L_8c17adda:;
    call_8c37e02c(0, (int)(o->f238));
    return;
L_8c17ade8:;
    call_8c37dd28(0, (void *)(o->f234));
}
