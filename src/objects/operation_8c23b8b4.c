typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct Object Object;
struct Object {
    char unknown0[0x38];
    int f38;
    char unknown3c[0xac];
    int fe8;
    char unknownec[0x14c];
    int f238;
    int f23c;
    int f240;
};
extern int g_8c44be04;
extern S_g8c44be9c *g_8c44be9c;
extern void operation_8c23b9e8(int, int, int);
void operation_8c23b8b4(Object *o)
{
    int v1;
    int v16;
    int v15;
    int pm1;
    int pm2;
    int pm3;
    if ((o->f238 == 1)) {
        int v2;
        *(int *)(0x23c + (char *)o) += 0xaaa;
        v1 = (int)0x2000;
        pm3 = o->f23c;
        v2 = pm3;
        if (!(v2 >= v1)) {
            goto L_8c23b8fe;
        }
        o->f23c = (int)(v1);
        o->f238 = 0;
    } else {
        *(int *)((char *)o + 0x23c) -= 0xaaa;
        v1 = -0x2000;
        if (v1 >= o->f23c) {
            pm1 = 1;
            o->f23c = -0x2000;
            o->f238 = pm1;
        }
    }
L_8c23b8fe:
    ;
    v15 = (int)g_8c44be04;
    v16 = (int)o->f240;
    if (v16 != v15) {
        if (0 != o->f38) {
            o->f240 = (v15);
            if (v15 != 0) {
                if (!(v15 == 0xf)) {
                    pm2 = (int)(o->fe8);
                    operation_8c23b9e8((int)g_8c44be9c, pm2, 5);
                }
            }
        }
    }
}
