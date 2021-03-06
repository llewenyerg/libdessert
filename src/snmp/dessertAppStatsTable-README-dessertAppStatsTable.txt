************************************************************************
dessertAppStatsTable README
------------------------------------------------------------------------
  This readme file describes the code generated by mib2c (using the MIBs
  for Dummies (MFD) configuration file). The code generated was
  generated specifically for the following SNMP table:

     dessertAppStatsTable

  Your code will be called when the snmp agent receives requests for
  the dessertAppStatsTable table.  The agent will start by looking for the right
  row in your existing data to operate on, if one exists.


  Configuration Variables
  ------------------------------------------------------------
  Some variables used for code generation may be set to affect the code
  generation. You may override these variables by setting them in the
  file defaults/table-dessertAppStatsTable.m2d, and then re-running mib2c.

    m2c_table_settable (currently '0')
    --------------------------------------------------------
    This variable determines whether or not code is generated to support
    MIB object which have an access of read-write or read-create. The
    default is set based on whether or not the table contains writable
    objects, but can be over-ridden.

    Syntax: @eval $m2c_table_settable = 0@


    m2c_table_dependencies (currently '0')
    --------------------------------------------------------
    This variable determines whether or not code is generated to support
    checking dependencies between columns, rows or tables. The default
    is set based on whether or not the table contains writable objects,
    but can be over-ridden.

    Syntax: @eval $m2c_table_dependencies = 0@


    m2c_table_row_creation (currently '0')
    --------------------------------------------------------
    This variable determines whether or not code is generated to support
    checking creation of new rows via SNMP. The default is set based on
    whether or not the table contains read-create objects, but can be
    over-ridden.

    Syntax: @eval $m2c_table_row_creation = 0@


    m2c_context_reg (currently 'netsnmp_data_list')
    --------------------------------------------------------
    This variable contains the structure name to typedef for the
    dessertAppStatsTable_registration.

    During initilization, you will provide a pointer to a structure of
    this type. This pointer is used as a parameter to many functions so
    that you have access to your registration data. The default is a
    netsnmp_data_list pointer, which will allow you to keep multiple
    pointers tagged by a text name. If you have a new or existing structure
    you would rather use, you can redefine this variable.
    

    To avoid regenerating code, you may also change this typedef directly
    in the dessertAppStatsTable.h header.

    Syntax: @eval $m2c_context_reg = "struct my_registration_context@


    m2c_data_context (currently 'generated')
    --------------------------------------------------------
    This variable contains the structure name to typedef for the
    dessertAppStatsTable_data.

    This typedef is used in the row request context structure for the table,
    dessertAppStatsTable_rowreq_ctx.

    The typedef in the primary table context will be used for the data and
    undo structure types. This structure should contain all the data
    needed for all the columns in the table. The default is 'generated',
    which will cuase a new data strcuture to be generated with data members
    for each column.

    To avoid regenerating code, you may also change this typedef directly
    in the dessertAppStatsTable.h header.

    Syntax: @eval $m2c_data_context = "struct my_data_context"@


    m2c_data_allocate (currently '0')
    --------------------------------------------------------
    This variable determines whether or not the data context (see above)
    requires memory to be allocated. The default generated data structure
    does not. If you are using a custom data context which needs to
    allocate memory, override this value and two additional functions
    will be generated:

      dessertAppStatsTable_allocate_data
      dessertAppStatsTable_release_data

    Syntax: @eval $m2c_data_allocate = 1@


    m2c_data_init (currently '0')
    --------------------------------------------------------
    This variable determines whether or not the data context (see above)
    or any other items you have added to the table context requires
    initialization. The default generated data structure does not. If you
    are using a custom data context or have added items needing initialization
    to the table context, override this value and two additional functions
    will be generated:

      dessertAppStatsTable_rowreq_ctx_init
      dessertAppStatsTable_rowreq_ctx_cleanup

    Syntax: @eval 0 = 1@


    m2c_table_access (currently 'container-cached')
    ------------------------------------------------------------------
    This variable determines which data interface will be use to generate
    code for looking up data for a given index. The default is the
    'container-cached' access code, which caches the data in a netsnmp-
    container (usually a sorted array).

    Available options can be determined by checking for mib2c configuration
    files that begin with 'mfd-access-*'.

    Syntax: @eval $m2c_table_access = 'container-cached'@

 
    m2c_include_examples (currently '1')
    ------------------------------------------------------------------
    This variable determines whether or not to generate example code. The
    default is to generate example code.

    Syntax: @eval $m2c_include_examples = 0@


    m2c_data_transient (currently '0')
    ------------------------------------------------------------------
    This variable determines how the generated example code deals with the
    data during data lookup. See the table readme file for details on how
    the current table access method interprets this value. In general,
    a value of 0 indicates persistent data, 1 indicates semi-transient and
    2 indicates transient data.

    Syntax: @eval $m2c_data_transient = 0@


 Index(es) for the dessertAppStatsTable table
  ------------------------------------------------------------
  The index(es) for the dessertAppStatsTable table are:

     appStatsIndex:
        Syntax:      
        DataType:    
        ASN type:    
        C-code type: 

  You should know how to set all these values from your data context,
  dessertAppStatsTable_data.


