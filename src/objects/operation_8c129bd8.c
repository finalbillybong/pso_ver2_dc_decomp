typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    int f38;
};
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void call_8c12a138(int, void *, Object *);
extern void call_8c12a518(int, void *, Object *);
extern void call_8c12a90c(int, void *, Object *);
int operation_8c129bd8(Object *o)
{
    int t1;
    int t2;
    int t3;
    if (o != 0) {
        switch (o->f38) {
        case 0:
            t1 = allocate_block(g_8c4d97e0, (unsigned int)0x37c);
            if (t1 != 0) {
                call_8c12a138(t1, g_8c44be98, o);
            }
            return (int)(t1);
        case 1:
            t2 = allocate_block(g_8c4d97e0, (unsigned int)0x37c);
            if (t2 != 0) {
                call_8c12a518(t2, g_8c44be98, o);
            }
            return (int)(t2);
        case 2:
            t3 = allocate_block(g_8c4d97e0, (unsigned int)0x37c);
            if (t3 != 0) {
                call_8c12a90c(t3, g_8c44be98, o);
            }
            return (int)(t3);
        }
    }
    return 0;
}
