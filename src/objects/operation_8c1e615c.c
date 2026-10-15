typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern S_g8c44be84 *g_8c44be84;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c4e30e4;
extern int allocate_block(void *, unsigned int);
extern void initialize_color_rise(int, void *, void *);
extern void operation_8c1e627c();
void operation_8c1e615c(Object *o)
{
    int t1;
    if (g_8c4e30e4 != 0) {
        if (g_8c4e30e4 != 1) {
            if (g_8c4e30e4 == 2) {
                return;
            }
            return;
        }
        if (++o->f20 > 0x3c) {
            g_8c4e30e4 = 2;
            t1 = allocate_block(g_8c4d97e0, (unsigned int)0x2c);
            if (t1 != 0) {
                initialize_color_rise(t1, g_8c44be84, operation_8c1e627c);
            }
        }
    }
}
