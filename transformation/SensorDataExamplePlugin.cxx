

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SensorDataExample.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_c_h
#include "ndds/ndds_c.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "rti/topic/cdr/Serialization.hpp"

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include "SensorDataExamplePlugin.hpp"

/* ----------------------------------------------------------------------------
*  Type SensorData
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

SensorData *
SensorDataPluginSupport_create_data(void)
{
    try {
        SensorData *sample = new SensorData;    
        rti::topic::allocate_sample(*sample);
        return sample;
    } catch (...) {
        return NULL;
    }
}

void 
SensorDataPluginSupport_destroy_data(
    SensorData *sample) 
{
    delete sample;
}

RTIBool 
SensorDataPluginSupport_copy_data(
    SensorData *dst,
    const SensorData *src)
{
    try {
        *dst = *src;
    } catch (...) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
SensorDataPlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */
    return PRESTypePluginDefaultParticipantData_new(participant_info);
}

void 
SensorDataPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL) {
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
SensorDataPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    try {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize;

        if (top_level_registration) {} /* To avoid warnings */
        if (containerPluginContext) {} /* To avoid warnings */

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            SensorDataPluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            SensorDataPluginSupport_destroy_data,
            NULL , NULL );

        if (epd == NULL) {
            return NULL;
        } 

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = SensorDataPlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                SensorDataPlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                SensorDataPlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    } catch (...) {
        return NULL;
    }
}

void 
SensorDataPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
SensorDataPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorData *sample,
    void *handle)
{
    try {
        rti::topic::reset_sample(*sample);
    } catch(const std::exception& ex) {
        RTICdrLog_exception(
            "SensorDataPlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_s,
            "exception: ",
            ex.what());           
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
SensorDataPlugin_copy_sample(
    PRESTypePluginEndpointData,
    SensorData *dst,
    const SensorData *src)
{
    return SensorDataPluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
SensorDataPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
SensorDataPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SensorData *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{

    try {
        char * RTI_position = NULL;
        RTIBool retval = RTI_TRUE;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }
            RTI_position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_sample) {

            if (!rti::topic::cdr::serialize(
                stream, &sample->ID())) {
                return RTI_FALSE;
            }

            if (!rti::topic::cdr::serialize(
                stream, &sample->reading())) {
                return RTI_FALSE;
            }

            if (!rti::topic::cdr::serialize(
                stream, &sample->active())) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,RTI_position);
        }

        return retval;

    } catch (...) {
        return RTI_FALSE;
    }

}

RTIBool 
SensorDataPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorData *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * RTI_position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        RTI_position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        if (!rti::topic::cdr::deserialize(
            stream, 
            &sample->ID())) {
            goto fin; 
        }
        if (!rti::topic::cdr::deserialize(
            stream, 
            &sample->reading())) {
            goto fin; 
        }
        if (!rti::topic::cdr::deserialize(
            stream, 
            &sample->active())) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,RTI_position);
    }

    return RTI_TRUE;

}

RTIBool
SensorDataPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const SensorData *sample,
    dds::core::policy::DataRepresentationId representation)
{
    using namespace dds::core::policy;

    try{
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        encapsulationId = DDS_DataRepresentationQosPolicy_getNativeEncapsulation(
            representation);
        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        SensorDataPlugin_get_serialized_sample_max_size(
            (PRESTypePluginEndpointData)&epd, 
            RTI_TRUE, 
            encapsulationId,
            0);

        if (buffer == NULL) {
            *length = 
            SensorDataPlugin_get_serialized_sample_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0,
                sample);

            if (*length == 0) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }    

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = SensorDataPlugin_serialize(
            (PRESTypePluginEndpointData)&epd, 
            sample, 
            &stream, 
            RTI_TRUE, 
            encapsulationId,
            RTI_TRUE, 
            NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    } catch (...) {
        return RTI_FALSE;
    }
}

RTIBool
SensorDataPlugin_deserialize_from_cdr_buffer(
    SensorData *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    rti::topic::reset_sample(*sample);
    return SensorDataPlugin_deserialize_sample( 
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream, 
        RTI_TRUE, 
        RTI_TRUE, 
        NULL);
}

