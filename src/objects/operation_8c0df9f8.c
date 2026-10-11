typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x94];
    int f94;
};
struct S_c8c021ef8 {
    char unknown0[0x308];
    short f308;
};
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c0df9f8(Object *o, int a1)
{
    int v1;
    S_c8c021ef8 *t1;
    o->f94 = -0x70708;
    if (!((unsigned int)(unsigned short)a1 >= (unsigned int)0xc)) {
        t1 = lookup_low_id((unsigned short)a1);
        if (t1 != 0) {
            v1 = (int)(t1->f308 == 3);
            if (v1 == 0) {
                o->f94 = *(int *)((char *)0x8c2858e0 + ((unsigned short)a1 << 2));
            }
        }
    }
}
