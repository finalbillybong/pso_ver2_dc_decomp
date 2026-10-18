extern int call_8c12b944(void);
extern int operation_8c247e8c(int);
int operation_8c238320(int a0)
{
    int v3;
    int v4;
    int v7;
    int v1;
    int v2;
    int t1;
    int t2;
    v1 = (int)0xffff;
    v3 = (int)0;
    v2 = (int)0x3938;
    while (8 > v3) {
        t2 = call_8c12b944();
        v4 = (int)((int)((float)t2 / 32768.0f * 65535.0f) & v1);
        t1 = operation_8c247e8c(v4);
        v7 = (int)v4;
        if (t1 >= 4 && 0xc >= t1) {
            break;
        }
        v7 = (int)v2;
        v3 = (int)(v3 + 1);
    }
    return v7 ^ (unsigned short)a0 | v7 << 0x10;
}
