typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    char unknown0[0x20];
};
extern int current_effect_mode(void);
extern int lookup_low_id(int);
extern int call_8c168164(Frame *, int);
int operation_8c1692c0(void)
{
    Frame frame;
    int t2;
    int v2;
    int t1;
    int v1;
    int t3;
    t2 = current_effect_mode();
    v1 = (int)0x37c;
    v2 = (int)0;
    while (4 > v2) {
        t1 = lookup_low_id(v2);
        if (t1 != 0 && *(int *)((char *)((char *)t1 + 0x0) + (v1)) == (int)t2) {
            t3 = call_8c168164((Frame *)((&frame)), v2);
            if (t3 == 2) {
                return 1;
            }
        }
        v2 = (int)(v2 + 1);
    }
    return 0;
}
