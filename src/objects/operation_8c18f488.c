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
    char unknown3[0x2];
    unsigned char f05;
};
struct S_L8c4dbf68 {
    char unknown0[0x1];
    unsigned char f01;
    unsigned char f02;
    char unknown3[0x2];
    unsigned char f05;
};
extern int g_8c4dbf60;
extern S_L8c4dbf68 g_8c4dbf68;
int operation_8c18f488(Object *o)
{
    int v2;
    int v1;
    v1 = (int)g_8c4dbf60;
    v2 = (int)0;
    while (v1 > v2) {
        if (o->tag == *(unsigned char *)((char *)&g_8c4dbf68 + (v2 * 0x14)) && *(unsigned char *)((char *)&g_8c4dbf68.f01 + (v2 * 0x14)) == o->f01 && *(unsigned char *)((char *)&g_8c4dbf68.f02 + (v2 * 0x14)) == o->f02 && *(unsigned char *)((char *)&g_8c4dbf68.f05 + (v2 * 0x14)) == o->f05) {
            return 0;
        }
        v2 = (int)(v2 + 1);
    }
    return 1;
}
