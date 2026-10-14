typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct Object Object;
struct Object {
    char unknown0[0x94];
    float f94;
    int f98;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
extern int lookup_low_id(int);
extern float squared_distance_xyz(void *, void *);
void operation_8c1c44a8(Object *o)
{
    int t1;
    float t2;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = squared_distance_xyz((void *)(((char *)o + 0x3c)), (void *)(t1 + 0x3c));
        if ((o->f94 * o->f94) > t2) {
            if (((o->f98 & 1)) != 0) {
                return;
            }
            if (*(int *)0x8c4d59d8 != 0) {
                (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 |= 0x10;
            }
            o->f98 = 1;
            return;
        }
        if (((o->f98 & 1)) != 0) {
            if (*(int *)0x8c4d59d8 != 0) {
                (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 &= -0x11;
            }
            o->f98 = 0;
        }
    }
}
