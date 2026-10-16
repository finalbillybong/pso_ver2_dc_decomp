typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x394];
    float f394;
};
struct S_vv5 {
    char unknown0[0x34];
    int f34;
};
extern float squared_distance_xz(void *, void *);
extern void call_8c161a80(Object *, S_vv5 *);
extern void call_8c161afc(Object *, void *);
void operation_8c161874(Object *o)
{
    S_vv5 *v5;
    int v4;
    int v1;
    int v2;
    float v3;
    float t1;
    v1 = (int)0x2000a00;
    v3 = (float)(o->f394 * o->f394);
    v4 = (int)0;
    v2 = (int)0x324;
    while (*(int *)0x8c467874 > v4) {
        v5 = (S_vv5 *)*(S_g8c467240 **)((char *)0x8c467240 + (v4 << 2));
        if (v5 != 0 && ((v5->f34 & v1)) == 0) {
            t1 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)((int)v5 + v2));
            if (!(t1 > v3)) {
                call_8c161a80(o, v5);
            }
        }
        v4 = (int)(v4 + 1);
    }
    call_8c161afc(o, (void *)(((char *)o + 0x3c)));
}
