/* SDK pool group 0x8c3683b4-0x8c368510 (Hitachi SHC): thin wrappers that pack
   their arguments into a parameter block and issue numbered commands. */
typedef struct Params {
    int a;
    int b;
    int c;
    int d;
} Params;

typedef struct Pair {
    int a;
    int b;
} Pair;

extern int command_8c378610(int code, void *params);
extern int query_8c378660(void);
extern int flush_8c37869c(void);
extern int reset_8c378638(void);
extern void stop_8c3786c4(void);
extern char g_status_8c3f6be8[];

void command_18_8c3683b4(void)
{
    int result = command_8c378610(0x18, 0);
}

int is_idle_8c3683c4(void)
{
    int state = query_8c378660();
    if (state == 1) return 0;
    return 1;
}

void flush_8c3683e0(void)
{
    int result = flush_8c37869c();
}

void command_14_8c3683ee(int a, int b, int c)
{
    Params block, *p = &block;
    p->a = a;
    p->b = b;
    p->c = c;
    p->d = 0;
    command_8c378610(0x14, p);
}

void command_15_8c368410(int a, int b, int c)
{
    Params block, *p = &block;
    p->a = a;
    p->b = b;
    p->c = c;
    p->d = 0;
    command_8c378610(0x15, p);
}

void command_16_8c368432(void)
{
    int result = command_8c378610(0x16, 0);
}

void command_17_8c368442(int a)
{
    Pair block, *p = &block;
    p->a = a;
    p->b = 0;
    command_8c378610(0x17, p);
}

void command_13_8c368460(int a, int b)
{
    Pair block, *p = &block;
    p->a = a;
    p->b = b;
    command_8c378610(0x13, p);
}

void command_22_8c36847c(int a, int b, int c)
{
    Params block, *p = &block;
    p->a = a;
    p->b = b;
    p->c = c;
    p->d = 0;
    command_8c378610(0x22, p);
}

int reset_8c36849e(void)
{
    reset_8c378638();
    return 1;
}

void stop_8c3684ac(void)
{
    stop_8c3786c4();
}

void command_24_8c3684b2(int a, int b, int c, int d)
{
    Params block, *p = &block;
    p->a = a;
    p->b = b;
    p->c = c;
    p->d = d;
    command_8c378610(0x24, p);
}

void command_28_8c3684d2(int a)
{
    Pair block, *p = &block;
    p->a = a;
    p->b = 0;
    command_8c378610(0x28, p);
}

char *status_block_8c3684f0(void)
{
    return g_status_8c3f6be8;
}
