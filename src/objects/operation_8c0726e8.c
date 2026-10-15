typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0xac];
    short ff0;
    char unknownf2[0x506];
    float f5f8;
    float f5fc;
};
struct S_vv1 {
    int f00;
};
extern void operation_8c059ea4(void *, int);
extern int lookup_low_id(int);
void operation_8c0726e8(Object *o, int a1)
{
    S_vv1 *v1;
    int t1;
    int t2;
    int t3;
    int t4;
    v1 = (S_vv1 *)((char *)o + 0x82c);
    switch (a1) {
    case 4:
        o->ff0 = 0;
        v1->f00 = 0;
        o->f40 = 0.0f;
        o->f5fc = 300.0f;
        o->f5f8 = o->f5fc + o->f40;
        return;
    case 3:
        if (!(v1->f00 > 0x96)) {
            return;
        }
        operation_8c059ea4((void *)o, 8);
        return;
    case 0:
        t1 = lookup_low_id(0);
        if (t1 == 0) {
            t2 = lookup_low_id(1);
            if (t2 == 0) {
                t3 = lookup_low_id(2);
                if (t3 == 0) {
                    t4 = lookup_low_id(3);
                    if (t4 == 0) {
                        return;
                    }
                }
            }
        }
        v1->f00 += 1;
        return;
    case 1:
    case 2:
    case 5:
        break;
    }
}
