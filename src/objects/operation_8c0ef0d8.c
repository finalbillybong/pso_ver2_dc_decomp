typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
    float fe8;
    char unknownec[0x4];
    float ff0;
};
extern int current_effect_mode(void);
extern void call_8c05fd7c(int, Object *, void *, int, int);
void operation_8c0ef0d8(Object *o)
{
    int t1;
    o->fe8 -= o->ff0;
    if (0.0f > o->fe8) {
        o->fe8 = 0.0f;
        o->fe4 = 0;
    }
    t1 = current_effect_mode();
    switch (t1) {
    case 1:
    case 2:
        call_8c05fd7c(0x40008, o, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
        break;
    }
}
