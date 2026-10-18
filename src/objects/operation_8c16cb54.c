extern int call_8c17796c(int);
extern void call_8c1778d4(int);
extern void operation_8c177748(int);
void operation_8c16cb54(int a0)
{
    int t1;
    int v1;
    v1 = (unsigned short)a0;
    t1 = call_8c17796c(v1);
    if (t1 != 0) {
        call_8c1778d4(v1);
        return;
    }
    operation_8c177748(v1);
}
