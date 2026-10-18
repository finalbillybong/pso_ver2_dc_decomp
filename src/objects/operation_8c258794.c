typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern char g_8c340080[];
extern void operation_8c1005bc(int);
extern void call_8c05fbf8(int, int, int, int);
extern int current_effect_mode(void);
void operation_8c258794(Object *o)
{
    int t1;
    int t2;
    switch (o->f20) {
    case 1:
        operation_8c1005bc((int)(g_8c340080 + 0x71));
        return;
    case 2:
        call_8c05fbf8(0x50006, 0, 0, 0);
        return;
    case 3:
        t1 = current_effect_mode();
        if (t1 == 0x10) {
            return;
        }
        if (t1 == 0x11) {
            return;
        }
        call_8c05fbf8(0x50012, 0, 0, 0);
        return;
    case 4:
        t2 = current_effect_mode();
        if (t2 == 0x10) {
            return;
        }
        if (t2 == 0x11) {
            return;
        }
        call_8c05fbf8(0x50013, 0, 0, 0);
        return;
    case 5:
        call_8c05fbf8(0x10012, 0, 0, 0);
        return;
    case 6:
        call_8c05fbf8(0x2000b, 0, 0, 0);
        return;
    }
}
