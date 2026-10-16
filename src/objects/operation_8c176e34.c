typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db6c0 S_L8c4db6c0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
};
struct Arg0_20 {
    Vector3 f00;
};
struct S_L8c4db6c0 {
    Vector3 f00;
    Vector3 f0c;
};
struct Arg0_24 {
    Vector3 f00;
};
extern S_L8c4db6c0 g_8c4db6c0;
extern void set_child_blend(void);
extern void call_8c38e354(void *, int, int);
extern void restore_child_blend(void);
void operation_8c176e34(Object *o)
{
    *(Vector3 *)&(&g_8c4db6c0)->f00 = *(Vector3 *)&o->f20->f00;
    *(Vector3 *)&(&g_8c4db6c0)->f0c = *(Vector3 *)&o->f24->f00;
    set_child_blend();
    call_8c38e354((void *)((void *)0x8c3193b4), 1, 0x40);
    restore_child_blend();
}
