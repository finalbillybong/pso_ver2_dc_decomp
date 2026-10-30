/* Library pool group 0x8c1f5624-0x8c1f5794 (Hitachi SHC): a free list of 1000
   20-byte nodes, helpers that release chains linked through different fields,
   and character-class tests on a 256-entry table. SHC places the first literal
   pool inside release_chain_10_8c1f5704, after its initial branch. */
typedef struct Node {
    struct Node *next;
    int id;
    struct Node *next8;
    struct Node *nextc;
    struct Node *next10;
} Node;

extern int g_pool_dirty_8c4e8bc8;
extern int g_pool_free_count_8c4e8bc4;
extern Node g_pool_nodes_8c4e3da0[1000];
extern Node *g_pool_head_8c4e8bc0;
extern void release_id_8c1f882a(int);
extern unsigned char g_char_class_8c28a000[256];

void init_node_pool_8c1f5624(void)
{
    Node *node;
    if (g_pool_dirty_8c4e8bc8 == 0 && g_pool_free_count_8c4e8bc4 == 1000) return;
    g_pool_head_8c4e8bc0 = g_pool_nodes_8c4e3da0;
    for (node = g_pool_nodes_8c4e3da0; node < g_pool_nodes_8c4e3da0 + 999; node++) node->next = node + 1;
    node->next = 0;
    g_pool_free_count_8c4e8bc4 = 1000;
    g_pool_dirty_8c4e8bc8 = 0;
}

Node *alloc_node_8c1f5662(void)
{
    Node *node;
    if (!g_pool_head_8c4e8bc0) return 0;
    node = g_pool_head_8c4e8bc0;
    g_pool_head_8c4e8bc0 = node->next;
    g_pool_free_count_8c4e8bc4--;
    return node;
}

void free_node_8c1f5680(Node *node)
{
    node->next = g_pool_head_8c4e8bc0;
    g_pool_head_8c4e8bc0 = node;
    g_pool_free_count_8c4e8bc4++;
}

void release_chain_8_8c1f5692(Node *node)
{
    Node *next;
    while (node) {
        next = node->next8;
        free_node_8c1f5680(node);
        node = next;
    }
}

void release_ids_8c1f56aa(Node *node)
{
    int previous = -1;
    Node *next;
    while (node) {
        next = node->nextc;
        if (previous == -1 || node->id != previous) {
            if (node->id != -1) release_id_8c1f882a(node->id);
        }
        previous = node->id;
        free_node_8c1f5680(node);
        node = next;
    }
}

void release_chain_c_8c1f56ec(Node *node)
{
    Node *next;
    while (node) {
        next = node->nextc;
        free_node_8c1f5680(node);
        node = next;
    }
}

void release_chain_10_8c1f5704(Node *node)
{
    Node *next;
    while (node) {
        next = node->next10;
        free_node_8c1f5680(node);
        node = next;
    }
}

void release_chain_c2_8c1f5734(Node *node)
{
    Node *next;
    while (node) {
        next = node->nextc;
        free_node_8c1f5680(node);
        node = next;
    }
}

int char_class_c0_8c1f574c(unsigned char c)
{
    return g_char_class_8c28a000[c] & 0xc0;
}

int char_class_80_8c1f575c(unsigned char c)
{
    return g_char_class_8c28a000[c] & 0x80;
}

int char_class_40_8c1f576c(unsigned char c)
{
    return g_char_class_8c28a000[c] & 0x40;
}

int char_class_20_8c1f577c(unsigned char c)
{
    return g_char_class_8c28a000[c] & 0x20;
}