RTIBool 
SensorDataPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SensorData **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    try {
        RTIBool result = RTI_FALSE;
        const char *METHOD_NAME = "SensorDataPlugin_deserialize";
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;

        result= SensorDataPlugin_deserialize_sample( 
            endpoint_data, (sample != NULL)?*sample:NULL,
            stream, deserialize_encapsulation, deserialize_sample, 
            endpoint_plugin_qos);
        if (result) {
            if (stream->_xTypesState.unassignable) {
                result = RTI_FALSE;
            }
        }
        if (!result && stream->_xTypesState.unassignable ) {

            RTICdrLog_exception(
                METHOD_NAME, 
                &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                "SensorData");

        }
        return result;

    } catch (...) {
        return RTI_FALSE;
    }
}

RTIBool SensorDataPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)

    try    
{
    char * RTI_position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        RTI_position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipUnsignedLong (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipFloat (stream)) {
            goto fin; 
        }
        if (!RTICdrStream_skipBoolean (stream)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,RTI_position);
    }

    return RTI_TRUE;
}
catch (...) {
    return RTI_FALSE;
}

unsigned int 
SensorDataPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool *overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */ 
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
        current_alignment);

    current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
        current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;

}

unsigned int 
SensorDataPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = SensorDataPlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return 0;
    }    
}

unsigned int 
SensorDataPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    try {

        unsigned int initial_alignment = current_alignment;

        unsigned int encapsulation_size = current_alignment;

        if (endpoint_data) {} /* To avoid warnings */ 

        if (include_encapsulation) {
            if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                return 1;
            }
            RTICdrStream_getEncapsulationSize(encapsulation_size);
            encapsulation_size -= current_alignment;
            current_alignment = 0;
            initial_alignment = 0;
        }

        current_alignment +=RTICdrType_getUnsignedLongMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getFloatMaxSizeSerialized(
            current_alignment);
        current_alignment +=RTICdrType_getBooleanMaxSizeSerialized(
            current_alignment);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    } catch (...) {
        return 0;
    }

}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
SensorDataPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SensorData * sample) 
{

    try {  
        unsigned int initial_alignment = current_alignment;

        unsigned int encapsulation_size = current_alignment;
        struct PRESTypePluginDefaultEndpointData epd;   

        if (sample==NULL) {
            return 0;
        }
        if (endpoint_data == NULL) {
            endpoint_data = (PRESTypePluginEndpointData) &epd;
            PRESTypePluginDefaultEndpointData_setBaseAlignment(
                endpoint_data,
                current_alignment);        
        }

        if (include_encapsulation) {
            if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                return 1;
            }
            RTICdrStream_getEncapsulationSize(encapsulation_size);
            encapsulation_size -= current_alignment;
            current_alignment = 0;
            initial_alignment = 0;
            PRESTypePluginDefaultEndpointData_setBaseAlignment(
                endpoint_data,
                current_alignment);
        }

        current_alignment += RTICdrType_getUnsignedLongMaxSizeSerialized(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment));

        current_alignment += RTICdrType_getFloatMaxSizeSerialized(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment));

        current_alignment += RTICdrType_getBooleanMaxSizeSerialized(
            PRESTypePluginDefaultEndpointData_getAlignment(
                endpoint_data, current_alignment));
        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    } catch (...) {
        return RTI_FALSE;
    }

}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
SensorDataPlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
SensorDataPlugin_serialize_key_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    const SensorData *sample, 
    struct RTICdrStream *stream,    
    RTIEncapsulationId encapsulation_id,
    void *endpoint_plugin_qos)
{
    return SensorDataPlugin_serialize_key(endpoint_data,
    sample, 
    stream,    
    RTI_FALSE,
    encapsulation_id,
    RTI_TRUE,
    endpoint_plugin_qos);
}

RTIBool 
SensorDataPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SensorData *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{

    try {
        char * RTI_position = NULL;

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }
            RTI_position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_key) {

            if (!SensorDataPlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,RTI_position);
        }

        return RTI_TRUE;
    } catch (...) {
        return RTI_FALSE;
    }

}

RTIBool SensorDataPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorData *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    try {
        char * RTI_position = NULL;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if (deserialize_encapsulation) {
            if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                return RTI_FALSE;
            }

            RTI_position = RTICdrStream_resetAlignment(stream);
        }
        if (deserialize_key) {

            if (!SensorDataPlugin_deserialize_sample(
                endpoint_data, sample, stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }

        if(deserialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,RTI_position);
        }

        return RTI_TRUE;
    } catch (...) {
        return RTI_FALSE;
    }

}

