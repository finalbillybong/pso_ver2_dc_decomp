typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
extern int lookup_low_id(int);
extern int call_8c1ac704(int, int, int);
int operation_8c1a8e18(int a0)
{
    int t1;
    int t2;
    t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t1 == 0) {
        return 0;
    }
    t2 = call_8c1ac704(t1, 3, a0);
    return t2;
}
