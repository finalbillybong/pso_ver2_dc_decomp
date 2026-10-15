typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0xf0];
    short ff0;
};
struct S_vv1 {
    int f00;
};
extern void call_8c01c5f0(Object *);
void operation_8c094a44(Object *o, int a1)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)((char *)o + 0x48c);
    switch (a1) {
    case 4:
        o->ff0 = 0;
        v1->f00 = 0;
        return;
    case 0:
        call_8c01c5f0(o);
        v1->f00 += 1;
        if (v1->f00 > 0x5a) {
            v1->f00 = 0;
            o->ff0 += 1;
            if (o->ff0 >= 7) {
                o->ff0 = 0;
            }
        }
        return;
    case 1:
    case 2:
    case 3:
    case 5:
        break;
    }
}
