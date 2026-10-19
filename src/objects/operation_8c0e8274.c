typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    char f02;
};
extern S_g8c4689e0 *g_8c4689e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int allocate_block(void *, unsigned int);
extern void operation_8c2550e8(void *, void *, Object *);
extern void operation_8c255200(void *, int, int);
extern void operation_8c2554f4(void *, void *, Object *);
extern void operation_8c0e8360(void *, int, int);
int operation_8c0e8274(Object *o)
{
    unsigned char v1;
    int t1;
    int t2;
    int t3;
    int t4;
    if (o != 0) {
        v1 = (unsigned char)o->f02;
        if ((unsigned int)(unsigned char)v1 >= (unsigned int)0x27 && (unsigned int)0x3a > (unsigned int)(unsigned char)v1) {
            if ((unsigned char)v1 == 0x35) {
                t1 = allocate_block(g_8c4d97e0, (unsigned int)0x1e8);
                if (t1 != 0) {
                    operation_8c2550e8((void *)t1, g_8c4689e0, o);
                }
                return (int)(t1);
            }
            t2 = allocate_block(g_8c4d97e0, (unsigned int)0x1e8);
            if (t2 != 0) {
                operation_8c255200((void *)t2, (int)g_8c4689e0, (int)o);
            }
            return (int)(t2);
        }
        if ((unsigned char)v1 != 0x1a) {
            if (!((unsigned int)(unsigned char)v1 >= (unsigned int)0x24)) {
                goto L_8c0e830e;
            }
            if (!((unsigned int)0x26 >= (unsigned int)(unsigned char)v1)) {
                goto L_8c0e830e;
            }
        }
        t3 = allocate_block(g_8c4d97e0, (unsigned int)0x1e4);
        if (t3 != 0) {
            operation_8c2554f4((void *)t3, g_8c4689e0, o);
        }
        return (int)(t3);
L_8c0e830e:;
        t4 = allocate_block(g_8c4d97e0, (unsigned int)0x1e4);
        if (t4 != 0) {
            operation_8c0e8360((void *)t4, (int)g_8c4689e0, (int)o);
        }
        return (int)(t4);
    }
    return 0;
}
