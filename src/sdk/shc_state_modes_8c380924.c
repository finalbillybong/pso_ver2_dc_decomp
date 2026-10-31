typedef struct State {
    int mode;
    char pad04[0x48];
    int v4c;
    char pad50[4];
    int v54;
    int v58;
} State;

extern State *g_state_8c575c3c;
extern void update_8c3bb160(State *);
extern void finish_8c3bb920(State *);

void state_set_54_8c380924(int mode)
{
    g_state_8c575c3c->mode = 0x4000;
    switch (mode) {
    case 0:
        g_state_8c575c3c->v54 = 0;
        break;
    case 1:
        g_state_8c575c3c->v54 = 2;
        break;
    case 2:
        g_state_8c575c3c->v54 = 1;
        break;
    }
    update_8c3bb160(g_state_8c575c3c);
    finish_8c3bb920(g_state_8c575c3c);
}

void state_set_58_8c38096a(int mode)
{
    g_state_8c575c3c->mode = 0x8000;
    switch (mode) {
    case 1:
        g_state_8c575c3c->v58 = 1;
        break;
    case 0:
        g_state_8c575c3c->v58 = 0;
        break;
    }
    update_8c3bb160(g_state_8c575c3c);
    finish_8c3bb920(g_state_8c575c3c);
}

void state_set_4c_8c3809a4(int mode)
{
    g_state_8c575c3c->mode = 0x1000;
    switch (mode) {
    case 0:
        g_state_8c575c3c->v4c = 0;
        break;
    case 1:
        g_state_8c575c3c->v4c = 1;
        break;
    case 2:
        g_state_8c575c3c->v4c = 2;
        break;
    case 3:
        g_state_8c575c3c->v4c = 3;
        break;
    }
    update_8c3bb160(g_state_8c575c3c);
    finish_8c3bb920(g_state_8c575c3c);
}