RTIBool SensorDataPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SensorData **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= SensorDataPlugin_deserialize_key_sample( 
            endpoint_data, (sample != NULL)?*sample:NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result) {
            if (stream->_xTypesState.unassignable) {
                result = RTI_FALSE;
            }
        }

        return result;    
    } catch (...) {
        return RTI_FALSE;
    }     
}

unsigned int
SensorDataPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += SensorDataPlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;

}

unsigned int
SensorDataPlugin_get_serialized_key_max_size_for_keyhash_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    return SensorDataPlugin_get_serialized_key_max_size_ex(
        endpoint_data,
        overflow,
        RTI_FALSE,
        encapsulation_id,
        current_alignment);
}

unsigned int
SensorDataPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = SensorDataPlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return RTI_FALSE;
    }    
}

unsigned int
SensorDataPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = SensorDataPlugin_get_serialized_key_max_size_for_keyhash_ex(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
SensorDataPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SensorData *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)

    try    
{
    char * RTI_position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        RTI_position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!SensorDataPlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,RTI_position);
    }

    return RTI_TRUE;
} catch (...) {
    return RTI_FALSE;
} 

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *SensorDataPlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    SensorDataPlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    SensorDataPlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    SensorDataPlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    SensorDataPlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    SensorDataPlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    SensorDataPlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    SensorDataPlugin_destroy_sample;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) SensorDataPlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) SensorDataPlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    SensorDataPlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    SensorDataPlugin_get_serialized_sample_min_size;;
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    SensorDataPlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    SensorDataPlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    SensorDataPlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode = (struct RTICdrTypeCode *) 
    &rti::topic::dynamic_type<SensorData>::get().native();
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    SensorDataPlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    SensorDataPlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    SensorDataPlugin_get_serialized_sample_size;

    static const char * TYPE_NAME = "SensorData";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
SensorDataPlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 

/* ----------------------------------------------------------------------------
*  Type SensorDataExample
* -------------------------------------------------------------------------- */

/* -----------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------- */

SensorDataExample *
SensorDataExamplePluginSupport_create_data(void)
{
    try {
        SensorDataExample *sample = new SensorDataExample;    
        rti::topic::allocate_sample(*sample);
        return sample;
    } catch (...) {
        return NULL;
    }
}

void 
SensorDataExamplePluginSupport_destroy_data(
    SensorDataExample *sample) 
{
    delete sample;
}

RTIBool 
SensorDataExamplePluginSupport_copy_data(
    SensorDataExample *dst,
    const SensorDataExample *src)
{
    try {
        *dst = *src;
    } catch (...) {
        return RTI_FALSE;
    }

    return RTI_TRUE;
}

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

PRESTypePluginParticipantData 
SensorDataExamplePlugin_on_participant_attached(
    void *registration_data,
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration,
    void *container_plugin_context,
    RTICdrTypeCode *type_code)
{
    if (registration_data) {} /* To avoid warnings */
    if (participant_info) {} /* To avoid warnings */
    if (top_level_registration) {} /* To avoid warnings */
    if (container_plugin_context) {} /* To avoid warnings */
    if (type_code) {} /* To avoid warnings */
    return PRESTypePluginDefaultParticipantData_new(participant_info);
}

void 
SensorDataExamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data)
{
    if (participant_data != NULL) {
        PRESTypePluginDefaultParticipantData_delete(participant_data);
    }
}

