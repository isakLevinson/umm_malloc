/* ----------------------------------------------------------------------------
 * umm_malloc.h - a memory allocator for embedded systems (microcontrollers)
 *
 * See copyright notice in LICENSE.TXT
 * ----------------------------------------------------------------------------
 */

#ifndef UMM_MALLOC_H
#define UMM_MALLOC_H

#include <sys_def.h>

typedef struct {
	void*	startAddr;
	UINT32	size;
	T_PF_CRITICAL_ENTER	pCbCriticalEnter;
	T_PF_CRITICAL_EXIT	pCbCriticalExit;
} UMM_CFG;


void	umm_init(UMM_CFG* i_pCfg );
void*	umm_malloc( size_t size );
void*	umm_calloc( size_t num, size_t size );
void*	umm_realloc( void *ptr, size_t size );
void	umm_free( void *ptr );

#endif /* UMM_MALLOC_H */
