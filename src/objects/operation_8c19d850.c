typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    float fe4;
};
extern int lookup_low_id(int);
extern float squared_distance_xyz(void *, void *);
int operation_8c19d850(Object *o)
{
    int v2;
    int v1;
    int v3;
    int t1;
    float t2;
    v1 = (int)0x308;
    v2 = (int)0;
    while (0xc > v2) {
        t1 = lookup_low_id(v2);
        if (t1 != 0) {
            v3 = (int)(*(short *)((char *)((char *)t1 + 0x0) + (v1)) == 3);
            if (v3 == 1) {
                t2 = squared_distance_xyz((void *)(t1 + 0x3c), (void *)(((char *)o + 0x3c)));
                if ((o->fe4 * o->fe4) > t2) {
                    return 1;
                }
            }
        }
        v2 = (int)(v2 + 1);
    }
    return 0;
}
