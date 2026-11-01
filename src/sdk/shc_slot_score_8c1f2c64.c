typedef struct Node {
    short id;
    unsigned char type;
    unsigned char sub;
    struct Node *link;
    unsigned short score;
    unsigned short bonus;
    struct Node *next;
} Node;

typedef struct Slot {
    int id;
    int handle;
    Node *list;
    int extra;
    int unknown10;
    char flag14;
    char flag15;
    char flag16;
    char flag17;
    char flag18;
    char flag19;
    char unknown1a[2];
} Slot;

extern Slot g_slots_8c4effa0[80];
extern int g_input_mode_8c4f0864;

static int node_eval_8c1f2d34(Node *n, int idx, int limit);
static int node_cost_8c1f2cd4(int idx, Node *n, Node *m);
static void node_link_bonus_8c1f2e06(Node *n, int idx, int limit);
static int node_is_paren_8c1f2e78(Node *n);
static int pair_score_8c1f2e98(Node *n, Node *m);
static int score_a_8c1f2ff4(unsigned char a, unsigned char b, unsigned char c, int s);
static int score_b_8c1f30e0(unsigned char a, unsigned char b, int s);
static int score_c_8c1f3162(Node *n, unsigned char a, unsigned char b, int s);
static int score_d_8c1f328a(unsigned char a, unsigned char b, unsigned char c, int s, int e);

int slot_best_8c1f2c64(int idx, int limit, register int want)
{
    register Slot *s;
    register Node *n;
    register Node *best;

    s = &g_slots_8c4effa0[idx];
    for (n = s->list; n; n = n->next) {
        if (want < 0 || n->id == want) {
            if (node_eval_8c1f2d34(n, idx, limit) == -1) return -1;
        }
    }
    {
        Node *p;

        best = p = s->list;
        while ((p = p->next) != 0) {
            if (p->score > best->score) best = p;
        }
    }
    node_link_bonus_8c1f2e06(best, idx, limit);
    return best->id;
}

static int node_cost_8c1f2cd4(int idx, Node *n, Node *m)
{
    int first;
    int cur;
    int prev;
    int s;

    if (m == 0) {
        cur = n->id;
        prev = 0;
        first = 1;
    } else {
        prev = n->id;
        first = 0;
        cur = m->id;
    }
    s = n->bonus + prev * 16 + cur * 17 + pair_score_8c1f2e98(n, m) + first * 50;
    return s;
}

static int node_eval_8c1f2d34(Node *n, int idx, int limit)
{
    register Node *m;
    unsigned short best;
    unsigned short v;
    int id;

    if (node_is_paren_8c1f2e78(n)) {
        n->score = 0;
        goto r36;
    }
    id = n->id;
    if (n->type == 0xff || idx + id >= limit) {
        best = node_cost_8c1f2cd4(idx, n, 0);
    } else {
        m = g_slots_8c4effa0[idx + id].list;
        if (m == 0 && g_input_mode_8c4f0864 >= 3) return -1;
        best = 0;
        for (; m; m = m->next) {
            v = node_cost_8c1f2cd4(idx, n, m);
            if (v > best) best = v;
        }
    }
    n->score = best;
r36:
    return 0;
}

void slot_clear_bonus_8c1f2dce(int idx)
{
    Slot *s;
    register Node *n;

    s = &g_slots_8c4effa0[idx];
    for (n = s->list; n; n = n->next) {
        n->bonus = 0;
        if (n->link && n->link->type == 0x19 && n->link->id == 0) n->bonus = 10;
    }
}

static void node_link_bonus_8c1f2e06(Node *n, int idx, int limit)
{
    Node *m;
    int v;
    int id;

    id = n->id;
    if (n->type == 0xff || idx + id >= limit) return;
    m = g_slots_8c4effa0[idx + id].list;
    if (m == 0) return;
    for (; m; m = m->next) {
        m->bonus = 0;
        if (!node_is_paren_8c1f2e78(m)) {
            v = pair_score_8c1f2e98(n, m);
            &v;
            if (v > 0) m->bonus = v;
        }
    }
}

static int node_is_paren_8c1f2e78(Node *n)
{
    Node *l;
    int t;

    if ((l = n->link) != 0) {
        t = l->type;
        if (t == 0x28 || t == 0x29) return 1;
    }
    return 0;
}

static int pair_score_8c1f2e98(Node *n, Node *m)
{
    unsigned char t;
    unsigned char lt;
    unsigned char a;
    unsigned char b;
    int s;
    unsigned char x;

    a = s = 0;
    t = n->type;
    b = 0;
    if (n->type >= 0x2d && n->type <= 0x38) a = n->sub;
    else b = n->sub;
    {
        Node *l;

        if (m == 0) goto nolt;
        if ((l = m->link) == 0) {
nolt:
            lt = 0;
        } else {
            if ((lt = l->type) == 0x28) return 0;
            if (lt == 0x29 || (lt == 0x19 && l->id > 0) || (lt == 0x1f && l->link == (Node *)-1)) s = 20;
        }
    }
    {
        Node *l;
        unsigned char k;

        if ((l = n->link) != 0) {
            k = l->type;
            if (k == 0x19 && l->id == 0) s += 10;
            else if (k <= 0x19 || k >= 0x1f) s += 1;
        }
    }
    if (b != 0 || t == 0xd) return score_a_8c1f2ff4(t, b, lt, s);
    if (t == 0x2d) return score_d_8c1f328a(a, lt, 0xff, s, 0);
    if (lt >= 0x32 && lt <= 0x38) {
        {
            Node *l;

            if ((l = m->link) != 0) x = l->sub;
            else x = 0;
        }
        return score_d_8c1f328a(x, t, b, s, 2);
    }
    if (t >= 0x14 && t < 0xc0) return score_b_8c1f30e0(t, lt, s);
    if (t >= 0xc0) return score_c_8c1f3162(n, t, lt, s);
    return s;
}

