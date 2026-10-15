typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4daae0 S_L8c4daae0;
typedef struct S_L8c4daae0_4 S_L8c4daae0_4;
typedef struct S_g8c4daae0 S_g8c4daae0;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct Object Object;
struct S_L8c4daae0 {
    S_g8c4daae0 *f00;
    S_L8c4daae0_4 *f04;
};
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x10];
    int f38;
};
extern S_g8c4db520 *g_8c4db520;
extern int g_8c4dc800;
extern S_L8c4daae0 g_8c4daae0;
extern int operation_8c220ce0(void);
extern int operation_8c106760(Object *);
extern int operation_8c106798(Object *);
extern int operation_8c173460(void *, int);
extern void call_8c220c40(int, int);
extern int create_loader_8c1735f8(int);
void operation_8c15945c(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = operation_8c220ce0();
    if (t1 != 0) {
        t2 = operation_8c106760(o);
        if (t2 == 0) {
            t3 = operation_8c106798(o);
            if (t3 == 0) {
                return;
            }
        }
        if (g_8c4dc800 == 1) {
            t4 = operation_8c173460(g_8c4db520, 0xff);
            if (t4 == 1) {
                call_8c220c40(0xb, 1);
                if ((int)((&g_8c4daae0)->f04) != -1) {
                    t5 = create_loader_8c1735f8((int)((&g_8c4daae0)->f04));
                    o->f38 = (int)(t5);
                }
                o->f24 = 7;
                return;
            }
            t6 = operation_8c173460(g_8c4db520, 0xfd);
            if (t6 == 1) {
                call_8c220c40(0x12, 1);
                if ((int)((&g_8c4daae0)->f00) != -1) {
                    t7 = create_loader_8c1735f8((int)((&g_8c4daae0)->f00));
                    o->f38 = (int)(t7);
                }
                o->f24 = 8;
                return;
            }
            call_8c220c40(2, 1);
            o->f24 = 3;
            return;
        }
        call_8c220c40(4, 1);
        o->f24 = 4;
    }
}
