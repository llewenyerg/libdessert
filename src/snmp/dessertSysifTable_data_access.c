/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $ 
 *
 * $Id:$
 */
/*
 * standard Net-SNMP includes 
 */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/*
 * include our parent header 
 */
#include "dessert_internal.h"


#include "dessertSysifTable_data_access.h"

/** @ingroup interface
 * @addtogroup data_access data_access: Routines to access data
 *
 * These routines are used to locate the data used to satisfy
 * requests.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dessertSysifTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DESSERT-MIB::dessertSysifTable is subid 7 of dessertObjects.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.7, length: 12
 */

/**
 * initialization for dessertSysifTable data access
 *
 * This function is called during startup to allow you to
 * allocate any resources you need for the data table.
 *
 * @param dessertSysifTable_reg
 *        Pointer to dessertSysifTable_registration
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : unrecoverable error.
 */
int
dessertSysifTable_init_data(dessertSysifTable_registration *
                            dessertSysifTable_reg)
{
    DEBUGMSGTL(("verbose:dessertSysifTable:dessertSysifTable_init_data",
                "called\n"));

    return MFD_SUCCESS;
}                               /* dessertSysifTable_init_data */

/**
 * container overview
 *
 */

/**
 * container initialization
 *
 * @param container_ptr_ptr A pointer to a container pointer. If you
 *        create a custom container, use this parameter to return it
 *        to the MFD helper. If set to NULL, the MFD helper will
 *        allocate a container for you.
 * @param  cache A pointer to a cache structure. You can set the timeout
 *         and other cache flags using this pointer.
 *
 *  This function is called at startup to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases. If no custom
 *  container is allocated, the MFD code will create one for your.
 *
 *  This is also the place to set up cache behavior. The default, to
 *  simply set the cache timeout, will work well with the default
 *  container. If you are using a custom container, you may want to
 *  look at the cache helper documentation to see if there are any
 *  flags you want to set.
 *
 * @remark
 *  This would also be a good place to do any initialization needed
 *  for you data source. For example, opening a connection to another
 *  process that will supply the data, opening a database, etc.
 */
void
dessertSysifTable_container_init(netsnmp_container ** container_ptr_ptr,
                                 netsnmp_cache * cache)
{
    DEBUGMSGTL(("verbose:dessertSysifTable:dessertSysifTable_container_init", "called\n"));
    dessert_debug("dessertSysifTable_container_load called");
    if (NULL == container_ptr_ptr) {
        snmp_log(LOG_ERR,
                 "bad container param to dessertSysifTable_container_init\n");
        return;
    }

    /*
     * For advanced users, you can use a custom container. If you
     * do not create one, one will be created for you.
     */
    *container_ptr_ptr = NULL;

    if (NULL == cache) {
        snmp_log(LOG_ERR,
                 "bad cache param to dessertSysifTable_container_init\n");
        return;
    }

    /*
     * TODO:345:A: Set up dessertSysifTable cache properties.
     *
     * Also for advanced users, you can set parameters for the
     * cache. Do not change the magic pointer, as it is used
     * by the MFD helper. To completely disable caching, set
     * cache->enabled to 0.
     */
    cache->timeout = DESSERTSYSIFTABLE_CACHE_TIMEOUT;   /* seconds */
}                               /* dessertSysifTable_container_init */

/**
 * container shutdown
 *
 * @param container_ptr A pointer to the container.
 *
 *  This function is called at shutdown to allow you to customize certain
 *  aspects of the access method. For the most part, it is for advanced
 *  users. The default code should suffice for most cases.
 *
 *  This function is called before dessertSysifTable_container_free().
 *
 * @remark
 *  This would also be a good place to do any cleanup needed
 *  for you data source. For example, closing a connection to another
 *  process that supplied the data, closing a database, etc.
 */
void
dessertSysifTable_container_shutdown(netsnmp_container * container_ptr)
{
    DEBUGMSGTL(("verbose:dessertSysifTable:dessertSysifTable_container_shutdown", "called\n"));

    if (NULL == container_ptr) {
        snmp_log(LOG_ERR,
                 "bad params to dessertSysifTable_container_shutdown\n");
        return;
    }

}                               /* dessertSysifTable_container_shutdown */

/**
 * load initial data
 *
 * TODO:350:M: Implement dessertSysifTable data load
 * This function will also be called by the cache helper to load
 * the container again (after the container free function has been
 * called to free the previous contents).
 *
 * @param container container to which items should be inserted
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_RESOURCE_UNAVAILABLE : Can't access data source
 * @retval MFD_ERROR                : other error.
 *
 *  This function is called to load the index(es) (and data, optionally)
 *  for the every row in the data set.
 *
 * @remark
 *  While loading the data, the only important thing is the indexes.
 *  If access to your data is cheap/fast (e.g. you have a pointer to a
 *  structure in memory), it would make sense to update the data here.
 *  If, however, the accessing the data invovles more work (e.g. parsing
 *  some other existing data, or peforming calculations to derive the data),
 *  then you can limit yourself to setting the indexes and saving any
 *  information you will need later. Then use the saved information in
 *  dessertSysifTable_row_prep() for populating data.
 *
 * @note
 *  If you need consistency between rows (like you want statistics
 *  for each row to be from the same time frame), you should set all
 *  data here.
 *
 */
