extern void visit_at(void (*)(void *));
extern void callback_at(void *);
void visit_object_links(void) { visit_at(callback_at); }
