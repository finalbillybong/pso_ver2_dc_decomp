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
    char unknownf0[0x4];
    float ff4;
    Vector3 ff8;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c4dc4c4;
extern Vector3 g_8c4dc4c8;
extern int lookup_low_id(int);
extern float squared_distance_xyz(void *, void *);
extern float distance_xz(void *, void *);
int operation_8c19dc34(Object *o)
{
    float v1;
    int v5;
    int v8;
    int v10;
    int v12;
    int t3;
    int t1;
    float t2;
    int v13;
    int t4;
    float t5;
    v1 = (float)o->fe4;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        t2 = squared_distance_xyz((void *)(t1 + 0x3c), (void *)(((char *)o + 0x3c)));
        if ((v1 * v1) > t2) {
            v5 = (int)1;
            goto L_8c19dc6c;
        }
    }
    v5 = (int)0;
L_8c19dc6c:;
    if (v5 != 0) {
        if (o->fec != 0) {
            o->fec = 0;
            v12 = (int)1;
            goto L_8c19dc96;
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
L_8c19dc96:;
    if (v12 == 1) {
        t3 = lookup_low_id((int)g_8c418248);
        if (t3 == 0) {
            return 0;
        }
        v13 = (int)0;
        while (0xc > v13) {
            if (v13 != (int)(g_8c418248)) {
                t4 = lookup_low_id(v13);
                if (t4 != 0) {
                    t5 = distance_xz((void *)(t4 + 0x3c), (void *)(t3 + 0x3c));
                    if (t5 > (o->ff4 * o->ff4)) {
                        g_8c4dc4c4 = 1;
                        *(Vector3 *)&g_8c4dc4c8 = *(Vector3 *)&o->ff8;
                    }
                }
            }
            v13 = (int)(v13 + 1);
        }
        return 1;
    }
    return 0;
}
