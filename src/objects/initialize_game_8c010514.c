typedef struct RandomState {
    char unknown0[0xe8];
} RandomState;
typedef struct Game {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[4];
    char mode;
    char difficulty;
    char episode;
    char section;
    short quest;
    short floor;
    short leader;
    char lobby;
    char active;
    short team;
    short slot;
    char unknown30[0x85c];
    RandomState random;
    RandomState drops;
    int flags;
    int timer;
} Game;
extern void initialize_hierarchy_node(Game *);
extern void construct_random_state(RandomState *);
Game *initialize_game_8c010514(Game *o)
{
    Game **home = &o;
    (void)home;
    initialize_hierarchy_node(o);
    o->dispatch = (void *)0x8c260f70;
    construct_random_state(&o->random);
    construct_random_state(&o->drops);
    o->mode = 0;
    o->difficulty = 0;
    o->episode = 0;
    o->section = 0;
    o->quest = 0;
    o->floor = 0;
    o->leader = -1;
    o->flags = 0;
    o->lobby = 0;
    o->team = 0;
    o->slot = 0;
    o->active = 1;
    o->timer = 0;
    return o;
}