PRESTypePluginEndpointData
SensorDataExamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *containerPluginContext)
{
    try {
        PRESTypePluginEndpointData epd = NULL;
        unsigned int serializedSampleMaxSize;

        if (top_level_registration) {} /* To avoid warnings */
        if (containerPluginContext) {} /* To avoid warnings */

        epd = PRESTypePluginDefaultEndpointData_new(
            participant_data,
            endpoint_info,
            (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
            SensorDataExamplePluginSupport_create_data,
            (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
            SensorDataExamplePluginSupport_destroy_data,
            NULL , NULL );

        if (epd == NULL) {
            return NULL;
        } 

        if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
            serializedSampleMaxSize = SensorDataExamplePlugin_get_serialized_sample_max_size(
                epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

            PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

            if (PRESTypePluginDefaultEndpointData_createWriterPool(
                epd,
                endpoint_info,
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                SensorDataExamplePlugin_get_serialized_sample_max_size, epd,
                (PRESTypePluginGetSerializedSampleSizeFunction)
                SensorDataExamplePlugin_get_serialized_sample_size,
                epd) == RTI_FALSE) {
                PRESTypePluginDefaultEndpointData_delete(epd);
                return NULL;
            }
        }

        return epd;
    } catch (...) {
        return NULL;
    }
}

void 
SensorDataExamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data)
{  
    PRESTypePluginDefaultEndpointData_delete(endpoint_data);
}

void    
SensorDataExamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample *sample,
    void *handle)
{
    try {
        rti::topic::reset_sample(*sample);
    } catch(const std::exception& ex) {
        RTICdrLog_exception(
            "SensorDataExamplePlugin_return_sample",
            &RTI_LOG_ANY_FAILURE_s,
            "exception: ",
            ex.what());           
    }

    PRESTypePluginDefaultEndpointData_returnSample(
        endpoint_data, sample, handle);
}

RTIBool 
SensorDataExamplePlugin_copy_sample(
    PRESTypePluginEndpointData,
    SensorDataExample *dst,
    const SensorDataExample *src)
{
    return SensorDataExamplePluginSupport_copy_data(dst,src);
}

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */
unsigned int 
SensorDataExamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

RTIBool 
SensorDataExamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SensorDataExample *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos)
{

    try {
        char * RTI_position = NULL;
        RTIBool retval = RTI_TRUE;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }
            RTI_position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_sample) {

            if (!RTICdrStream_serializeNonPrimitiveArray(
                stream,  
                (void *) sample->sensors().data(),
                ((SENSOR_DATA_ARRAY_SIZE)), 
                sizeof(SensorData),
                (RTICdrStreamSerializeFunction)SensorDataPlugin_serialize,
                RTI_FALSE,
                encapsulation_id, 
                RTI_TRUE,
                endpoint_data,endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,RTI_position);
        }

        return retval;

    } catch (...) {
        return RTI_FALSE;
    }

}

RTIBool 
SensorDataExamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample *sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{

    char * RTI_position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */
    if (deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }

        RTI_position = RTICdrStream_resetAlignment(stream);
    }
    if(deserialize_sample) {

        if (!RTICdrStream_deserializeNonPrimitiveArray(
            stream, 
            (void *) sample->sensors().data(),
            ((SENSOR_DATA_ARRAY_SIZE)), 
            sizeof(SensorData),
            (RTICdrStreamDeserializeFunction)SensorDataPlugin_deserialize_sample,
            RTI_FALSE,
            RTI_TRUE,
            endpoint_data,
            endpoint_plugin_qos)) {
            goto fin; 
        }
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,RTI_position);
    }

    return RTI_TRUE;

}

RTIBool
SensorDataExamplePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const SensorDataExample *sample,
    dds::core::policy::DataRepresentationId representation)
{
    using namespace dds::core::policy;

    try{
        RTIEncapsulationId encapsulationId = RTI_CDR_ENCAPSULATION_ID_INVALID;
        struct RTICdrStream stream;
        struct PRESTypePluginDefaultEndpointData epd;
        RTIBool result;

        if (length == NULL) {
            return RTI_FALSE;
        }

        encapsulationId = DDS_DataRepresentationQosPolicy_getNativeEncapsulation(
            representation);
        if (encapsulationId == RTI_CDR_ENCAPSULATION_ID_INVALID) {
            return RTI_FALSE;
        }

        epd._maxSizeSerializedSample =
        SensorDataExamplePlugin_get_serialized_sample_max_size(
            (PRESTypePluginEndpointData)&epd, 
            RTI_TRUE, 
            encapsulationId,
            0);

        if (buffer == NULL) {
            *length = 
            SensorDataExamplePlugin_get_serialized_sample_size(
                (PRESTypePluginEndpointData)&epd,
                RTI_TRUE,
                encapsulationId,
                0,
                sample);

            if (*length == 0) {
                return RTI_FALSE;
            }

            return RTI_TRUE;
        }    

        RTICdrStream_init(&stream);
        RTICdrStream_set(&stream, (char *)buffer, *length);

        result = SensorDataExamplePlugin_serialize(
            (PRESTypePluginEndpointData)&epd, 
            sample, 
            &stream, 
            RTI_TRUE, 
            encapsulationId,
            RTI_TRUE, 
            NULL);  

        *length = RTICdrStream_getCurrentPositionOffset(&stream);
        return result;     
    } catch (...) {
        return RTI_FALSE;
    }
}

