typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dbf68 S_L8c4dbf68;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
};
struct S_L8c4dbf68 {
    char unknown0[0x1];
    unsigned char f01;
    unsigned char f02;
};
extern int g_8c4dbf60;
extern S_L8c4dbf68 g_8c4dbf68;
int operation_8c18f418(Object *o)
{
    int v2;
    int v9;
    int v1;
    v1 = (int)g_8c4dbf60;
    v9 = (int)0;
    goto L_8c18f470;
    v2 = (int)0;
L_8c18f432:;
    if (o->tag == *(unsigned char *)((char *)&g_8c4dbf68 + (v2 * 0x14)) && *(unsigned char *)((char *)&g_8c4dbf68.f01 + (v2 * 0x14)) == o->f01 && *(unsigned char *)((char *)&g_8c4dbf68.f02 + (v2 * 0x14)) == o->f02) {
        return 0;
    }
    v9 = (int)(v2 + 1);
L_8c18f470:;
    v2 = (int)v9;
    if (v1 > v9) {
        goto L_8c18f432;
    }
    return 1;
}
