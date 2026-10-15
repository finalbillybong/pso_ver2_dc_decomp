typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x2c];
    unsigned short f2c;
};
struct S_vv4 {
    char unknown0[0x86];
    unsigned short f86;
};
extern int hierarchy_is_active(void *);
void operation_8c0dd490(Object *o)
{
    S_vv4 *v4;
    unsigned int v2;
    int v1;
    int v3;
    int t1;
    v2 = (unsigned int)0;
    v1 = (int)0xffff;
    while ((unsigned int)4 > v2) {
        v3 = (int)(v2 << 2);
        v4 = (S_vv4 *)*(Arg0_5c **)((char *)((char *)o + 0x5c) + (v3));
        if (v4 != 0) {
            t1 = hierarchy_is_active((void *)v4);
            if (t1 == 0) {
                if (o->f2c == (v4->f86 & 0xffff)) {
                    o->f2c = v1;
                }
                *(int *)((char *)((char *)o + 0x5c) + (v3)) = 0;
            }
        }
        v2 = (unsigned int)(v2 + 1);
    }
}
