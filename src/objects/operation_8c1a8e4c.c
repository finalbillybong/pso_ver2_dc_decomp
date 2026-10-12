typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern int lookup_low_id(int);
extern int current_mode_active(void);
extern int call_8c1ac704(int, int, int);
extern int call_8c1ac9a4(int, int, int);
int operation_8c1a8e4c(int a0)
{
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t1 == 0) {
        return 0;
    }
    t2 = current_mode_active();
    if (t2 == 0) {
        return 0;
    }
    t3 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t3 == 0) {
        v1 = (int)0;
    } else {
        t5 = call_8c1ac704(t3, 3, a0);
        v1 = (int)t5;
    }
    if (v1 == 0) {
        return 0;
    }
    t4 = call_8c1ac9a4(t1, 3, a0);
    return t4;
}
