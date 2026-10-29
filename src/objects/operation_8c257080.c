typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c33ff6c S_L8c33ff6c;
typedef struct S_L8c33ff6c_8 S_L8c33ff6c_8;
typedef struct S_L8c33ff7c S_L8c33ff7c;
typedef struct S_L8c33ff7c_8 S_L8c33ff7c_8;
typedef struct S_L8c513340 S_L8c513340;
typedef struct Object Object;
typedef struct Arg0_4 Arg0_4;
struct Object {
    char unknown0[0x4];
    Arg0_4 *f04;
    float f08;
};
struct S_L8c33ff7c {
    float f00;
    float f04;
    S_L8c33ff7c_8 *f08;
    float f0c;
};
struct S_L8c513340 {
    float f00;
    float f04;
    int f08;
    float f0c;
};
struct S_L8c33ff6c {
    float f00;
    float f04;
    S_L8c33ff6c_8 *f08;
    float f0c;
};
extern S_L8c33ff6c g_8c33ff6c;
extern S_L8c33ff7c g_8c33ff7c;
extern S_L8c513340 g_8c513340;
extern int call_8c18e8a0(void *, int);
extern int lookup_low_id(int);
extern int signed_angle_delta(int, int);
void operation_8c257080(Object *o)
{
    float v1;
    int t1;
    int t2;
    int t3;
    t2 = (int)o->f04;
    v1 = (float)o->f08;
    t1 = call_8c18e8a0((void *)t2, 4);
    t2 = lookup_low_id(t1);
    if (t2 != 0) {
        switch (t1) {
        case 0:
            if (0.0333333351f > v1 || v1 > 0.5f) {
                return;
            }
            (&g_8c33ff7c)->f00 = v1;
            (&g_8c513340)->f00 = ((&g_8c33ff7c)->f00 - (&g_8c33ff6c)->f00) * 0.0333333351f;
            return;
        case 1:
            if (1.0f > v1 || v1 > 2.0f) {
                return;
            }
            (&g_8c33ff7c)->f04 = v1;
            (&g_8c513340)->f04 = ((&g_8c33ff7c)->f04 - (&g_8c33ff6c)->f04) * 0.0333333351f;
            return;
        case 2:
            (&g_8c33ff7c)->f08 = (S_L8c33ff7c_8 *)(int)v1;
            t3 = signed_angle_delta((int)((&g_8c33ff6c)->f08), (int)((&g_8c33ff7c)->f08));
            (&g_8c513340)->f08 = (int)((float)t3 * 0.0333333351f);
            return;
        case 3:
            if (3.0f > v1 || v1 > 32.0f) {
                return;
            }
            (&g_8c33ff7c)->f0c = v1;
            (&g_8c513340)->f0c = ((&g_8c33ff7c)->f0c - (&g_8c33ff6c)->f0c) * 0.0333333351f;
            return;
        }
    }
}