int dessertSysifTable_container_load(netsnmp_container * container) {

	dessertSysifTable_rowreq_ctx *rowreq_ctx;
	dessert_sysif_t *sysif = _dessert_sysif; /* TODO: change if multiple tun/tap interfaces are supported*/

	char inPkts[I64CHARSZ + 1];
	char outPkts[I64CHARSZ + 1];
	char inOctets[I64CHARSZ + 1];
	char outOctets[I64CHARSZ + 1];

	/*
	 * temporary storage for index values
	 */
	/*
	 * sysifIndex(1)///()//L/a/w/e/r/d/h
	 */
	long sysifIndex = 0;

	dessert_debug("dessertSysifTable_container_load called");
	DEBUGMSGTL(("verbose:dessertSysifTable:dessertSysifTable_container_load", "called\n"));

	/*
	 * TODO:351:M: |-> Load/update data in the dessertSysTable container.
	 * loop over your dessertSysifTable data, allocate a rowreq context,
	 * set the index(es) [and data, optionally] and insert into
	 * the container.
	 */

	/*
	 * TODO:352:M: |   |-> set indexes in new dessertSysifTable rowreq context.
	 * data context will be set from the param (unless NULL,
	 *      in which case a new data context will be allocated)
	 */
	rowreq_ctx = dessertSysifTable_allocate_rowreq_ctx(NULL);
	if (NULL == rowreq_ctx) {
		snmp_log(LOG_ERR, "memory allocation failed\n");
		return MFD_RESOURCE_UNAVAILABLE;
	}

	if (MFD_SUCCESS != dessertSysifTable_indexes_set(rowreq_ctx, sysifIndex)) {
		snmp_log(LOG_ERR, "error setting index while loading "
			"dessertSysTable data.\n");
		dessertSysifTable_release_rowreq_ctx(rowreq_ctx);
		return MFD_RESOURCE_UNAVAILABLE;
	}

	/*
	 * TODO:352:r: |   |-> populate dessertMeshifTable data context.
	 * Populate data context here. (optionally, delay until row prep)
	 */
	/*
	 * non-TRANSIENT data: no need to copy. set pointer to data
	 */

	rowreq_ctx->data.sysifName_len = strlen(sysif->if_name);
	strcpy(rowreq_ctx->data.sysifName, sysif->if_name);

	rowreq_ctx->data.sysifMacAddress_len = 6;
	memcpy(rowreq_ctx->data.sysifMacAddress, sysif->hwaddr, 6);

	pthread_mutex_lock(&(sysif->cnt_mutex));

	rowreq_ctx->data.sysifInPkts.low = sysif->ipkts & 0xffffffff;
	rowreq_ctx->data.sysifInPkts.high = sysif->ipkts >> 32;

	rowreq_ctx->data.sysifOutPkts.low = sysif->opkts & 0xffffffff;
	rowreq_ctx->data.sysifOutPkts.high = sysif->opkts >> 32;

	rowreq_ctx->data.sysifInOctets.low = sysif->ibytes & 0xffffffff;
	rowreq_ctx->data.sysifInOctets.high = sysif->ibytes >> 32;

	rowreq_ctx->data.sysifOutOctets.low = sysif->obytes & 0xffffffff;
	rowreq_ctx->data.sysifOutOctets.high = sysif->obytes >> 32;

	printU64(inPkts, &rowreq_ctx->data.sysifInPkts);
	printU64(outPkts, &rowreq_ctx->data.sysifOutPkts);
	printU64(inOctets, &rowreq_ctx->data.sysifInOctets);
	printU64(outOctets, &rowreq_ctx->data.sysifOutOctets);

	dessert_debug("inPkts    [%s] [%u]", inPkts, sysif->ipkts);
	dessert_debug("outPkts   [%s] [%u]", outPkts, sysif->opkts);
	dessert_debug("inOctets  [%s] [%u]", inOctets, sysif->ibytes);
	dessert_debug("outOctets [%s] [%u]", outOctets, sysif->obytes);

	pthread_mutex_unlock(&(sysif->cnt_mutex));

	/*
	 * insert into table container
	 */
	CONTAINER_INSERT(container, rowreq_ctx);

	DEBUGMSGT(("verbose:dessertSysifTable:dessertSysifTable_container_load", "inserted 1 record(s)\n"));

	return MFD_SUCCESS;
} /* dessertSysifTable_container_load */

/**
 * container clean up
 *
 * @param container container with all current items
 *
 *  This optional callback is called prior to all
 *  item's being removed from the container. If you
 *  need to do any processing before that, do it here.
 *
 * @note
 *  The MFD helper will take care of releasing all the row contexts.
 *
 */
void
dessertSysifTable_container_free(netsnmp_container * container)
{
    DEBUGMSGTL(("verbose:dessertSysifTable:dessertSysifTable_container_free", "called\n"));

    /*
     * TODO:380:M: Free dessertSysifTable container data.
     */
}                               /* dessertSysifTable_container_free */

/**
 * prepare row for processing.
 *
 *  When the agent has located the row for a request, this function is
 *  called to prepare the row for processing. If you fully populated
 *  the data context during the index setup phase, you may not need to
 *  do anything.
 *
 * @param rowreq_ctx pointer to a context.
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 */
int
dessertSysifTable_row_prep(dessertSysifTable_rowreq_ctx * rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dessertSysifTable:dessertSysifTable_row_prep",
                "called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:390:o: Prepare row for request.
     * If populating row data was delayed, this is the place to
     * fill in the row for this request.
     */

    return MFD_SUCCESS;
}                               /* dessertSysifTable_row_prep */

/** @} */
