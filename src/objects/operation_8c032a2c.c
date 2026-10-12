typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int lookup_low_id(int);
extern int call_8c032a58(int);
int operation_8c032a2c(int a0)
{
    int t1;
    int t2;
    t1 = lookup_low_id((unsigned short)a0);
    if (t1 != 0) {
        t2 = call_8c032a58(t1 + 0x3c);
        return t2;
    }
    return -1;
}
