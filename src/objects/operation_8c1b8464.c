typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x24];
    float f3b8;
    int f3bc;
};
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c1b8464(Object *o)
{
    float v1;
    v1 = (float)o->f3b8;
    if (o->f390 == 2 || o->f390 == 3) {
        if ((o->f3b8 += 0.1f) > 1.0f) {
            o->f3b8 = 1.0f;
        }
        return;
    }
    *(int *)((char *)o + 0x3bc) += 1;
    if (0x78 > o->f3bc) {
        o->f3b8 = 1.0f;
    } else if (0x96 > o->f3bc) {
        if (0.0f > (o->f3b8 += -0.0333333351f)) {
            o->f3b8 = 0.0f;
        }
    } else if (0x10e > o->f3bc) {
        o->f3b8 = 0.0f;
    } else if (0x12c > o->f3bc) {
        if ((o->f3b8 += 0.0333333351f) > 1.0f) {
            o->f3b8 = 1.0f;
        }
    } else {
        o->f3b8 = 1.0f;
        o->f3bc = 0;
    }
    if ((v1 == 0.0f && o->f3b8 > 0.0f) || (v1 == 1.0f && 1.0f > o->f3b8)) {
        call_8c05fbf8(0x3002f, (void *)(((char *)o + 0x3c)), 0, 1);
    }
    if (v1 > 0.0f && o->f3b8 == 0.0f) {
        call_8c05fbf8(0x30030, (void *)(((char *)o + 0x3c)), 0, 1);
    }
}
