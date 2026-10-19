typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x44];
    int f78;
};
struct Arg0_30 {
    int f00;
    int f04;
    int f08;
    int f0c;
    int f10;
};
struct Frame {
    char unknown0[0x4];
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern int call_8c163428(int, int, Frame *);
extern void call_8c1e5f68(int, int);
void operation_8c1d6ec4(Object *o)
{
    Frame frame;
    char *v50;
    char *v1;
    char *v2;
    char *v3;
    char *v4;
    int v5;
    int t1;
    int t2;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        v1 = (char *)o->f30->f00;
        v2 = (char *)o->f30->f04;
        v3 = (char *)o->f30->f08;
        v4 = (char *)o->f30->f0c;
        v5 = (int)o->f30->f10;
        v50 = (char *)o->f78;
        if (v50 != 0) {
            t2 = call_8c163428(t1, (int)(v50), (Frame *)((&frame)));
            if (t2 != 0) {
                call_8c1e5f68((int)(v1), 1);
                call_8c1e5f68((int)(v2), 1);
                call_8c1e5f68((int)(v3), 1);
                call_8c1e5f68((int)(v4), 1);
                call_8c1e5f68(v5, 1);
                return;
            }
            call_8c1e5f68((int)(v1), 0);
            call_8c1e5f68((int)(v2), 0);
            call_8c1e5f68((int)(v3), 0);
            call_8c1e5f68((int)(v4), 0);
            call_8c1e5f68(v5, 0);
        }
    }
}
