typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
    char unknownf2[0x8e];
    float f180;
    char unknown184[0x186];
    short f30a;
    char unknown30c[0x48];
    float f354;
};
extern void call_8c01c5f0(Object *);
extern int lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
void operation_8c12964c(Object *o)
{
    int v4;
    int v2;
    int v1;
    int v3;
    int t1;
    float t2;
    call_8c01c5f0(o);
    v1 = 0;
    if (!(o->f180 < o->f354)) {
        v1 = 1;
    } else {
        for (v3 = 0; (unsigned short)v3 < *(int *)0x8c467874; v3++) {
            t1 = lookup_low_id((int)((unsigned short)v3));
            if (t1 != 0) {
                t2 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)(t1 + 0x3c));
                if (6400.0f > t2) {
                    v1 = 1;
                }
            }
        }
    }
    if (v1 != 0) {
        o->f30a = 1;
        o->ff0 = o->f30a;
        o->f180 = -1.0f;
    }
}
