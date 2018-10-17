

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransformedSensorDataExampleImpl.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "TransformedSensorDataExampleImpl.h"

#ifndef NDDS_STANDALONE_TYPE
#include "TransformedSensorDataExampleImplPlugin.h"
#endif

/* ========================================================================= */
const char *TransformedSensorDataExample_cTYPENAME = "TransformedSensorDataExample";

DDS_TypeCode* TransformedSensorDataExample_c_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode TransformedSensorDataExample_c_g_tc_ID_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c), NULL,NULL);
    static DDS_TypeCode TransformedSensorDataExample_c_g_tc_reading_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c), NULL,NULL);
    static DDS_TypeCode TransformedSensorDataExample_c_g_tc_active_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c), NULL,NULL);
    static DDS_TypeCode_Member TransformedSensorDataExample_c_g_tc_members[3]=
    {

        {
            (char *)"ID",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"reading",/* Member name */
            {
                1,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }, 
        {
            (char *)"active",/* Member name */
            {
                2,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode TransformedSensorDataExample_c_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"TransformedSensorDataExample", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            3, /* Number of members */
            TransformedSensorDataExample_c_g_tc_members, /* Members */
            DDS_VM_NONE , /* Ignored */         DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for TransformedSensorDataExample_c*/

    if (is_initialized) {
        return &TransformedSensorDataExample_c_g_tc;
    }

    TransformedSensorDataExample_c_g_tc_ID_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;
    TransformedSensorDataExample_c_g_tc_reading_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_float;
    TransformedSensorDataExample_c_g_tc_active_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_boolean;
    TransformedSensorDataExample_c_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& TransformedSensorDataExample_c_g_tc_ID_array;
    TransformedSensorDataExample_c_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& TransformedSensorDataExample_c_g_tc_reading_array;
    TransformedSensorDataExample_c_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& TransformedSensorDataExample_c_g_tc_active_array;

    TransformedSensorDataExample_c_g_tc._data._sampleAccessInfo = NULL;
    TransformedSensorDataExample_c_g_tc._data._typePlugin = NULL;

    is_initialized = RTI_TRUE;

    return &TransformedSensorDataExample_c_g_tc;
}

RTIBool TransformedSensorDataExample_c_initialize(
    TransformedSensorDataExample_c* sample) {
    return TransformedSensorDataExample_c_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool TransformedSensorDataExample_c_initialize_ex(
    TransformedSensorDataExample_c* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return TransformedSensorDataExample_c_initialize_w_params(
        sample,&allocParams);

}

RTIBool TransformedSensorDataExample_c_initialize_w_params(
    TransformedSensorDataExample_c* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->ID, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->reading, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_initArray(
        sample->active, ((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_BOOLEAN_SIZE)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void TransformedSensorDataExample_c_finalize(
    TransformedSensorDataExample_c* sample)
{

    TransformedSensorDataExample_c_finalize_ex(sample,RTI_TRUE);
}

void TransformedSensorDataExample_c_finalize_ex(
    TransformedSensorDataExample_c* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    TransformedSensorDataExample_c_finalize_w_params(
        sample,&deallocParams);
}

void TransformedSensorDataExample_c_finalize_w_params(
    TransformedSensorDataExample_c* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void TransformedSensorDataExample_c_finalize_optional_members(
    TransformedSensorDataExample_c* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool TransformedSensorDataExample_c_copy(
    TransformedSensorDataExample_c* dst,
    const TransformedSensorDataExample_c* src)
{

    if (dst == NULL || src == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_copyArray(
        dst->ID ,src->ID,((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_UNSIGNED_LONG_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->reading ,src->reading,((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_FLOAT_SIZE)) {
        return RTI_FALSE;
    }
    if (!RTICdrType_copyArray(
        dst->active ,src->active,((TRANSFORMED_SENSOR_DATA_ARRAY_SIZE_c)), RTI_CDR_BOOLEAN_SIZE)) {
        return RTI_FALSE;
    }

    return RTI_TRUE;

}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'TransformedSensorDataExample_c' sequence class.
*/
#define T TransformedSensorDataExample_c
#define TSeq TransformedSensorDataExample_cSeq

#define T_initialize_w_params TransformedSensorDataExample_c_initialize_w_params

#define T_finalize_w_params   TransformedSensorDataExample_c_finalize_w_params
#define T_copy       TransformedSensorDataExample_c_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