RTIBool
SensorDataExamplePlugin_deserialize_from_cdr_buffer(
    SensorDataExample *sample,
    const char * buffer,
    unsigned int length)
{
    struct RTICdrStream stream;
    struct PRESTypePluginDefaultEndpointData epd;

    RTICdrStream_init(&stream);
    RTICdrStream_set(&stream, (char *)buffer, length);

    epd._assignabilityProperty.acceptUnknownEnumValue = RTI_XCDR_TRUE;
    epd._assignabilityProperty.acceptUnknownUnionDiscriminator = RTI_XCDR_TRUE;

    rti::topic::reset_sample(*sample);
    return SensorDataExamplePlugin_deserialize_sample( 
        (PRESTypePluginEndpointData)&epd,
        sample,
        &stream, 
        RTI_TRUE, 
        RTI_TRUE, 
        NULL);
}

RTIBool 
SensorDataExamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample **sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,   
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos)
{
    try {
        RTIBool result = RTI_FALSE;
        const char *METHOD_NAME = "SensorDataExamplePlugin_deserialize";
        if (drop_sample) {} /* To avoid warnings */

        stream->_xTypesState.unassignable = RTI_FALSE;

        result= SensorDataExamplePlugin_deserialize_sample( 
            endpoint_data, (sample != NULL)?*sample:NULL,
            stream, deserialize_encapsulation, deserialize_sample, 
            endpoint_plugin_qos);
        if (result) {
            if (stream->_xTypesState.unassignable) {
                result = RTI_FALSE;
            }
        }
        if (!result && stream->_xTypesState.unassignable ) {

            RTICdrLog_exception(
                METHOD_NAME, 
                &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                "SensorDataExample");

        }
        return result;

    } catch (...) {
        return RTI_FALSE;
    }
}

RTIBool SensorDataExamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream,   
    RTIBool skip_encapsulation,
    RTIBool skip_sample, 
    void *endpoint_plugin_qos)

    try    
{
    char * RTI_position = NULL;

    RTIBool done = RTI_FALSE;

    if (endpoint_data) {} /* To avoid warnings */
    if (endpoint_plugin_qos) {} /* To avoid warnings */

    if(skip_encapsulation) {
        if (!RTICdrStream_skipEncapsulation(stream)) {
            return RTI_FALSE;
        }

        RTI_position = RTICdrStream_resetAlignment(stream);
    }

    if (skip_sample) {

        if (!RTICdrStream_skipNonPrimitiveArray(
            stream,((SENSOR_DATA_ARRAY_SIZE)), sizeof(SensorData),
            (RTICdrStreamSkipFunction)SensorDataPlugin_skip, 
            RTI_FALSE,RTI_TRUE,
            endpoint_data,endpoint_plugin_qos)){
            goto fin; 
        }      
    }

    done = RTI_TRUE;
  fin:
    if (done != RTI_TRUE && 
    RTICdrStream_getRemainder(stream) >=
    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
        return RTI_FALSE;   
    }
    if(skip_encapsulation) {
        RTICdrStream_restoreAlignment(stream,RTI_position);
    }

    return RTI_TRUE;
}
catch (...) {
    return RTI_FALSE;
}

unsigned int 
SensorDataExamplePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool *overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment +=RTICdrType_getNonPrimitiveArrayMaxSizeSerializedEx(
        overflow,
        current_alignment, ((SENSOR_DATA_ARRAY_SIZE)),
        SensorDataPlugin_get_serialized_sample_max_size_ex,
        RTI_FALSE,encapsulation_id,endpoint_data);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return  current_alignment - initial_alignment;

}

unsigned int 
SensorDataExamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = SensorDataExamplePlugin_get_serialized_sample_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return 0;
    }    
}

