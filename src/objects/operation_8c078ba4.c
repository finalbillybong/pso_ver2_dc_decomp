typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
struct Arg0_2c {
    char unknown0[0x4];
    short f04;
};
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c078ba4(Object *o, int a1)
{
    int v2;
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c263e1c;
        v1 = (int)0;
        while ((v1 << 4) != 0) {
            v2 = (int)(v1 << 2);
            if (*(int *)((char *)((char *)o + 0x2c) + (v2)) != 0) {
                (*(Arg0_2c **)((char *)((char *)o + 0x2c) + (v2)))->f04 |= 1;
                *(int *)((char *)((char *)o + 0x2c) + (v2)) = 0;
            }
            v1 = (int)(v1 + 1);
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
