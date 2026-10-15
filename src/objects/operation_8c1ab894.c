typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    float f24;
    char f28;
    char unknown29[0x1e];
    char f47;
};
extern void call_8c12b154(void *, int, int);
extern int call_8c087268(void *);
void operation_8c1ab894(Object *o, int a1)
{
    int t1;
    if (a1 == 0) {
        o->f28 = 0;
        o->f24 = 0.0f;
        return;
    }
    call_8c12b154((void *)(&o->f28), a1, 0x1f);
    o->f47 = 0;
    t1 = call_8c087268((void *)(&o->f28));
    o->f24 = (float)(unsigned int)t1;
}
