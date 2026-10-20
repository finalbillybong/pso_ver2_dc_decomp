typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c461ffc S_g8c461ffc;
struct Frame {
    char f00;
    char unknown1[0x83];
};
extern S_g8c461ffc *g_8c461ffc;
extern void call_8c12b880(Frame *, int, int);
extern int operation_8c03614c(void *);
extern void call_8c12b154(Frame *, int, int);
extern int call_8c0358b0(void *);
extern int call_8c035874(void);
int operation_8c0357e0(void)
{
    Frame frame;
    int v1;
    int t1;
    g_8c461ffc = (S_g8c461ffc *)0;
    v1 = (int)4;
    while (1 > (int)(g_8c461ffc)) {
        call_8c12b880((Frame *)((&frame)), 0, 0x81);
        t1 = operation_8c03614c(g_8c461ffc);
        call_8c12b154((Frame *)((&frame)), t1, 0x81);
        if ((&frame)->f00 != 0) {
            v1 = call_8c0358b0(g_8c461ffc);
            switch (v1) {
            case 0:
            case 1:
            case 2:
            case 5:
            case 6:
            case 8:
            case 12:
            case 13:
                return v1;
            }
        }
        g_8c461ffc = (S_g8c461ffc *)((int)g_8c461ffc + 1);
    }
    return (int)(v1);
}
