typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d0];
    short f308;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c2f1bcc[];
extern int allocate_block(void *, unsigned int);
extern void operation_8c0ee300(void *, int, int, int, int, int, short);
void operation_8c046414(Object *o, int a1, int a2, int a3)
{
    int v1;
    int v3;
    int t1;
    if (((o->f34 & 0x2000000)) == 0 && a1 != 0) {
        v1 = (int)(o->f308 == 1);
        v3 = (int)0x14;
        if (v1 != 0) {
            v3 = v3 * 2;
        }
        t1 = allocate_block(g_8c4d97e0, (unsigned int)0x50);
        if (t1 != 0) {
            operation_8c0ee300((void *)t1, a1, -0x100, v3, a2, (int)(g_8c2f1bcc + 0x16), (short)a3);
        }
    }
}
