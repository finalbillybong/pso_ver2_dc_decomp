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
    char unknown38[0x2ca];
    short f302;
    char unknown304[0xc];
    int f310;
    char unknown314[0x3c];
    int f350;
};
extern int player_flag9_8c026508(int, int);
extern int operation_8c026434(void *);
extern int object_ready(void *);
int operation_8c1ead94(Object *o, int a1)
{
    int v2;
    int v3;
    int v4;
    int t1;
    int t2;
    int t3;
    if (a1 == 2 && o->f302 == 0) {
        return 0;
    }
    if (((o->f34 & 0x20006)) == 0 && ((o->f34 & 0x2000000)) == 0) {
        v2 = (int)(((o->f350 & 2)) != 0);
        if (v2 == 0) {
            v3 = (int)(((o->f310 & 0x548000)) != 0);
            if (v3 == 0) {
                v4 = (int)(o->f20 == *(int *)0x8c418248);
                if (v4 != 0) {
                    t1 = player_flag9_8c026508(0x20006, (int)(o->f34 & 0x2000000));
                    if (t1 != 0) {
                        goto L_8c1eae16;
                    }
                    t2 = operation_8c026434((void *)o);
                    if (t2 == 0) {
                        goto L_8c1eae16;
                    }
                }
                t3 = object_ready((void *)o);
                if (t3 != 0) {
                    goto L_8c1eae1a;
                }
            }
        }
    }
L_8c1eae16:;
    return 0;
L_8c1eae1a:;
    return 1;
}
