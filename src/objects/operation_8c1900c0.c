typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4dc120 S_L8c4dc120;
typedef struct Object Object;
struct Object {
    unsigned char tag;
    unsigned char f01;
    unsigned char f02;
    char unknown3[0x1];
    unsigned char f04;
};
struct S_L8c4dc120 {
    char unknown0[0x1];
    unsigned char f01;
    unsigned char f02;
    char unknown3[0x1];
    unsigned char f04;
};
extern int g_8c4dc288;
extern S_L8c4dc120 g_8c4dc120;
int operation_8c1900c0(Object *o)
{
    int v1;
    int v2;
    v1 = (int)g_8c4dc288;
    v2 = (int)0;
    while (v1 > v2++) {
        if (o->tag == *(unsigned char *)((char *)&g_8c4dc120 + (v2 * 0x14)) && *(unsigned char *)((char *)&g_8c4dc120.f01 + (v2 * 0x14)) == o->f01 && *(unsigned char *)((char *)&g_8c4dc120.f02 + (v2 * 0x14)) == o->f02 && *(unsigned char *)((char *)&g_8c4dc120.f04 + (v2 * 0x14)) == o->f04) {
            return 0;
        }
    }
    return 1;
}
