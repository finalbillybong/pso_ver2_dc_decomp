typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    float fe4;
    char unknowne8[0x4];
    int fec;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern float squared_distance_xyz(void *, void *);
int operation_8c19d1cc(Object *o)
{
    float v1;
    int v5;
    int v8;
    int v10;
    int v12;
    int v13;
    int t1;
    float t2;
    v1 = (float)o->fe4;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        t2 = squared_distance_xyz((void *)(t1 + 0x3c), (void *)(((char *)o + 0x3c)));
        if ((v1 * v1) > t2) {
            v5 = (int)1;
            goto L_8c19d200;
        }
    }
    v5 = (int)0;
L_8c19d200:;
    if (v5 != 0) {
        if (o->fec != 0) {
            o->fec = 0;
            v12 = (int)1;
            goto L_8c19d22a;
        }
        v10 = (int)0;
    } else {
        if (o->fec != 0) {
            v8 = (int)2;
        } else {
            o->fec = 1;
            v8 = (int)3;
        }
        v10 = (int)v8;
    }
    v12 = (int)v10;
L_8c19d22a:;
    v13 = (int)(v12 == 1);
    return (int)(v13);
}
