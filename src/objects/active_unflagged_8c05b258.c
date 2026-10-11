typedef struct Node { char unknown0[0x34]; int flags; } Node;
extern int hierarchy_is_active(Node *);
int active_unflagged_8c05b258(Node *node)
{
    int result = 0;
    int active = 0;
    if (node && hierarchy_is_active(node)) active = 1;
    if (active && !(node->flags & 0x06040800)) result = 1;
    return result;
}
