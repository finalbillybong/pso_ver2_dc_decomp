typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x95936 S_x95936;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d8];
    int f310;
    char unknown314[0x140];
    unsigned short f454;
    char unknown456[0x6];
    int f45c;
};
struct S_x95936 {
    char unknown0[0x48];
    int f48;
};
extern int player_flag9_8c026508(void);
extern int operation_8c026434(void *);
extern int object_ready(void *);
int operation_8c1eda20(Object *o)
{
    int v2;
    int v1;
    int v3;
    int v4;
    int t1;
    int t2;
    int t3;
    if (((o->f34 & 0x20006)) == 0) {
        v1 = (int)(((o->f310 & 0x11e)) != 0);
        if (v1 != 0) {
            v2 = (int)(((((S_x95936 *)((char *)(int *)((char *)o + 0x418) + ((o->f454 & 0xffff) << 2)))->f48 & 1)) != 0);
            if (v2 != 0) {
                v3 = (int)(((o->f45c & 1)) == 0);
                if (v3 != 0) {
                    v4 = (int)(o->f20 == *(int *)0x8c418248);
                    if (v4 != 0) {
                        t1 = player_flag9_8c026508();
                        if (t1 != 0) {
                            goto L_8c1edaa4;
                        }
                        t2 = operation_8c026434((void *)o);
                        if (t2 == 0) {
                            goto L_8c1edaa4;
                        }
                    }
                    t3 = object_ready((void *)o);
                    if (t3 != 0) {
                        goto L_8c1edaa8;
                    }
                }
            }
        }
    }
L_8c1edaa4:;
    return 0;
L_8c1edaa8:;
    return 1;
}
