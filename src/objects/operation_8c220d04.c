typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void operation_8c220d6c(int, int);
extern int get_byte_8c220d94(void);
extern void call_8c220dbc(int);
extern void put_byte_8c220d80(char);
extern int at_end_8c220da8(void);
int operation_8c220d04(int a0, int a1)
{
    int v1;
    int v2;
    int t1;
    int t2;
    operation_8c220d6c(a0, a1);
    v2 = (int)a1;
    goto L_8c220d3e;
L_8c220d14:;
    t2 = get_byte_8c220d94();
    v1 = (int)t2;
    if ((char)v1 != 0x3c) {
        if ((char)v1 == 0x3e) {
            goto L_8c220d34;
        }
        goto L_8c220d38;
    }
    call_8c220dbc(v1);
    goto L_8c220d3e;
L_8c220d34:;
    for (;;) {
    }
L_8c220d38:;
    put_byte_8c220d80((char)v1);
L_8c220d3e:;
    t1 = at_end_8c220da8();
    if (t1 == 0) {
        goto L_8c220d14;
    }
    put_byte_8c220d80((char)0);
    return (int)(v2);
}
