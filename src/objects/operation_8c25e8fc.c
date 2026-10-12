typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Object {
    char unknown0[0x20];
    int f20;
};
extern S_g8c418248 *g_8c418248;
extern S_L8c41cba0 g_8c41cba0;
extern void call_8c25eb84(void);
extern int lookup_low_id(int);
extern int player_flag9_8c026508(void);
extern void call_8c25ec50(int);
extern void call_8c25ebe0(int);
void operation_8c25e8fc(Object *o)
{
    int t1;
    int t2;
    call_8c25eb84();
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        t2 = player_flag9_8c026508();
        if (t2 == 0 && (((&g_8c41cba0)->f28 & 4)) != 0) {
            call_8c25ec50((int)o);
            call_8c25ebe0((int)o);
            o->f20 = 2;
        }
    }
}