static int score_a_8c1f2ff4(unsigned char a, unsigned char b, unsigned char c, int s)
{
    if (a == 0xd && b == 0) {
        if (c >= 1 && c <= 0x17) goto add3;
        return s;
    }
    if (b >= 4 && b <= 6 && c >= 1 && c <= 0x17) {
        if (!(a == 0x8d || (a == 0x8e && b == 6))) goto chk;
        return s + 10;
chk:
        if (a > 0x8c) goto r36;
        goto add3;
    }
    if (b == 8 && c >= 0x14 && c <= 0x18) {
        if ((a >= 0x80 && a <= 0x8e) || a == 0x92 || a == 0x94 || a == 0xa0 || a == 0xa2 || a == 0xae || a == 0xaf || a == 0xb1 || a == 1 || (a >= 10 && a <= 12)) return s + 15;
add3:
        return s + 3;
    }
r36:
    return s;
}

static int score_b_8c1f30e0(unsigned char a, unsigned char b, int s)
{
    if (a >= 0x14 && a <= 0x18) {
        if (b >= 0x14 && b <= 0x18) return s + 3;
        return s;
    }
    if (a == 0x1f && b == 0x1f) goto add15;
    if (a == 0x21 || a == 0x26 || a == 0x27) goto add20;
    if (a == 0x20 || a == 0x22) {
add15:
        return s + 15;
    }
    if (a == 0x1b && b == 0x1c) {
add20:
        return s + 20;
    }
    if (a == 0x1a && b == 0x1a) return s + 5;
    return s;
}

static int score_c_8c1f3162(Node *n, unsigned char a, unsigned char b, int s)
{
    Node *l;
    int cnt;
    unsigned char lt;

    cnt = 0;
    if ((l = n->link) != 0) {
        lt = l->type;
        if ((lt >= 0x14 && lt <= 0x19) || lt == 0x32) {
            cnt++;
            if (l->id + 1 == n->id) cnt++;
        }
    }
    if (a == 0xc7) {
        if (b >= 1 && b <= 0xd) return s + 30;
        return s + 25;
    }
    else if (a == 0xc8) {
        if (b == 0) return s;
        return cnt == 2 ? s + 20 : s + 5;
    }
    if (a == 0xc1 || a == 0xe1) {
        return cnt == 2 ? s + 5 : s;
    }
    if (a == 0xc4 || a == 0xc5 || (a >= 0xce && a <= 0xd1)) {
        if ((b >= 1 && b <= 0xd) || (b >= 0x16 && b <= 0x17)) return s + 5;
        return s;
    }
    if (a == 0xc2) {
        if (b != 0 && cnt == 2) s += 3;
        goto r36;
    }
    if (a >= 0xfc && a <= 0xfd && b >= 1 && b <= 0x17) goto add18;
    if ((a == 0xfa || a == 0xfe) && b >= 0x14 && b <= 0x18) {
add18:
        return s + 18;
    }
r36:
    return s;
}

static int score_d_8c1f328a(unsigned char a, unsigned char b, unsigned char c, int s, int e)
{
    int bonus;

    bonus = 0;
    switch (a) {
    case 0:
        if ((b >= 0x14 && b <= 0x19) || b == 0x32) goto b15;
        break;
    case 1:
        if (b == 0x1a) goto b20;
        break;
    case 2:
        if (b == 0x1b || b == 0x1c) goto b15;
        break;
    case 3:
        if (b == 0x1f) goto b20;
        if (b != 0x38) break;
        goto b20;
    case 4:
        if (b == 0x16) goto b20;
        break;
    case 5:
        if (c == 0xff) {
            if (b >= 1 && b <= 0xd) goto b15;
        } else {
            if (b >= 0x80 && b <= 0x8b && c == 4) goto b15;
            if (b != 0xd) break;
            if (c != 0) break;
            goto b15;
        }
        break;
    case 6:
        if (b >= 0x14 && b <= 0x19) goto b15;
        if (b == 0x1f || b == 0x38) goto b20;
        break;
    case 7:
        if (b == 0x1d) {
b15:
            bonus = 15;
        }
        break;
    case 8:
        if ((b >= 0x14 && b <= 0x19) || (b >= 1 && b <= 0xd)) {
b20:
            bonus = 20;
        }
        break;
    }
    if (bonus == 0) return s;
    return e + s + bonus;
}
