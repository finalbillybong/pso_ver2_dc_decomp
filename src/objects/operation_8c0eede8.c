typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    int fe4;
    char unknowne8[0x20];
    int f108;
};
extern int g_8c2e2ad8;
extern int call_8c0eea7c(Object *, float);
extern void operation_8c05426c(void *, int, int);
extern int current_effect_mode(void);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c0eede8(Object *o)
{
    int t1;
    int t2;
    if ((o->f108 & 1) == 1) {
        t1 = call_8c0eea7c(o, 4900.0f);
        if (t1 == 1) {
            o->fe4 = 1;
            operation_8c05426c((void *)o, 0, 0x10);
            t2 = current_effect_mode();
            switch (t2) {
            case 3:
            case 4:
            case 5:
                call_8c05fbf8(0x40007, (void *)(((char *)o + 0x3c)), 0, 0);
                return;
            case 6:
            case 7:
                call_8c05fbf8(0x40001, (void *)(((char *)o + 0x3c)), 0, 0);
                return;
            case 8:
            case 9:
            case 10:
                call_8c05fbf8(0x40008, (void *)(((char *)o + 0x3c)), 0, 0);
                return;
            case 16:
            case 17:
                if (g_8c2e2ad8 == 1) {
                    call_8c05fbf8(0x4000b, (void *)(((char *)o + 0x3c)), 0, 0);
                }
                return;
            case 0:
            case 1:
            case 2:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                break;
            }
        }
    }
}
