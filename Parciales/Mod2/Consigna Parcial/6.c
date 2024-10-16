#define MAX_2(a, b) ((a) > (b) ? (a) : (b))
#define MAX_4(a, b, c, d) MAX_2(MAX_2((a), (b)), MAX_2((c), (d)))
