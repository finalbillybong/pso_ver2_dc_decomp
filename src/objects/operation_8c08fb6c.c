typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv13 S_vv13;
typedef struct S_vv27_44 S_vv27_44;
struct S_vv13 {
    short f00;
    char unknown2[0xa];
    short f0c;
    char unknowne[0x36];
    int f44;
};
struct Object {
    char unknown0[0x5c];
    Arg0_5c *f5c;
};
struct Arg0_5c {
    int f00;
};
extern int g_8c44be04;
extern S_g8c44be94 *g_8c44be94;
extern int g_8c469dc8;
extern int g_8c46ec54;
extern void operation_8c0bbab8(int, void *, int);
extern void operation_8c090098(int, void *);
void operation_8c08fb6c(Object *o)
{
    int v3;
    int v2;
    int v11;
    int v14;
    int v26;
    S_vv13 *v13;
    int pm6;
    int v10;
    int v1;
    int v25;
    int v12;
    int v24;
    char *pm3;
    int pm4;
    int pm5;
    v1 = (int)g_8c44be04;
    if (v1 > 0x11) {
        v10 = (int)0;
    } else {
        int pm1;
        pm6 = 0;
        v2 = (int)pm6;
        pm1 = 0;
        v3 = pm1;
        while (v1 > v3) {
            v2 = (int)(v2 + *(int *)((v3 << 2) + (char *)0x8c46eca0));
            v3 += 1;
        }
        v10 = (int)(int)(g_8c46ec54 + v2 * 0x48);
    }
    pm5 = (int)0;
    v14 = pm5;
    v3 = *(int *)((char *)0x8c46eca0 + (v1 << 2));
    v1 = (int)-1;
    v13 = (S_vv13 *)v10;
    v11 = (int)v3;
    v12 = v1;
    for (; v14 < v11; ) {
        if ((int)v13->f00 != (short)v12 && !((int)v13->f0c != o->f5c->f00)) {
            int pm7;
            pm7 = v13->f44;
            v3 = (int)(pm7);
            pm4 = (int)o;
            operation_8c0bbab8(pm4, g_8c44be94, v3);
            operation_8c090098((int)o, (void *)v13);
        }
        v14 = (int)(v14 + 1);
        v13 = (S_vv13 *)((char *)v13 + 72);
    }
    v25 = 0;
    v14 = (int)-1;
    v10 = 0x100;
    v24 = v14;
    while (v10 > v25) {
        int v27;
        v26 = ((0x48 * v25));
        v27 = g_8c469dc8;
        if (*(short *)((v26) + (char *)((char *)v27 + 0x0)) != (short)v24) {
            if (!(*(short *)((v26) + (char *)((char *)v27 + 0xc)) != o->f5c->f00)) {
                int pm2;
                pm3 = (char *)v27;
                operation_8c0bbab8((int)o, g_8c44be94, (int)(*(S_vv27_44 **)((v26) + (char *)(pm3 + 0x44))));
                pm2 = (int)o;
                operation_8c090098(pm2, (void *)(g_8c469dc8 + v26));
            }
        }
        v25 = (int)(v25 + 1);
    }
}
