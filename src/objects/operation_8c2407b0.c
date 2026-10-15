typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_240 Arg0_240;
struct Object {
    char unknown0[0x240];
    Arg0_240 *f240;
};
extern void call_8c37dd28(int, void *);
extern void call_8c37e390(void *);
void operation_8c2407b0(Object *o)
{
    if (*(int *)0x8c4689f0 != 1) {
        if (*(int *)0x8c4689f0 == 2) {
            goto L_8c2407d4;
        }
        if (*(int *)0x8c4689f0 == 3) {
            goto L_8c2407e2;
        }
        return;
    }
    call_8c37dd28(0, (void *)(o->f240));
    return;
L_8c2407d4:;
    call_8c37e390((void *)(((char *)o + 0x234)));
    return;
L_8c2407e2:;
    call_8c37dd28(0, (void *)(-(int)(o->f240)));
}
