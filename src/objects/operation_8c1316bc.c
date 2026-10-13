typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x108];
    int f108;
};
extern int current_effect_mode(void);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c1316bc(Object *o)
{
    int t1;
    if (((o->f108 & 1)) == 0) {
        t1 = current_effect_mode();
        switch (t1) {
        case 0:
            call_8c05fbf8(0x40004, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
        case 1:
        case 2:
            call_8c05fbf8(0x40007, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
        case 3:
        case 4:
        case 5:
            call_8c05fbf8(0x40007, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
        case 6:
        case 7:
            call_8c05fbf8(0x40000, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
        case 8:
        case 9:
        case 10:
            call_8c05fbf8(0x40007, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            break;
        }
    }
}
