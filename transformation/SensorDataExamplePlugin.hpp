

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SensorDataExample.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SensorDataExamplePlugin_229212648_h
#define SensorDataExamplePlugin_229212648_h

#include "SensorDataExample.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define SensorDataPlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define SensorDataPlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SensorDataPlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define SensorDataPlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SensorDataPlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SensorData*
SensorDataPluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SensorData*
SensorDataPluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SensorData*
SensorDataPluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SensorDataPluginSupport_copy_data(
    SensorData *out,
    const SensorData *in);

NDDSUSERDllExport extern void 
SensorDataPluginSupport_destroy_data_w_params(
    SensorData *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SensorDataPluginSupport_destroy_data_ex(
    SensorData *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SensorDataPluginSupport_destroy_data(
    SensorData *sample);

NDDSUSERDllExport extern void 
SensorDataPluginSupport_print_data(
    const SensorData *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SensorDataPlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SensorDataPlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
SensorDataPlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SensorDataPlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
SensorDataPlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorData *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
SensorDataPlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorData *out,
    const SensorData *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SensorDataPlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SensorData *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SensorDataPlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorData *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SensorDataPlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const SensorData *sample,
    dds::core::policy::DataRepresentationId representation
    = dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
SensorDataPlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SensorData **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SensorDataPlugin_deserialize_from_cdr_buffer(
    SensorData *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
SensorDataPlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SensorDataPlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);   

NDDSUSERDllExport extern unsigned int 
SensorDataPlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SensorDataPlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SensorDataPlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SensorData * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
SensorDataPlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SensorDataPlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SensorDataPlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SensorDataPlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SensorDataPlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SensorData *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SensorDataPlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorData * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SensorDataPlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SensorData ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SensorDataPlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SensorData *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SensorDataPlugin_new(void);

NDDSUSERDllExport extern void
SensorDataPlugin_delete(struct PRESTypePlugin *);

#define SensorDataExamplePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define SensorDataExamplePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define SensorDataExamplePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define SensorDataExamplePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define SensorDataExamplePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern SensorDataExample*
SensorDataExamplePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern SensorDataExample*
SensorDataExamplePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern SensorDataExample*
SensorDataExamplePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
SensorDataExamplePluginSupport_copy_data(
    SensorDataExample *out,
    const SensorDataExample *in);

NDDSUSERDllExport extern void 
SensorDataExamplePluginSupport_destroy_data_w_params(
    SensorDataExample *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
SensorDataExamplePluginSupport_destroy_data_ex(
    SensorDataExample *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
SensorDataExamplePluginSupport_destroy_data(
    SensorDataExample *sample);

NDDSUSERDllExport extern void 
SensorDataExamplePluginSupport_print_data(
    const SensorDataExample *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
SensorDataExamplePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
SensorDataExamplePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
SensorDataExamplePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
SensorDataExamplePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
SensorDataExamplePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
SensorDataExamplePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample *out,
    const SensorDataExample *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool 
SensorDataExamplePlugin_serialize(
    PRESTypePluginEndpointData endpoint_data,
    const SensorDataExample *sample,
    struct RTICdrStream *stream, 
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SensorDataExamplePlugin_deserialize_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample *sample, 
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SensorDataExamplePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const SensorDataExample *sample,
    dds::core::policy::DataRepresentationId representation
    = dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
SensorDataExamplePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SensorDataExamplePlugin_deserialize_from_cdr_buffer(
    SensorDataExample *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern RTIBool
SensorDataExamplePlugin_skip(
    PRESTypePluginEndpointData endpoint_data,
    struct RTICdrStream *stream, 
    RTIBool skip_encapsulation,  
    RTIBool skip_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern unsigned int 
SensorDataExamplePlugin_get_serialized_sample_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);   

NDDSUSERDllExport extern unsigned int 
SensorDataExamplePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SensorDataExamplePlugin_get_serialized_sample_min_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int
SensorDataExamplePlugin_get_serialized_sample_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment,
    const SensorDataExample * sample);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
SensorDataExamplePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
SensorDataExamplePlugin_get_serialized_key_max_size_ex(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool * overflow,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SensorDataExamplePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
SensorDataExamplePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
SensorDataExamplePlugin_serialize_key(
    PRESTypePluginEndpointData endpoint_data,
    const SensorDataExample *sample,
    struct RTICdrStream *stream,
    RTIBool serialize_encapsulation,
    RTIEncapsulationId encapsulation_id,
    RTIBool serialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SensorDataExamplePlugin_deserialize_key_sample(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample * sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool 
SensorDataExamplePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
SensorDataExamplePlugin_serialized_sample_to_key(
    PRESTypePluginEndpointData endpoint_data,
    SensorDataExample *sample,
    struct RTICdrStream *stream, 
    RTIBool deserialize_encapsulation,  
    RTIBool deserialize_key, 
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
SensorDataExamplePlugin_new(void);

NDDSUSERDllExport extern void
SensorDataExamplePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* SensorDataExamplePlugin_229212648_h */