************************************************************************
dessertAppStatsTable File Overview
------------------------------------------------------------------------
  Several files have been generated to implement the dessertAppStatsTable
  table. We'll go through these files, one by one, explaining each and
  letting you know which you need to edit.


File: dessertAppStatsTable_data_access.[c|h]
------------------------------------------------------------------------
  The dessertAppStatsTable_data_access file contains the interface to your data in
  its raw format.  These functions are used to build the row cache or 
  locate the row (depending on the table access method).

  Set MIB context
  -----------------
  TODO : Set MIB index values
  FUNC : dessertAppStatsTable_indexes_set
  WHERE: dessertAppStatsTable_data_access.c

  This is a convenience function for setting the index context from
  the native C data. Where necessary, value mapping should be done.

  This function should update the table index values (found in
  tbl_idx) for the given raw data.

  
  container summary
  ------------------------
    The container data access code is for cases when you want to
    store your data in the agent/sub-agent.

    ... to be continued...


  cache summary
  ------------------------
    The container-cached data access code is for cases when you want to
    cache your data in the agent/sub-agent.

    ... to be continued...




File: dessertAppStatsTable_enums.h
------------------------------------------------------------------------
  This file contains macros for mapping enumeration values when the
  enumerated values defined by the MIB do not match the values used
  internally.

  Review this file to see if any values need to be updated.


File: dessertAppStatsTable_data_get.c
------------------------------------------------------------------------
  Get data for column
  -------------------
  TODO : retrieve column data from raw data
  FUNC : appStatsName_get

  Get data for column
  -------------------
  TODO : retrieve column data from raw data
  FUNC : appStatsDesc_get

  Get data for column
  -------------------
  TODO : retrieve column data from raw data
  FUNC : appStatsNodeOrLink_get

  Get data for column
  -------------------
  TODO : retrieve column data from raw data
  FUNC : appStatsValueType_get

  Get data for column
  -------------------
  TODO : retrieve column data from raw data
  FUNC : appStatsMacAddress1_get

  Get data for column
  -------------------
  TODO : retrieve column data from raw data
  FUNC : appStatsMacAddress2_get

  Get data for column
  -------------------
  TODO : retrieve column data from raw data
  FUNC : appStatsTruthValue_get

  Get data for column
  -------------------
  TODO : retrieve column data from raw data
  FUNC : appStatsInteger32_get

  Get data for column
  -------------------
  TODO : retrieve column data from raw data
  FUNC : appStatsUnsigned32_get

  Get data for column
  -------------------
  TODO : retrieve column data from raw data
  FUNC : appStatsCounter64_get

  Get data for column
  -------------------
  TODO : retrieve column data from raw data
  FUNC : appStatsOctetString_get



File: dessertAppStatsTable_data_set.c
------------------------------------------------------------------------

  This table does not support set requests.


************************************************************************
dessertAppStatsTable Reference
------------------------------------------------------------------------

Function flow
----------------------------------------------------
To give you the general idea of how the functions flow works, this
example flow is from a complete table implementation.

NOTE: Depending on your configuration, some of the functions used in the
      examples below  may not have been generated for the
      dessertAppStatsTable table.

      Conversely, the examples below may not include some functions that
      were generated for the dessertAppStatsTable table.

To watch the flow of the dessertAppStatsTable table, use the
following debug tokens:

        snmp_agent
        helper:table:req
        dessertAppStatsTable
        verbose:dessertAppStatsTable
        internal:dessertAppStatsTable

e.g.
        snmpd -f -Le -DdessertAppStatsTable,verbose:dessertAppStatsTable,internal:dessertAppStatsTable


