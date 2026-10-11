typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
};
struct Object {
    char unknown0[0x22];
    unsigned short f22;
};
extern S_g8c418248 *g_8c418248;
extern S_L8c41cba0 g_8c41cba0;
extern int player_flag9_8c026508(void);
extern int lookup_low_id(void *);
extern int call_8c2097a8(int);
extern void call_8c21c788(int);
void operation_8c1dd18c(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    t1 = player_flag9_8c026508();
    if (t1 == 0) {
        if ((((&g_8c41cba0)->f28 & 0xf0)) != 0) {
            if (((o->f22 & 8)) == 0) {
                t2 = lookup_low_id(g_8c418248);
                if (t2 != 0) {
                    t3 = call_8c2097a8(2);
                    if (t3 != 0) {
                        v1 = (int)0x20000;
                    } else {
                        v1 = (int)0x10000;
                    }
                    if ((((&g_8c41cba0)->f20 & v1)) == 0) {
                        if ((((&g_8c41cba0)->f28 & 0x10)) != 0) {
                            call_8c21c788(0);
                        }
                        if ((((&g_8c41cba0)->f28 & 0x20)) != 0) {
                            call_8c21c788(3);
                        }
                        if ((((&g_8c41cba0)->f28 & 0x80)) != 0) {
                            call_8c21c788(1);
                        }
                        if ((((&g_8c41cba0)->f28 & 0x40)) == 0) {
                            return;
                        }
                        call_8c21c788(2);
                        return;
                    }
                    if ((((&g_8c41cba0)->f28 & 0x10)) != 0) {
                        call_8c21c788(4);
                    }
                    if ((((&g_8c41cba0)->f28 & 0x20)) != 0) {
                        call_8c21c788(7);
                    }
                    if ((((&g_8c41cba0)->f28 & 0x80)) != 0) {
                        call_8c21c788(5);
                    }
                    if ((((&g_8c41cba0)->f28 & 0x40)) != 0) {
                        call_8c21c788(6);
                    }
                }
            }
        }
    }
}
