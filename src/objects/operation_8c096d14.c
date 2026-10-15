typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x70];
    float f70;
    int f74;
    int f78;
    char unknown7c[0xc];
    int f88;
};
extern int operation_8c09a640(int);
void operation_8c096d14(Object *o)
{
    int t1;
    t1 = operation_8c09a640(0x6f0);
    if (t1 != 0) {
        o->f88 = 0;
        *(int *)0x8c469e48 = 4;
        return;
    }
    o->f88 += 1;
    if (((o->f88 & 0x100)) != 0) {
        if (o->f74 > -0x6d && 0x6d > o->f74) {
            o->f74 = 0;
        } else {
            if (!(o->f74 >= 0)) {
                o->f74 += 0x6d;
            } else {
                o->f74 -= 0x6d;
            }
        }
        switch (o->f88 >> 9 & 3) {
        case 0:
            o->f78 += 0xda;
            return;
        case 1:
            o->f70 += -0.0333333351f;
            return;
        case 2:
            o->f78 += -0xda;
            return;
        case 3:
            o->f70 += 0.0333333351f;
        }
    }
}
