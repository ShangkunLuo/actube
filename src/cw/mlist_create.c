#include "mlist.h"
/**
 * @brief Create a mlist object
 * @param v1 
 * @param v2
 * @param data_size
 * @return a pointer to the created object or NULL if something 
 * wnet wrong.
 */
mlist_t mlist_create(int (*cmp) (const void *v1, const void *v2), 
		void (*del)(void*),
			size_t data_size)
{
	struct mlist * l = malloc(sizeof(struct mlist));
	if (!l)
		return NULL;
	/*memset(l, 0, sizeof(struct mlist));*/

	l->cmp = cmp;
	l->del = del;
	l->data_size=data_size;
	l->first=NULL;
	l->last=NULL;
	l->count=0;
	return l;
}
