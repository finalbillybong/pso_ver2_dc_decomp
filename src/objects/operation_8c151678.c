typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
};
extern void update_phase_8c151a74(void *);
extern void call_8c151a44(Object *);
extern void call_8c151850(Object *);
extern void call_8c151938(Object *);
void operation_8c151678(Object *o)
{
    if (o->f30a != 0) {
        if (o->f30a == 1) {
            goto L_8c15169e;
        }
        if (o->f30a == 4) {
            goto L_8c1516a8;
        }
        if (o->f30a == 5) {
            goto L_8c1516b2;
        }
        return;
    }
    update_phase_8c151a74((void *)o);
    return;
L_8c15169e:;
    call_8c151a44(o);
    return;
L_8c1516a8:;
    call_8c151850(o);
    return;
L_8c1516b2:;
    call_8c151938(o);
}
