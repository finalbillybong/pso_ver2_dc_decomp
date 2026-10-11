typedef struct Buffer { int words[5]; } Buffer;
class Child {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void read_state(Buffer *);
};
typedef struct Node { int tag; char unknown4[8]; struct Node *next; char unknown10[4]; struct Node *first; char unknown18[8]; Child *child; } Node;
typedef struct Owner { char unknown0[0x1ac]; Node *root; } Owner;
extern "C" int hierarchy_is_active(void *);
extern "C" int match_state_8c163898(Buffer *, int);
extern "C" Node *find_node_8c169618(Node *);
extern "C" Node *find_node_8c16a3c0(Owner *o, int key)
{
    Node *node;
    Node *result;
    *(int *)0x8c4db3bc = key;
    for (node = o->root->first; node; node = node->next) {
        int same = node->tag == *(int *)0x8c317ab0;
        int match = 0;
        if (same && hierarchy_is_active(node)) match = 1;
        if (match) {
            Child *child = hierarchy_is_active(node->child) == 0 ? 0 : node->child;
            if (child) {
                Buffer state;
                child->read_state(&state);
                if (match_state_8c163898(&state, *(int *)0x8c4db3bc)) {
                    result = node;
                    goto done;
                }
            }
        }
        {
            Node *found = find_node_8c169618(node);
            if (found) {
                result = found;
                goto done;
            }
        }
    }
    result = 0;
done:
    return result;
}
