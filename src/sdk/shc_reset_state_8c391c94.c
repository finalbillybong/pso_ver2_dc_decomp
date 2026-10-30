/* SDK pool group 0x8c391c94 (Hitachi SHC): resets two fields of the current
   state object and runs two update steps on it. */
typedef struct State {
    int mode;
    char unknown4[0x38];
    int phase;
} State;

extern State *g_state_8c575c3c;
extern void update_8c3bb160(State *);
extern void finish_8c3bb920(State *);

void reset_state_8c391c94(void)
{
    g_state_8c575c3c->mode = 0x100;
    g_state_8c575c3c->phase = 2;
    update_8c3bb160(g_state_8c575c3c);
    finish_8c3bb920(g_state_8c575c3c);
}
