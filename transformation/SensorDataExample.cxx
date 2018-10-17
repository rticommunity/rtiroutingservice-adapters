

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SensorDataExample.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "SensorDataExample.hpp"
#include "SensorDataExamplePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- SensorData: 

SensorData::SensorData() :
    m_ID_ (0u) ,
    m_reading_ (0.0f) ,
    m_active_ (false)  {
}   

SensorData::SensorData (
    uint32_t ID,
    float reading,
    bool active)
    :
        m_ID_( ID ),
        m_reading_( reading ),
        m_active_( active ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
SensorData::SensorData(SensorData&& other_) OMG_NOEXCEPT  :m_ID_ (std::move(other_.m_ID_))
,
m_reading_ (std::move(other_.m_reading_))
,
m_active_ (std::move(other_.m_active_))
{
} 

SensorData& SensorData::operator=(SensorData&&  other_) OMG_NOEXCEPT {
    SensorData tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void SensorData::swap(SensorData& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_ID_, other_.m_ID_);
    swap(m_reading_, other_.m_reading_);
    swap(m_active_, other_.m_active_);
}  

bool SensorData::operator == (const SensorData& other_) const {
    if (m_ID_ != other_.m_ID_) {
        return false;
    }
    if (m_reading_ != other_.m_reading_) {
        return false;
    }
    if (m_active_ != other_.m_active_) {
        return false;
    }
    return true;
}
bool SensorData::operator != (const SensorData& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
uint32_t& SensorData::ID() OMG_NOEXCEPT {
    return m_ID_;
}

const uint32_t& SensorData::ID() const OMG_NOEXCEPT {
    return m_ID_;
}

void SensorData::ID(uint32_t value) {
    m_ID_ = value;
}

float& SensorData::reading() OMG_NOEXCEPT {
    return m_reading_;
}

const float& SensorData::reading() const OMG_NOEXCEPT {
    return m_reading_;
}

void SensorData::reading(float value) {
    m_reading_ = value;
}

bool& SensorData::active() OMG_NOEXCEPT {
    return m_active_;
}

const bool& SensorData::active() const OMG_NOEXCEPT {
    return m_active_;
}

void SensorData::active(bool value) {
    m_active_ = value;
}

std::ostream& operator << (std::ostream& o,const SensorData& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "ID: " << sample.ID()<<", ";
    o << "reading: " << std::setprecision(9) <<sample.reading()<<", ";
    o << "active: " << sample.active() ;
    o <<"]";
    return o;
}

// ---- SensorDataExample: 

SensorDataExample::SensorDataExample()  {
}   

SensorDataExample::SensorDataExample (
    const dds::core::array<SensorData, (SENSOR_DATA_ARRAY_SIZE)>& sensors)
    :
        m_sensors_( sensors ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
SensorDataExample::SensorDataExample(SensorDataExample&& other_) OMG_NOEXCEPT  :m_sensors_ (std::move(other_.m_sensors_))
{
} 

SensorDataExample& SensorDataExample::operator=(SensorDataExample&&  other_) OMG_NOEXCEPT {
    SensorDataExample tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void SensorDataExample::swap(SensorDataExample& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_sensors_, other_.m_sensors_);
}  

bool SensorDataExample::operator == (const SensorDataExample& other_) const {
    if (m_sensors_ != other_.m_sensors_) {
        return false;
    }
    return true;
}
bool SensorDataExample::operator != (const SensorDataExample& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
dds::core::array<SensorData, (SENSOR_DATA_ARRAY_SIZE)>& SensorDataExample::sensors() OMG_NOEXCEPT {
    return m_sensors_;
}

const dds::core::array<SensorData, (SENSOR_DATA_ARRAY_SIZE)>& SensorDataExample::sensors() const OMG_NOEXCEPT {
    return m_sensors_;
}

void SensorDataExample::sensors(const dds::core::array<SensorData, (SENSOR_DATA_ARRAY_SIZE)>& value) {
    m_sensors_ = value;
}

std::ostream& operator << (std::ostream& o,const SensorDataExample& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "sensors: " << sample.sensors() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<SensorData> {
            static DDS_TypeCode * get()
            {
                using namespace rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SensorData_g_tc_members[3]=
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

                static DDS_TypeCode SensorData_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"SensorData", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        SensorData_g_tc_members, /* Members */
                        DDS_VM_NONE , /* Ignored */         DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SensorData*/

                if (is_initialized) {
                    return &SensorData_g_tc;
                }

                SensorData_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                SensorData_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;
                SensorData_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&rti::topic::interpreter::initialize_bool_typecode();

                SensorData_g_tc._data._sampleAccessInfo = NULL;
                SensorData_g_tc._data._typePlugin = NULL;

                is_initialized = RTI_TRUE;

                return &SensorData_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<SensorData>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<SensorData>::get())));
        }

        template<>
        struct native_type_code<SensorDataExample> {
            static DDS_TypeCode * get()
            {
                using namespace rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SensorDataExample_g_tc_sensors_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(SENSOR_DATA_ARRAY_SIZE), NULL,NULL);
                static DDS_TypeCode_Member SensorDataExample_g_tc_members[1]=
                {

                    {
                        (char *)"sensors",/* Member name */
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
                    }
                };

                static DDS_TypeCode SensorDataExample_g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"SensorDataExample", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SensorDataExample_g_tc_members, /* Members */
                        DDS_VM_NONE , /* Ignored */         DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for SensorDataExample*/

                if (is_initialized) {
                    return &SensorDataExample_g_tc;
                }

                SensorDataExample_g_tc_sensors_array._data._typeCode =(RTICdrTypeCode *)&rti::topic::dynamic_type< SensorData>::get().native();
                SensorDataExample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& SensorDataExample_g_tc_sensors_array;

                SensorDataExample_g_tc._data._sampleAccessInfo = NULL;
                SensorDataExample_g_tc._data._typePlugin = NULL;

                is_initialized = RTI_TRUE;

                return &SensorDataExample_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<SensorDataExample>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<SensorDataExample>::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support<SensorData>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                SensorDataPlugin_new,
                SensorDataPlugin_delete);
        }

        std::vector<char>& topic_type_support<SensorData>::to_cdr_buffer(
            std::vector<char>& buffer, 
            const SensorData& sample,
            dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SensorDataPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SensorDataPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<SensorData>::from_cdr_buffer(SensorData& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SensorDataPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create SensorData from cdr buffer");
        }

        void topic_type_support<SensorData>::reset_sample(SensorData& sample) 
        {
            rti::topic::reset_sample(sample.ID());
            rti::topic::reset_sample(sample.reading());
            rti::topic::reset_sample(sample.active());
        }

        void topic_type_support<SensorData>::allocate_sample(SensorData& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

        }

        void topic_type_support<SensorDataExample>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                SensorDataExamplePlugin_new,
                SensorDataExamplePlugin_delete);
        }

        std::vector<char>& topic_type_support<SensorDataExample>::to_cdr_buffer(
            std::vector<char>& buffer, 
            const SensorDataExample& sample,
            dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = SensorDataExamplePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = SensorDataExamplePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<SensorDataExample>::from_cdr_buffer(SensorDataExample& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = SensorDataExamplePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create SensorDataExample from cdr buffer");
        }

        void topic_type_support<SensorDataExample>::reset_sample(SensorDataExample& sample) 
        {
            rti::topic::reset_sample(sample.sensors());
        }

        void topic_type_support<SensorDataExample>::allocate_sample(SensorDataExample& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            rti::topic::allocate_sample(sample.sensors(),  -1, -1);
        }

    }
}  

