typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int actor_matches_current_mode(void *);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c02a764(int a0, int a1)
{
    int t1;
    t1 = actor_matches_current_mode((void *)a0);
    if (t1 != 0) {
        call_8c05fbf8(a1, (int)(a0 + 0x3c), 0, 0);
    }
}
