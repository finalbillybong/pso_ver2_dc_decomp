typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418258 S_g8c418258;
struct S_c8c021ef8 {
    char unknown0[0x37c];
    int f37c;
};
extern int operation_8c01c25c(void);
extern S_c8c021ef8 *lookup_low_id(int);
extern int call_8c18e8a0(int, int);
int operation_8c0c349c(void)
{
    int v1;
    int t3;
    int v5;
    int v10;
    int t1;
    S_c8c021ef8 *t2;
    int v4;
    S_c8c021ef8 *t4;
    t1 = operation_8c01c25c();
    if (t1 == 0x10) {
        t2 = lookup_low_id((int)(*(S_g8c418258 **)0x8c418258));
        if (t2 != 0 && (int)t2->f37c == *(int *)0x8c44be04) {
            v1 = (int)(*(int *)0x8c418248 == *(int *)0x8c418258);
            return (int)(v1);
        }
        v5 = (int)0;
        v4 = (int)0x37c;
        while (4 > v5) {
            t3 = call_8c18e8a0((int)(*(int *)0x8c418258 + v5 + 1), 4);
            t4 = lookup_low_id(t3);
            if (t4 != 0 && *(int *)((char *)((char *)t4 + 0x0) + (v4)) == *(int *)0x8c44be04) {
                goto L_8c0c3510;
            }
            v5 = (int)(v5 + 1);
        }
L_8c0c3510:;
        v10 = (int)(*(int *)0x8c418248 == (int)t3);
        return (int)(v10);
    }
    return 1;
}
