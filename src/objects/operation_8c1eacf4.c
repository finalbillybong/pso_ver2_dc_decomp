typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d8];
    int f310;
    char unknown314[0x3c];
    int f350;
};
extern int player_flag9_8c026508(int, int);
extern int operation_8c026434(void *);
extern int object_ready(void *);
int operation_8c1eacf4(Object *o)
{
    int v1;
    int v2;
    int v3;
    int t1;
    int t2;
    int t3;
    if (((o->f34 & 0x20006)) == 0 && ((o->f34 & 0x2000000)) == 0) {
        v1 = (int)(((o->f350 & 2)) != 0);
        if (v1 == 0) {
            v2 = (int)(((o->f310 & 0x548000)) != 0);
            if (v2 == 0) {
                v3 = (int)(o->f20 == *(int *)0x8c418248);
                if (v3 != 0) {
                    t1 = player_flag9_8c026508(0x20006, (int)(o->f34 & 0x2000000));
                    if (t1 != 0) {
                        goto L_8c1ead62;
                    }
                    t2 = operation_8c026434((void *)o);
                    if (t2 == 0) {
                        goto L_8c1ead62;
                    }
                }
                t3 = object_ready((void *)o);
                if (t3 != 0) {
                    goto L_8c1ead66;
                }
            }
        }
    }
L_8c1ead62:;
    return 0;
L_8c1ead66:;
    return 1;
}
