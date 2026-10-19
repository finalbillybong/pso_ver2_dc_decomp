typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9b48 S_g8c4d9b48;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern int g_8c4d9b44;
extern S_g8c4d9b48 *g_8c4d9b48;
extern int g_8c4d9b4c;
extern int operation_8c1692c0(void);
extern void operation_8c1222c8(int, int);
extern void call_8c122410(int);
void operation_8c1373c0(Object *o)
{
    int t1;
    t1 = operation_8c1692c0();
    if (t1 == 0) {
        switch (o->f20) {
        case 0:
            if (g_8c4d9b44 > 0) {
                if (g_8c4d9b4c != 0) {
                    operation_8c1222c8((int)g_8c4d9b48, 0);
                } else {
                    operation_8c1222c8((int)g_8c4d9b48, 1);
                }
                g_8c4d9b44 = 0;
                return;
            }
            o->f20 = 1;
            if (g_8c4d9b4c != 0) {
                call_8c122410(0);
                return;
            }
            call_8c122410(1);
            return;
        case 1:
            if (g_8c4d9b44 > 0) {
                g_8c4d9b44 = 0;
                o->f20 = 0;
            }
        }
    }
}
