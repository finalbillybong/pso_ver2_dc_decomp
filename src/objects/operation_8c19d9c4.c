typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    float fe4;
    char unknowne8[0xc];
    float ff4;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern float squared_distance_xyz(void *, void *);
int operation_8c19d9c4(Object *o)
{
    int t1;
    int v1;
    float t2;
    int t3;
    float t4;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        t2 = squared_distance_xyz((void *)(t1 + 0x3c), (void *)(((char *)o + 0x3c)));
        if ((o->fe4 * o->fe4) > t2) {
            v1 = (int)0;
            while (0xc > v1) {
                if (v1 != (int)(g_8c418248)) {
                    t3 = lookup_low_id(v1);
                    if (t3 != 0) {
                        t4 = squared_distance_xyz((void *)(t1 + 0x3c), (void *)(t3 + 0x3c));
                        if ((o->ff4 * o->ff4) > t4) {
                            return 1;
                        }
                    }
                }
                v1 = (int)(v1 + 1);
            }
        }
    }
    return 0;
}
