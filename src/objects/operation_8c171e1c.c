typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
extern int lookup_low_id(int);
extern void call_8c027890(int);
extern void call_8c027954(int);
void operation_8c171e1c(int a0)
{
    int t1;
    t1 = lookup_low_id((int)(*(S_g8c4db408_0 **)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2))));
    if (t1 != 0) {
        call_8c027890(t1);
        call_8c027954(t1);
    }
}
