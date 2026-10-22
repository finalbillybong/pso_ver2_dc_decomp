typedef struct Node Node;
struct Node {
    int f00;
    int f04;
    char unknown8[0x24];
    Node *f2c;
    Node *f30;
};
Node *operation_8c06510c(Node *o, Node *a1, int a2)
{
    Node *d;
    d = a1++;
    *d = *o;
    d->f04 = a2;
    if (o->f2c != 0) {
        d->f2c = a1;
        a1 = operation_8c06510c(o->f2c, a1, a2);
    }
    if (o->f30 != 0) {
        d->f30 = a1;
        a1 = operation_8c06510c(o->f30, a1, a2);
    }
    return a1;
}
