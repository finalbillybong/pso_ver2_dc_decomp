/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1981fc
 * function: release_assets_ad_f_moyouring_8c1981fc
 * language: c
 * reference size: 152 bytes
 * compiled size: 156 bytes (+2.6%)
 * differing lines: 0 of 56 reference instruction lines
 * differing bytes: 18
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
extern void check_items_8c37d534(void *);
extern void destroy_node_array(void *, short);
extern void call_8c03dc40(void *, int);
extern void *g_8c4dc43c;
extern void *g_8c4dc438;
extern void *g_8c4dc430;
void release_assets_ad_f_moyouring_8c1981fc(void)
{
    check_items_8c37d534((void *)0x8c31c6ec);
    destroy_node_array(g_8c4dc43c, 1);
    g_8c4dc43c = 0;
    destroy_node_array(g_8c4dc438, 1);
    g_8c4dc438 = 0;
    destroy_node_array(g_8c4dc430, 1);
    *(int *)0x8c4dc430 = 0;
    destroy_node_array(*(void **)0x8c4dc434, 1);
    *(int *)0x8c4dc434 = 0;
    destroy_node_array(*(void **)0x8c4dc42c, 1);
    *(int *)0x8c4dc42c = 0;
    call_8c03dc40(*(void **)0x8c4dc420, 1);
    *(int *)0x8c4dc420 = 0;
}