unsigned int 
SensorDataExamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    try {

        unsigned int initial_alignment = current_alignment;

        unsigned int encapsulation_size = current_alignment;

        if (endpoint_data) {} /* To avoid warnings */ 

        if (include_encapsulation) {
            if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                return 1;
            }
            RTICdrStream_getEncapsulationSize(encapsulation_size);
            encapsulation_size -= current_alignment;
            current_alignment = 0;
            initial_alignment = 0;
        }

        current_alignment +=RTICdrType_getNonPrimitiveArrayMaxSizeSerialized(
            current_alignment, ((SENSOR_DATA_ARRAY_SIZE)),
            SensorDataPlugin_get_serialized_sample_min_size,
            RTI_FALSE,encapsulation_id,endpoint_data);

        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return  current_alignment - initial_alignment;
    } catch (...) {
        return 0;
    }

}

/* Returns the size of the sample in its serialized form (in bytes).
* It can also be an estimation in excess of the real buffer needed 
* during a call to the serialize() function.
* The value reported does not have to include the space for the
* encapsulation flags.
*/
unsigned int
SensorDataExamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SensorDataExample * sample) 
{

    try {  
        unsigned int initial_alignment = current_alignment;

        unsigned int encapsulation_size = current_alignment;
        struct PRESTypePluginDefaultEndpointData epd;   

        if (sample==NULL) {
            return 0;
        }
        if (endpoint_data == NULL) {
            endpoint_data = (PRESTypePluginEndpointData) &epd;
            PRESTypePluginDefaultEndpointData_setBaseAlignment(
                endpoint_data,
                current_alignment);        
        }

        if (include_encapsulation) {
            if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                return 1;
            }
            RTICdrStream_getEncapsulationSize(encapsulation_size);
            encapsulation_size -= current_alignment;
            current_alignment = 0;
            initial_alignment = 0;
            PRESTypePluginDefaultEndpointData_setBaseAlignment(
                endpoint_data,
                current_alignment);
        }

        current_alignment += RTICdrType_getNonPrimitiveArraySerializedSize(
            current_alignment, ((SENSOR_DATA_ARRAY_SIZE)), 
            sizeof(SensorData),
            (RTICdrTypeGetSerializedSampleSizeFunction)SensorDataPlugin_get_serialized_sample_size,
            RTI_FALSE,encapsulation_id,
            (const void *) sample->sensors().data(), 
            endpoint_data);
        if (include_encapsulation) {
            current_alignment += encapsulation_size;
        }
        return current_alignment - initial_alignment;
    } catch (...) {
        return RTI_FALSE;
    }

}

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */

PRESTypePluginKeyKind 
SensorDataExamplePlugin_get_key_kind(void)
{
    return PRES_TYPEPLUGIN_NO_KEY;
}

RTIBool 
SensorDataExamplePlugin_serialize_key_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    const SensorDataExample *sample, 
    struct RTICdrStream *stream,    
    RTIEncapsulationId encapsulation_id,
    void *endpoint_plugin_qos)
{
    return SensorDataExamplePlugin_serialize_key(endpoint_data,
    sample, 
    stream,    
    RTI_FALSE,
    encapsulation_id,
    RTI_TRUE,
    endpoint_plugin_qos);
}

RTIBool 
SensorDataExamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SensorDataExample *sample, 
    struct RTICdrStream *stream,    
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos)
{

    try {
        char * RTI_position = NULL;

        if(serialize_encapsulation) {
            if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                return RTI_FALSE;
            }
            RTI_position = RTICdrStream_resetAlignment(stream);
        }

        if(serialize_key) {

            if (!SensorDataExamplePlugin_serialize(
                endpoint_data,
                sample,
                stream,
                RTI_FALSE, encapsulation_id,
                RTI_TRUE,
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }

        }

        if(serialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,RTI_position);
        }

        return RTI_TRUE;
    } catch (...) {
        return RTI_FALSE;
    }

}

RTIBool SensorDataExamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{

    try {
        char * RTI_position = NULL;

        if (endpoint_data) {} /* To avoid warnings */
        if (endpoint_plugin_qos) {} /* To avoid warnings */

        if (deserialize_encapsulation) {
            if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                return RTI_FALSE;
            }

            RTI_position = RTICdrStream_resetAlignment(stream);
        }
        if (deserialize_key) {

            if (!SensorDataExamplePlugin_deserialize_sample(
                endpoint_data, sample, stream, 
                RTI_FALSE, RTI_TRUE, 
                endpoint_plugin_qos)) {
                return RTI_FALSE;
            }
        }

        if(deserialize_encapsulation) {
            RTICdrStream_restoreAlignment(stream,RTI_position);
        }

        return RTI_TRUE;
    } catch (...) {
        return RTI_FALSE;
    }

}

