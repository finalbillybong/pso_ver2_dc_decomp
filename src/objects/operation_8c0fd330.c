typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_60 Arg0_60;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0x14];
    float f58;
    char unknown5c[0x4];
    Arg0_60 *f60;
    char unknown64[0x2ec];
    int f350;
};
extern float call_8c37eb0c(void *);
extern void update_object_center(void *);
extern void transform_actor_records(void *);
void operation_8c0fd330(Object *o)
{
    float t1;
    if (((o->f350 & 2)) == 0) {
        o->f40 = (o->f58 + 25.0f - o->f40) * 0.5f + 1.0f + o->f40;
        if ((o->f58 + 25.0f) > o->f40) {
            goto L_8c0fd39c;
        }
        o->f40 = o->f58 + 25.0f;
        o->f350 |= 2;
    } else {
        o->f60 = (Arg0_60 *)((int)o->f60 + 0x800);
        t1 = call_8c37eb0c((void *)(o->f60));
        o->f40 += t1;
    }
L_8c0fd39c:;
    update_object_center((void *)o);
    transform_actor_records((void *)o);
}
