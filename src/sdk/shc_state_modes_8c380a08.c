typedef struct State {
    int mode;
    char pad04[0x14];
    int v18;
    char pad1c[0x34];
    int v50;
} State;

extern State *g_state_8c575c3c;
extern void update_8c3bb160(State *);
extern void finish_8c3bb920(State *);
extern void func_8c3b721a(void);

void state_set_50_8c380a08(int mode)
{
    g_state_8c575c3c->mode = 0x2000;
    switch (mode) {
    case 0:
        g_state_8c575c3c->v50 = 0;
        break;
    case 1:
        g_state_8c575c3c->v50 = 1;
        break;
    case 2:
        g_state_8c575c3c->v50 = 2;
        break;
    case 3:
        g_state_8c575c3c->v50 = 3;
        break;
    }
    update_8c3bb160(g_state_8c575c3c);
    finish_8c3bb920(g_state_8c575c3c);
}

void state_call_8c380a56(void)
{
    func_8c3b721a();
}

void state_set_18_8c380a5c(int mode)
{
    g_state_8c575c3c->mode = 2;
    switch (mode) {
    case 0:
        g_state_8c575c3c->v18 = 0;
        break;
    case 1:
        g_state_8c575c3c->v18 = 1;
        break;
    case 2:
        g_state_8c575c3c->v18 = 2;
        break;
    case 3:
        g_state_8c575c3c->v18 = 3;
        break;
    }
    update_8c3bb160(g_state_8c575c3c);
    finish_8c3bb920(g_state_8c575c3c);
}
