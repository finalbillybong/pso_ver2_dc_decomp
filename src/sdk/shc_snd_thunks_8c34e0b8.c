extern void func_8c352e24(void);
extern void func_8c352ecc(void);
extern void func_8c353030(void);
extern void func_8c35311e(int);
extern void func_8c3531b6(void);
extern void func_8c353208(int);
extern void func_8c35357a(void);
extern void func_8c353652(void);
extern void func_8c353a74(void);
extern void func_8c353c98(void);
extern void func_8c353e60(void);
extern void func_8c353ea0(void);
extern void func_8c353f38(void);
extern void func_8c353f78(void);
extern void func_8c354000(void);
extern void func_8c35403c(void);
extern void func_8c354094(void);
extern void func_8c3540ce(void);
extern void func_8c354118(void);
extern void func_8c3542a4(void);
extern void func_8c3542c2(void);
extern void func_8c3542e0(void);
extern void func_8c354300(void);
extern void func_8c35445c(int, int, int *);

void snd_thunk_8c34e0b8(void)
{
    func_8c352e24();
}

void snd_thunk_8c34e0be(void)
{
    func_8c352ecc();
}

void snd_thunk_8c34e0c4(void)
{
    func_8c353030();
}

void snd_thunk_8c34e0ca(int x)
{
    func_8c353208(x);
    func_8c35311e(x);
}

void snd_thunk_8c34e0dc(void)
{
    func_8c3531b6();
}

void snd_thunk_8c34e0e2(int x)
{
    func_8c353208(x);
}

void snd_thunk_8c34e0e8(void)
{
    func_8c35357a();
}

void snd_thunk_8c34e0ee(void)
{
    func_8c353652();
}

void snd_thunk_8c34e0f4(void)
{
    func_8c353e60();
}

void snd_thunk_8c34e0fa(void)
{
    func_8c353f38();
}

int snd_max_8c34e100(void)
{
    return 0x7fffffff;
}

void snd_thunk_8c34e106(void)
{
    func_8c353ea0();
}

void snd_thunk_8c34e10c(void)
{
    func_8c353a74();
}

void snd_thunk_8c34e112(void)
{
    func_8c354000();
}

void snd_thunk_8c34e118(void)
{
    func_8c353f78();
}

void snd_thunk_8c34e11e(void)
{
    func_8c354094();
}

void snd_thunk_8c34e124(void)
{
    func_8c3540ce();
}

void snd_thunk_8c34e12a(void)
{
    func_8c354118();
}

void snd_thunk_8c34e130(void)
{
    func_8c35403c();
}

void snd_thunk_8c34e136(void)
{
    func_8c3542c2();
}

void snd_thunk_8c34e13c(void)
{
    func_8c3542e0();
}

void snd_thunk_8c34e142(void)
{
    func_8c354300();
}

void snd_thunk_8c34e148(void)
{
    func_8c3542a4();
}

void snd_thunk_8c34e14e(void)
{
    func_8c353c98();
}

void snd_nop_8c34e154(void)
{
}

void snd_nop_8c34e158(void)
{
}

void snd_nop_8c34e15c(void)
{
}

void snd_nop_8c34e160(void)
{
}

int snd_query_8c34e164(int a, int b)
{
    int v;
    func_8c35445c(a, b, &v);
    return v;
}
