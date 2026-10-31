typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_x68400 S_x68400;
struct Object {
    char unknown0[0x88];
    int f88;
    char unknown8c[0xc];
    int f98;
};
struct S_x68400 {
    char unknown0[0xc];
    int f0c;
    int f10;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_g8c418248 *g_8c418248;
extern int g_8c41bd10;
extern int g_8c4d7c84;
extern int g_8c4d7ca0;
extern int g_8c4dbaec;
extern S_L8c41cba0 g_8c41cba0;
extern char g_8c30bcb0[];
extern int operation_8c19b054(void);
extern int call_8c372d98(int);
extern int player_flag9_8c026508(void);
extern int player_flag13_8c02935c(void);
extern int lookup_low_id(int);
extern int call_8c10b490(Object *, int, float);
void operation_8c10b388(Object *o)
{
    S_x68400 *p;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    p = (S_x68400 *)(o->f88 * 0x14 + g_8c30bcb0);
    if (o->f98 > 0) {
        o->f98 -= 1;
        return;
    }
    if (g_8c41bd10 == 0) {
        t1 = operation_8c19b054();
        t2 = call_8c372d98((int)((char)t1));
        if (t2 == 0 && g_8c4dbaec == 0 && g_8c4d7ca0 == 0) {
            t3 = player_flag9_8c026508();
            if (t3 != 1) {
                t4 = player_flag13_8c02935c();
                if (t4 != 1) {
                    t5 = ((int (*)(void))(p->f10))();
                    if (t5 != 1 && g_8c4d7c84 == 0) {
                        t6 = lookup_low_id((int)g_8c418248);
                        if (t6 != 0) {
                            t7 = call_8c10b490(o, t6, 20.0f);
                            if (t7 != 0 && (((&g_8c41cba0)->f28 & 4)) != 0) {
                                ((void (*)(int))(p->f0c))(t6);
                            }
                        }
                    }
                }
            }
        }
    }
}
