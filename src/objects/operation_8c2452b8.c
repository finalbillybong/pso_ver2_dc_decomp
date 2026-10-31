typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c510e20 S_g8c510e20;
typedef struct S_g8c510e30 S_g8c510e30;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct S_g8c510e30 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x4];
    int f0c;
};
struct Object {
    int tag;
};
struct Arg1 {
    int f00;
};
extern S_g8c510e20 *g_8c510e20;
extern S_g8c510e30 *g_8c510e30;
void operation_8c2452b8(Object *o, Arg1 *a1)
{
    int v3;
    int v4;
    int v2;
    int v1;
    int v5;
    float v8;
    float v11;
    unsigned int v16;
    int v15;
    int v18;
    int t1;
    v1 = (int)0;
    v3 = (int)((int)g_8c510e30 + g_8c510e30->f04);
    v2 = (int)g_8c510e30->f0c;
    v4 = (int)0;
    while (v2 > v4) {
        v5 = (int)(v1 + *(unsigned char *)((char *)((char *)v3 + 0x2) + (v4 << 2)));
        v1 = (int)v5;
        v4 = (int)(v4 + 1);
    }
    t1 = ((int ( *) ( void *))0x8c037e50)(g_8c510e20);
    v8 = (float)(float)(unsigned int)v1;
    v11 = (float)(float)(unsigned int)t1;
    v16 = (unsigned int)(v8 * v11 / 4294967296.0f);
    for (v15 = 0; v15 < v2; v15++) {
        v18 = (int)*(unsigned char *)((char *)((char *)v3 + 0x2) + (v15 << 2));
        if ((v18) != 0) {
            if ((unsigned int)v18 > v16) {
                o->tag = *(unsigned char *)((char *)((char *)v3 + 0x1) + (v15 << 2));
                a1->f00 = *(unsigned char *)((char *)((char *)v3 + 0x0) + (v15 << 2));
                return;
            }
            v16 -= v18;
        }
    }
    a1->f00 = -1;
    o->tag = -1;
}
