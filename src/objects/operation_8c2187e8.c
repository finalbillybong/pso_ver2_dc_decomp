typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
typedef struct Arg0_8 Arg0_8;
struct Object {
    int tag;
    Arg0_4 *f04;
    Arg0_8 *f08;
    int f0c;
};
extern void call_8c2188ac(void);
void operation_8c2187e8(Object *o)
{
    int v1;
    int v2;
    int v3;
    v1 = (int)(((o->f0c & 1)) != 0);
    if (v1 == 0) {
        call_8c2188ac();
        v2 = (int)0;
        while (v2 != o->tag) {
            if (o->f08 != 0) {
                v3 = (int)*(int *)((char *)((char *)o->f04 + 0x0) + (*(unsigned char *)((char *)((char *)o->f08 + 0x0) + (v2)) << 3));
            } else {
                v3 = (int)*(int *)((char *)((char *)o->f04 + 0x0) + (v2 << 3));
            }
            if (v3 != 0) {
                ((void (*)(void))(v3))();
            }
            v2 = (int)(v2 + 1);
        }
        o->f0c |= 1;
    }
}
