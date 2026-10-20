typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern S_g8c4db408 *g_8c4db408;
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c16fd68(int a0, int a1)
{
    S_c8c021ef8 *t1;
    Vector3 *v;
    t1 = lookup_low_id(*(int *)((char *)g_8c4db408 + ((unsigned char)a1 << 2)));
    if (t1 != 0) {
        v = (Vector3 *)&t1->f3c;
        if (v != 0) {
            *(int *)((char *)g_8c4db408 + ((unsigned char)a0++ << 2)) = (int)v->x;
            *(int *)((char *)g_8c4db408 + ((unsigned char)a0++ << 2)) = (int)v->y;
            *(int *)((char *)g_8c4db408 + ((unsigned char)a0 << 2)) = (int)v->z;
        }
    }
}
