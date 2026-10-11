typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
typedef struct Block_c8c021ef8_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_c8c021ef8_3c;
struct Object {
    char unknown0[0x3c];
    Block_c8c021ef8_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x6c4];
    unsigned short f72c;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Block_c8c021ef8_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x314];
    int f37c;
    char unknown380[0x248];
    int f5c8;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void operation_021fcc(S_c8c021ef8 *);
void operation_8c067f24(Object *o)
{
    S_c8c021ef8 *t1;
    t1 = lookup_low_id(o->f72c & 0xffff);
    if (t1 != 0) {
        if (t1->f37c == *(int *)0x8c44be04) {
            operation_021fcc(t1);
            t1->f5c8 = 0x14;
            t1->f34 &= -0x100021;
            t1->f3c = o->f3c;
            t1->f3c.f04 -= 200.0f;
            t1->f64 = o->f64;
            return;
        }
    }
    *(int *)0x8c4689b8 = 0;
}