RTIBool SensorDataExamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos)
{
    try {
        RTIBool result;
        if (drop_sample) {} /* To avoid warnings */
        stream->_xTypesState.unassignable = RTI_FALSE;
        result= SensorDataExamplePlugin_deserialize_key_sample( 
            endpoint_data, (sample != NULL)?*sample:NULL, stream,
            deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
        if (result) {
            if (stream->_xTypesState.unassignable) {
                result = RTI_FALSE;
            }
        }

        return result;    
    } catch (...) {
        return RTI_FALSE;
    }     
}

unsigned int
SensorDataExamplePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{

    unsigned int initial_alignment = current_alignment;

    unsigned int encapsulation_size = current_alignment;

    if (endpoint_data) {} /* To avoid warnings */
    if (overflow) {} /* To avoid warnings */

    if (include_encapsulation) {
        if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
            return 1;
        }
        RTICdrStream_getEncapsulationSize(encapsulation_size);
        encapsulation_size -= current_alignment;
        current_alignment = 0;
        initial_alignment = 0;
    }

    current_alignment += SensorDataExamplePlugin_get_serialized_sample_max_size_ex(
        endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

    if (include_encapsulation) {
        current_alignment += encapsulation_size;
    }
    return current_alignment - initial_alignment;

}

unsigned int
SensorDataExamplePlugin_get_serialized_key_max_size_for_keyhash_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    return SensorDataExamplePlugin_get_serialized_key_max_size_ex(
        endpoint_data,
        overflow,
        RTI_FALSE,
        encapsulation_id,
        current_alignment);
}

unsigned int
SensorDataExamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    try {
        unsigned int size;
        RTIBool overflow = RTI_FALSE;

        size = SensorDataExamplePlugin_get_serialized_key_max_size_ex(
            endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

        if (overflow) {
            size = RTI_CDR_MAX_SERIALIZED_SIZE;
        }

        return size;
    } catch (...) {
        return RTI_FALSE;
    }    
}

unsigned int
SensorDataExamplePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment)
{
    unsigned int size;
    RTIBool overflow = RTI_FALSE;

    size = SensorDataExamplePlugin_get_serialized_key_max_size_for_keyhash_ex(
        endpoint_data,
        &overflow,
        encapsulation_id,
        current_alignment);

    if (overflow) {
        size = RTI_CDR_MAX_SERIALIZED_SIZE;
    }

    return size;
}

RTIBool 
SensorDataExamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos)

    try    
{
    char * RTI_position = NULL;

    RTIBool done = RTI_FALSE;
    RTIBool error = RTI_FALSE;

    if (stream == NULL) {
        error = RTI_TRUE;
        goto fin;
    }
    if(deserialize_encapsulation) {
        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
            return RTI_FALSE;
        }
        RTI_position = RTICdrStream_resetAlignment(stream);
    }

    if (deserialize_key) {

        if (!SensorDataExamplePlugin_deserialize_sample(
            endpoint_data, sample, stream, RTI_FALSE, 
            RTI_TRUE, endpoint_plugin_qos)) {
            return RTI_FALSE;
        }

    }

    done = RTI_TRUE;
  fin:
    if(!error) {
        if (done != RTI_TRUE && 
        RTICdrStream_getRemainder(stream) >=
        RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
            return RTI_FALSE;   
        }
    } else {
        return RTI_FALSE;
    }       

    if(deserialize_encapsulation) {
        RTICdrStream_restoreAlignment(stream,RTI_position);
    }

    return RTI_TRUE;
} catch (...) {
    return RTI_FALSE;
} 

/* ------------------------------------------------------------------------
* Plug-in Installation Methods
* ------------------------------------------------------------------------ */
struct PRESTypePlugin *SensorDataExamplePlugin_new(void) 
{ 
    struct PRESTypePlugin *plugin = NULL;
    const struct PRESTypePluginVersion PLUGIN_VERSION = 
    PRES_TYPE_PLUGIN_VERSION_2_0;

