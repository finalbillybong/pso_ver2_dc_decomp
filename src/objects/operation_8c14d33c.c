typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4da624 S_g8c4da624;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x5c];
    int f368;
};
extern int g_8c418244;
extern S_g8c4da624 *g_8c4da624;
extern int g_8c4da628;
extern void call_8c0344f0(void *, int, int, int);
extern int current_effect_mode(void);
extern void call_8c05fd7c(int, Object *, void *, int, int);
void operation_8c14d33c(Object *o)
{
    int v2;
    int v1;
    int t1;
    v1 = (int)g_8c418244;
    v2 = (int)g_8c4da628;
    if (v2 != v1) {
        g_8c4da628 = (int)(v1);
        call_8c0344f0(g_8c4da624, 0, 0xe, 1);
    }
    o->f368 += 0x888;
    switch (o->f30a) {
    case 1:
    case 2:
    case 3:
        t1 = current_effect_mode();
        switch (t1) {
        case 3:
        case 4:
        case 5:
            call_8c05fd7c(0x4001b, o, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
        case 6:
        case 7:
            call_8c05fd7c(0x40012, o, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
        case 8:
        case 9:
        case 10:
            call_8c05fd7c(0x40018, o, (void *)(((char *)o + 0x3c)), 0, 0);
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
