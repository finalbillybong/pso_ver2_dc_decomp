typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
struct Object {
    char unknown0[0x94];
    Arg0_94 *f94;
};
struct Arg0_94 {
    char unknown0[0x4];
    short f04;
};
extern int lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern int player_flag9_8c026508(void);
int operation_8c192084(Object *o, float f0)
{
    int t1;
    float t2;
    int t3;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = squared_distance_xz((void *)(t1 + 0x3c), (void *)(((char *)o + 0x3c)));
        if ((f0 * f0) > t2) {
            if (o->f94 != 0) {
                t3 = player_flag9_8c026508();
                if (t3 == 0) {
                    o->f94->f04 &= -5;
                    o->f94->f04 &= -0x11;
                } else {
                    o->f94->f04 |= 4;
                    o->f94->f04 |= 0x10;
                }
            }
            return 1;
        }
    }
    if (o->f94 != 0) {
        o->f94->f04 |= 4;
        o->f94->f04 |= 0x10;
    }
    return 0;
}
