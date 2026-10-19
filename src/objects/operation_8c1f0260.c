typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x2];
    short f02;
};
extern int g_8c418248;
extern int g_8c4627c8;
extern int lookup_low_id(int);
extern int call_8c02a6d4(int);
extern void operation_8c1e8e60(int, int, int);
void operation_8c1f0260(Object *o)
{
    int v1;
    unsigned short v2;
    int v4;
    int v7;
    int v8;
    int t1;
    int t2;
    v1 = (int)g_8c4627c8;
    v2 = (unsigned short)o->f02;
    v7 = (int)0;
    if (v1 == 0) {
        v4 = (int)0;
        if ((unsigned short)v2 == g_8c418248) {
            v4 = (int)1;
        }
        v7 = (int)v4;
    }
    v8 = (int)(v7 == 0);
    if (v8 != 0) {
        t1 = lookup_low_id((int)((unsigned short)v2));
        t2 = call_8c02a6d4(t1);
        if (t2 != 0) {
            operation_8c1e8e60(t1, 0x13, 0);
        }
    }
}
