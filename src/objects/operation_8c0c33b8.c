typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
};
struct Frame {
    char unknown0[0x40];
};
extern int g_8c467874;
extern int g_8c467878;
extern float distance_xz(void *, void *);
extern float object_random_fraction(void *);
int operation_8c0c33b8(Object *o, float f0)
{
    Frame frame;
    int v1;
    int v7;
    int v6;
    int v8;
    int v5;
    float r2;
    v1 = 0;
    r2 = f0 * f0;
    if (((o->f34 & 0x10)) != 0) {
        v5 = g_8c467874 + g_8c467878;
    } else {
        v5 = g_8c467874;
    }
    v6 = 0x324;
    for (v7 = 0; v7 < v5; v7++) {
        v8 = *(int *)((char *)0x8c467240 + (v7 << 2));
        if (v8 == (int)o) {
            continue;
        }
        if (v8 == 0) {
            break;
        }
        if (r2 > distance_xz((void *)(v8 + v6), (void *)((int)o + v6))) {
            *(short *)((char *)&frame + (v1 << 1)) = v7;
            v1++;
            if (v1 >= 0x20) {
                break;
            }
        }
    }
    if (v1 == 0) {
        return 0xffff;
    }
    return *(unsigned short *)((char *)&frame + ((int)((float)v1 * object_random_fraction((void *)o)) << 1));
}
