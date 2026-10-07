#include "src/include/model_node.h"

/* Raw control flow assumes a non-null initial node and a valid child whenever
 * bit 0x10 is clear. Preserve those traversal conditions and one flag read. */
int count_model_nodes(ModelNode *node) {
    int count = 0;
    do {
        unsigned int flags = node->flags;
        if (!(flags & 8)) ++count;
        if (!(flags & 16)) count += count_model_nodes(node->child);
        node = node->next;
    } while (node);
    return count;
}
