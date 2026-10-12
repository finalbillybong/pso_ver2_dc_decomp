typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
    int f08;
    int f0c;
};
extern void call_8c245768(Object *);
void operation_8c245728(Object *o, int a1)
{
    int v1;
    o->f08 = 0;
    o->f0c = a1;
    v1 = (int)0;
    while (o->f0c > v1) {
        *(int *)((char *)((char *)o->f04 + 0x0) + (v1 << 2)) = v1;
        v1 = (int)(v1 + 1);
    }
    call_8c245768(o);
    call_8c245768(o);
    call_8c245768(o);
    call_8c245768(o);
}
