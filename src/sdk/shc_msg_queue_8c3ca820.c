typedef struct Entry {
    int used;
    int id;
    int data;
    char body[0x600];
} Entry;

typedef struct Queue {
    int pad0;
    unsigned int head;
    unsigned int tail;
    Entry e[5];
} Queue;

void queue_init_8c3ca820(Queue *q)
{
    int i;
    q->head = 0;
    q->tail = 0;
    for (i = 0; i < 5; i++) {
        Entry *p = &q->e[i];
        p->used = 0;
        p->id = -1;
        p->data = 0;
    }
}

void queue_push_8c3ca84a(Queue *q, int data, int id)
{
    int i;
    i = q->head % 5;
    q->e[i].used = 1;
    q->e[i].id = id;
    q->e[i].data = data;
    q->head++;
}

void queue_pop_8c3ca888(Queue *q)
{
    int i;
    i = q->tail % 5;
    q->e[i].used = 0;
    q->e[i].id = -1;
    q->e[i].data = 0;
    q->tail++;
}

int queue_has_room_8c3ca8c0(Queue *q)
{
    if (q->tail % 5 == (q->head + 1) % 5)
        return 0;
    return 1;
}

int queue_empty_8c3ca8ea(Queue *q)
{
    if (q->tail % 5 == q->head % 5)
        return 1;
    return 0;
}

Entry *queue_head_8c3ca90a(Queue *q)
{
    return &q->e[q->head % 5];
}

Entry *queue_tail_8c3ca924(Queue *q)
{
    return &q->e[q->tail % 5];
}