    RTIOsapiHeap_allocateStructure(
        &plugin, struct PRESTypePlugin);
    if (plugin == NULL) {
        return NULL;
    }

    plugin->version = PLUGIN_VERSION;

    /* set up parent's function pointers */
    plugin->onParticipantAttached =
    (PRESTypePluginOnParticipantAttachedCallback)
    SensorDataExamplePlugin_on_participant_attached;
    plugin->onParticipantDetached =
    (PRESTypePluginOnParticipantDetachedCallback)
    SensorDataExamplePlugin_on_participant_detached;
    plugin->onEndpointAttached =
    (PRESTypePluginOnEndpointAttachedCallback)
    SensorDataExamplePlugin_on_endpoint_attached;
    plugin->onEndpointDetached =
    (PRESTypePluginOnEndpointDetachedCallback)
    SensorDataExamplePlugin_on_endpoint_detached;

    plugin->copySampleFnc =
    (PRESTypePluginCopySampleFunction)
    SensorDataExamplePlugin_copy_sample;
    plugin->createSampleFnc =
    (PRESTypePluginCreateSampleFunction)
    SensorDataExamplePlugin_create_sample;
    plugin->destroySampleFnc =
    (PRESTypePluginDestroySampleFunction)
    SensorDataExamplePlugin_destroy_sample;

    plugin->serializeFnc = 
    (PRESTypePluginSerializeFunction) SensorDataExamplePlugin_serialize;
    plugin->deserializeFnc =
    (PRESTypePluginDeserializeFunction) SensorDataExamplePlugin_deserialize;
    plugin->getSerializedSampleMaxSizeFnc =
    (PRESTypePluginGetSerializedSampleMaxSizeFunction)
    SensorDataExamplePlugin_get_serialized_sample_max_size;
    plugin->getSerializedSampleMinSizeFnc =
    (PRESTypePluginGetSerializedSampleMinSizeFunction)
    SensorDataExamplePlugin_get_serialized_sample_min_size;;
    plugin->getSampleFnc =
    (PRESTypePluginGetSampleFunction)
    SensorDataExamplePlugin_get_sample;
    plugin->returnSampleFnc =
    (PRESTypePluginReturnSampleFunction)
    SensorDataExamplePlugin_return_sample;
    plugin->getKeyKindFnc =
    (PRESTypePluginGetKeyKindFunction)
    SensorDataExamplePlugin_get_key_kind;

    /* These functions are only used for keyed types. As this is not a keyed
    type they are all set to NULL
    */
    plugin->serializeKeyFnc = NULL ;    
    plugin->deserializeKeyFnc = NULL;  
    plugin->getKeyFnc = NULL;
    plugin->returnKeyFnc = NULL;
    plugin->instanceToKeyFnc = NULL;
    plugin->keyToInstanceFnc = NULL;
    plugin->getSerializedKeyMaxSizeFnc = NULL;
    plugin->instanceToKeyHashFnc = NULL;
    plugin->serializedSampleToKeyHashFnc = NULL;
    plugin->serializedKeyToKeyHashFnc = NULL;    
    plugin->typeCode = (struct RTICdrTypeCode *) 
    &rti::topic::dynamic_type<SensorDataExample>::get().native();
    plugin->languageKind = PRES_TYPEPLUGIN_CPPSTL_LANG;

    /* Serialized buffer */
    plugin->getBuffer = 
    (PRESTypePluginGetBufferFunction)
    SensorDataExamplePlugin_get_buffer;
    plugin->returnBuffer = 
    (PRESTypePluginReturnBufferFunction)
    SensorDataExamplePlugin_return_buffer;
    plugin->getBufferWithParams = NULL;
    plugin->returnBufferWithParams = NULL;
    plugin->getSerializedSampleSizeFnc =
    (PRESTypePluginGetSerializedSampleSizeFunction)
    SensorDataExamplePlugin_get_serialized_sample_size;

    static const char * TYPE_NAME = "SensorDataExample";
    plugin->endpointTypeName = TYPE_NAME;
    plugin->isMetpType = RTI_FALSE;
    return plugin;
}

void
SensorDataExamplePlugin_delete(struct PRESTypePlugin *plugin)
{
    RTIOsapiHeap_freeStructure(plugin);
} 
#undef RTI_CDR_CURRENT_SUBMODULE 
