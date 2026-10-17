typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0x8];
    int f94;
};
extern int current_effect_mode(void);
extern void call_8c05fd7c(int, Object *, void *, int, int);
void operation_8c04fa44(Object *o)
{
    int v3;
    int t1;
    t1 = current_effect_mode();
    switch (t1) {
    case 3:
    case 4:
    case 5:
        call_8c05fd7c(0x30009, o, (void *)(((char *)o + 0x3c)), 0, 0);
        break;
    case 16:
    case 17:
        if (*(int *)0x8c2e2ad8 == 1) {
            call_8c05fd7c(0x3001e, o, (void *)(((char *)o + 0x3c)), 0, 0);
        }
    }
    v3 = (int)o->f88;
    o->f88 = v3 + -1;
    if (!(v3 >= 0)) {
        o->f94 = 2;
    }
}