Initialization
--------------------------------
init_xxxTable: called                           xxx.c
   initialize_table_xxxTable                    xxx.c
      _xxxTable_initialize_interface            xxx_interface.c
         xxxTable_init_data                     xxx_data_access.c
      _xxxTable_container_init                  xxx_interface.c
         xxxTable_container_init                xxx_data_access.c


GET Request
--------------------------------
_cache_load                                     xxx_interface.c
   xxxTable_cache_load                          xxx_data_access.c
      xxxTable_allocate_rowreq_ctx              xxx_interface.c
         xxxTable_allocate_data                 xxx_data_get.c
         xxxTable_rowreq_ctx_init               xxx_data_get.c
      xxxTable_indexes_set                      xxx_data_get.c
         xxxTable_indexes_set_tbl_idx           xxx_data_get.c

xxxTable_pre_request                              

_mfd_xxxTable_object_lookup                     xxx_interface.c
   xxxTable_row_prep                            xxx_data_access.c

_mfd_xxxTable_get_values                        xxx_interface.c
   _mfd_xxxTable_get_column                     xxx_interface.c
      yyy_get                                   xxx_data_get.c

xxxTable_post_request


GETNEXT Request
--------------------------------
_cache_load                                     ...
xxxTable_pre_request                            ...
_mfd_xxxTable_object_lookup                     ...
_mfd_xxxTable_get_values                        ...
xxxTable_post_request                           ...


SET Request: success
--------------------------------
_cache_load                                     ...
xxxTable_pre_request
_mfd_xxxTable_object_lookup                     ...

_mfd_xxxTable_check_objects                     xxx_interface.c
   _xxxTable_check_column                       xxx_interface.c
      yyy_check_value                           xxx_data_set.c

_mfd_xxxTable_undo_setup                        xxx_interface.c
   xxxTable_allocate_data                       ...
   xxxTable_undo_setup                          xxx_interface.c
      _xxxTable_undo_setup_column               xxx_interface.c
         yyy_undo_setup                         xxx_data_set.c

_mfd_xxxTable_set_values                        xxx_interface.c
   _xxxTable_set_column                         xxx_interface.c
      yyy_set                                   xxx_data_set.c

_mfd_xxxTable_check_dependencies                xxx_interface.c
   xxxTable_check_dependencies                  xxx_data_set.c

_mfd_xxxTable_commit                            xxx_interface.c
   xxxTable_commit                              xxx_data_set.c

_mfd_xxxTable_undo_cleanup                      xxx_interface.c
   xxxTable_undo_cleanup                        xxx_data_set.c
      xxxTable_release_data                     ...

xxxTable_post_request                           ...


SET Request: row creation
--------------------------------
_cache_load                                     ...
xxxTable_pre_request

_mfd_xxxTable_object_lookup                     ...
   xxxTable_index_from_oid                      xxx_interface.c
   xxxTable_allocate_rowreq_ctx                 ...
      ...
   _xxxTable_check_indexes                      xxx_interface.c
      yyy_check_index                           xxx_data_set.c
      xxxTable_validate_index                   xxx_data_set.c

_mfd_xxxTable_check_objects                     ...
   _xxxTable_check_column                       ...
      yyy_check_value                           ...
   _xxxTable_check_column                       ...
      yyy_check_value                           ...

_mfd_xxxTable_undo_setup                        ...
_mfd_xxxTable_set_values                        ...
_mfd_xxxTable_check_dependencies                ...
_mfd_xxxTable_commit                            ...
_mfd_xxxTable_undo_cleanup                      ...
xxxTable_post_request                           ...


SET Resuest: value error
--------------------------------
_cache_load                                     ...
xxxTable_pre_request                            ...
_mfd_xxxTable_object_lookup                     ...

_mfd_xxxTable_check_objects                     ...
   _xxxTable_check_column                       ...
      yyy_check_value                           ...
      ERROR:"yyy value not supported"

xxxTable_post_request                           ...


SET Request: commit failure
--------------------------------
_cache_load                                     ...
xxxTable_pre_request                            ...
_mfd_xxxTable_object_lookup                     ...
_mfd_xxxTable_check_objects                     ...
_mfd_xxxTable_undo_setup                        ...
_mfd_xxxTable_set_values                        ...
_mfd_xxxTable_check_dependencies                ...

_mfd_xxxTable_commit                            ...
   xxxTable_commit                              ...
   ERROR: bad rc -1

_mfd_xxxTable_undo_commit                       xxx_interface.c
   xxxTable_undo_commit                         xxx_data_set.c

