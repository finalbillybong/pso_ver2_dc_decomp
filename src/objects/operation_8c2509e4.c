typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418258 S_g8c418258;
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
extern int g_8c418248;
extern S_g8c418258 *g_8c418258;
extern S_c8c021ef8 *lookup_low_id(int);
extern float distance_xz(void *, void *);
int operation_8c2509e4(void)
{
    int v1;
    int v2;
    S_c8c021ef8 *t1;
    S_c8c021ef8 *t2;
    float t3;
    v1 = (int)g_8c418248;
    if ((int)(g_8c418258) == v1) {
        return 0;
    }
    t1 = lookup_low_id(v1);
    if (t1 == 0) {
        return 0;
    }
    if (t1->f37c != 0) {
        return 0;
    }
    t2 = lookup_low_id((int)g_8c418258);
    if (t2 == 0) {
        return 0;
    }
    t3 = distance_xz((void *)(((char *)t1 + 0x3c)), (void *)(((char *)t2 + 0x3c)));
    v2 = (int)(t3 <= 2500.0f);
    return (int)(v2);
}
