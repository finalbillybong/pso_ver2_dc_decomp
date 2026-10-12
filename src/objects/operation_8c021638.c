typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d0];
    short f308;
    char unknown30a[0x7e];
    int f388;
};
extern void call_8c020bd0(Object *);
extern int replace_low_id_object(void *);
int operation_8c021638(Object *o, int a1)
{
    int v11;
    int t1;
    o->f388 = a1;
    if (4 > a1) {
        o->f308 = 1;
    } else {
        if (a1 == 4) {
            o->f308 = 2;
        } else {
            if (a1 == 5) {
                o->f308 = 3;
            } else {
                if (a1 == 6) {
                    o->f308 = 6;
                } else {
                    if (a1 == 7) {
                        o->f308 = 7;
                    } else {
                        return 0;
                    }
                }
            }
        }
    }
    o->f34 |= 0x10000000;
    call_8c020bd0(o);
    t1 = replace_low_id_object((void *)o);
    v11 = (int)(t1 != 1);
    return v11;
}