_mfd_xxxTable_undo_values                       xxx_interface.c
   _xxxTable_undo_column                        xxx_interface.c
      yyy_undo                                  xxx_data_set.c

_mfd_xxxTable_undo_cleanup                      ...
xxxTable_post_request                           ...


Row release (user initiated)
--------------------------------
xxxTable_release_rowreq_ctx                     xxx_interface.c
   xxxTable_rowreq_ctx_cleanup                  xxx_data_get.c
   xxxTable_release_data                        xxx_data_get.c



Table / column details
----------------------------------------------------
/**********************************************************************
 **********************************************************************
 ***
 *** Table dessertAppStatsTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DESSERT-MIB::dessertAppStatsTable is subid 8 of dessertObjects.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8, length: 12
*/

/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsIndex
 * appStatsIndex is subid 1 of dessertAppStatsEntry.
 * Its status is Current, and its access level is NoAccess.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.1
 * Description:
Index of the statistical datum
 *
 * Attributes:
 *   accessible 0     isscalar 0     enums  0      hasdefval 0
 *   readable   0     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is  (based on perltype )
 * The net-snmp type is . The C type decl is  ()
 *
 *
 *
 * NOTE: NODE appStatsIndex IS NOT ACCESSIBLE
 *
 *
 */
/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsName
 * appStatsName is subid 2 of dessertAppStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.2
 * Description:
The name of the statistical datum
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   0
 *   hint: 255a
 *
 * Ranges:  0 - 255;
 *
 * Its syntax is DisplayString (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsDesc
 * appStatsDesc is subid 3 of dessertAppStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.3
 * Description:
A short description of the statistical datum
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   0
 *   hint: 255a
 *
 * Ranges:  0 - 255;
 *
 * Its syntax is DisplayString (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsNodeOrLink
 * appStatsNodeOrLink is subid 4 of dessertAppStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.4
 * Description:
Determines which of the appStatsMacAddress{1,2} coloumns
        is valid and therefore indicates whether the information provided
        by this row relates to a node or a link. 
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 * Enum range: 3/8. Values:  none(0), node(1), link(2)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsValueType
 * appStatsValueType is subid 5 of dessertAppStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.5
 * Description:
Indicates which of the coloumns (appStatsTruthValue, 
        appStatsInterger32, appStatsUInteger32, appStatsCounter64, 
        appStatsOctetString) in the dessertAppStatsTable is actually valid.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 * Enum range: 3/8. Values:  bool(0), int32(1), uint32(2), counter64(3), octetstring(4)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsMacAddress1
 * appStatsMacAddress1 is subid 6 of dessertAppStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.6
 * Description:
The hardware address of a node.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   0
 *   hint: 1x:
 *
 * Ranges:  6;
 *
 * Its syntax is MacAddress (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 6)
 */
/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsMacAddress2
 * appStatsMacAddress2 is subid 7 of dessertAppStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.7
 * Description:
The hardware address of a second node.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   0
 *   hint: 1x:
 *
 * Ranges:  6;
 *
 * Its syntax is MacAddress (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 6)
 */
/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsTruthValue
 * appStatsTruthValue is subid 8 of dessertAppStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.8
 * Description:
A statistical datum with TruthValue semantics.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 * Enum range: 2/8. Values:  true(1), false(2)
 *
 * Its syntax is TruthValue (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
 */
/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsInteger32
 * appStatsInteger32 is subid 9 of dessertAppStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.9
 * Description:
A statistical datum with Integer32 semantics.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsUnsigned32
 * appStatsUnsigned32 is subid 10 of dessertAppStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.10
 * Description:
A statistical datum with Unsigned32 semantics.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is UNSIGNED32 (based on perltype UNSIGNED32)
 * The net-snmp type is ASN_UNSIGNED. The C type decl is u_long (u_long)
 */
/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsCounter64
 * appStatsCounter64 is subid 11 of dessertAppStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.11
 * Description:
A statistical datum with Counter64 semantics.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER64 (based on perltype COUNTER64)
 * The net-snmp type is ASN_COUNTER64. The C type decl is U64 (U64)
 */
/*---------------------------------------------------------------------
 * DESSERT-MIB::dessertAppStatsEntry.appStatsOctetString
 * appStatsOctetString is subid 12 of dessertAppStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.18898.0.19.10.1.1.8.1.12
 * Description:
A statistical datum containing of up to 1024 octets.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   0
 *   settable   0
 *
 * Ranges:  0 - 1024;
 *
 * Its syntax is OCTETSTR (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 1024)
 */


