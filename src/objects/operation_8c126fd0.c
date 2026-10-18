typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x358];
    short f358;
    char unknown35a[0x3e];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x48];
    int f3f0;
};
extern void request_actor_mode_zero_8c1275a8(void *);
extern void call_8c126650(Object *, int);
extern void call_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
void operation_8c126fd0(Object *o)
{
    int v1;
    switch (o->f398) {
    case -1:
        break;
    case 0:
        v1 = (int)(((o->f3a4 & 0x1000000)) != 0);
        if (v1 == 0) {
            request_actor_mode_zero_8c1275a8((void *)o);
            return;
        }
        o->f3f0 = 0;
        call_8c126650(o, 0);
        o->f358 = 0x1e;
        o->f398 = 1;
        return;
    case 1:
        call_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        *(short *)((char *)o + 0x358) -= 1;
        if (!(o->f358 > 0)) {
            request_actor_mode_zero_8c1275a8((void *)o);
        }
    }
}
