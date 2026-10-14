typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int lookup_low_id(int);
extern void call_8c02bad4(int);
void operation_8c16fe54(int a0)
{
    int t1;
    t1 = lookup_low_id(a0);
    if (t1 != 0) {
        call_8c02bad4(t1);
    }
}
