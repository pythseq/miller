// ================================================================
// Singly-linked list of void-star, with tail for append.
// ================================================================

#ifndef SLLV_H
#define SLLV_H

typedef struct _sllve_t {
	void* pvvalue;
	struct _sllve_t *pnext;
} sllve_t;

typedef struct _sllv_t {
	sllve_t *phead;
	sllve_t *ptail;
	unsigned long long length;
} sllv_t;

sllv_t* sllv_alloc();
void    sllv_free(sllv_t* plist);
sllv_t* sllv_single(void* pvvalue);
void    sllv_append(sllv_t* plist,  void* pvvalue); // Add at tail
void    sllv_push(sllv_t* plist, void* pvvalue); // Add at head
void*   sllv_pop(sllv_t* plist);
void    sllv_reverse(sllv_t* plist);
// Move all records from pthat to end of pthis. Upon return, pthat is the empty
// list.
void    sllv_transfer(sllv_t* pthis, sllv_t* pthat);

#endif // SLLV_H

