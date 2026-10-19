typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d0];
    short f308;
};
extern int g_8c41cd20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c2f1bcc[];
extern int allocate_block(void *, unsigned int);
extern void call_8c0edfd0(int, int, int, int, void *);
void operation_8c04621c(Object *o, int a1)
{
    int v1;
    int t1;
    if (((o->f34 & 0x2000000)) == 0) {
        v1 = (int)(o->f308 == 1);
        if (v1 == 0 && a1 != 0) {
            if (g_8c41cd20 != 0 && (unsigned int)0x1000 > (unsigned int)o->f20) {
                return;
            }
            t1 = allocate_block(g_8c4d97e0, (unsigned int)0x50);
            if (t1 != 0) {
                call_8c0edfd0(t1, a1, -0x10000, 0x14, (void *)((g_8c2f1bcc + 0xb)));
            }
        }
    }
}
