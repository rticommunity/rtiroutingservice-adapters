

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransformedSensorDataExample.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "TransformedSensorDataExample.hpp"
#include "TransformedSensorDataExamplePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- TransformedSensorDataExample: 

TransformedSensorDataExample::TransformedSensorDataExample()  {
    rti::core::fill_array<uint32_t>( m_ID_, 0u);
    rti::core::fill_array<float>( m_reading_, 0.0f);
    rti::core::fill_array<bool>( m_active_, false);
}   

TransformedSensorDataExample::TransformedSensorDataExample (
    const dds::core::array<uint32_t, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& ID,
    const dds::core::array<float, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& reading,
    const dds::core::array<bool, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& active)
    :
        m_ID_( ID ),
        m_reading_( reading ),
        m_active_( active ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
TransformedSensorDataExample::TransformedSensorDataExample(TransformedSensorDataExample&& other_) OMG_NOEXCEPT  :m_ID_ (std::move(other_.m_ID_))
,
m_reading_ (std::move(other_.m_reading_))
,
m_active_ (std::move(other_.m_active_))
{
} 

TransformedSensorDataExample& TransformedSensorDataExample::operator=(TransformedSensorDataExample&&  other_) OMG_NOEXCEPT {
    TransformedSensorDataExample tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void TransformedSensorDataExample::swap(TransformedSensorDataExample& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_ID_, other_.m_ID_);
    swap(m_reading_, other_.m_reading_);
    swap(m_active_, other_.m_active_);
}  

bool TransformedSensorDataExample::operator == (const TransformedSensorDataExample& other_) const {
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
bool TransformedSensorDataExample::operator != (const TransformedSensorDataExample& other_) const {
    return !this->operator ==(other_);
}

// --- Getters and Setters: -------------------------------------------------
dds::core::array<uint32_t, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& TransformedSensorDataExample::ID() OMG_NOEXCEPT {
    return m_ID_;
}

const dds::core::array<uint32_t, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& TransformedSensorDataExample::ID() const OMG_NOEXCEPT {
    return m_ID_;
}

void TransformedSensorDataExample::ID(const dds::core::array<uint32_t, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& value) {
    m_ID_ = value;
}

dds::core::array<float, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& TransformedSensorDataExample::reading() OMG_NOEXCEPT {
    return m_reading_;
}

const dds::core::array<float, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& TransformedSensorDataExample::reading() const OMG_NOEXCEPT {
    return m_reading_;
}

void TransformedSensorDataExample::reading(const dds::core::array<float, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& value) {
    m_reading_ = value;
}

dds::core::array<bool, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& TransformedSensorDataExample::active() OMG_NOEXCEPT {
    return m_active_;
}

const dds::core::array<bool, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& TransformedSensorDataExample::active() const OMG_NOEXCEPT {
    return m_active_;
}

void TransformedSensorDataExample::active(const dds::core::array<bool, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& value) {
    m_active_ = value;
}

std::ostream& operator << (std::ostream& o,const TransformedSensorDataExample& sample)
{
    rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "ID: " << sample.ID()<<", ";
    o << "reading: " << sample.reading()<<", ";
    o << "active: " << sample.active() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        template<>
        struct native_type_code<TransformedSensorDataExample> {
            static DDS_TypeCode * get()
            {
                using namespace rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode TransformedSensorDataExample_g_tc_ID_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(TRANSFORMED_SENSOR_DATA_ARRAY_SIZE), NULL,NULL);
                static DDS_TypeCode TransformedSensorDataExample_g_tc_reading_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(TRANSFORMED_SENSOR_DATA_ARRAY_SIZE), NULL,NULL);
                static DDS_TypeCode TransformedSensorDataExample_g_tc_active_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,(TRANSFORMED_SENSOR_DATA_ARRAY_SIZE), NULL,NULL);
                static DDS_TypeCode_Member TransformedSensorDataExample_g_tc_members[3]=
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

                static DDS_TypeCode TransformedSensorDataExample_g_tc =
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
                        TransformedSensorDataExample_g_tc_members, /* Members */
                        DDS_VM_NONE , /* Ignored */         DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for TransformedSensorDataExample*/

                if (is_initialized) {
                    return &TransformedSensorDataExample_g_tc;
                }

                TransformedSensorDataExample_g_tc_ID_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_ulong;
                TransformedSensorDataExample_g_tc_reading_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_float;
                TransformedSensorDataExample_g_tc_active_array._data._typeCode =(RTICdrTypeCode *)&rti::topic::interpreter::initialize_bool_typecode();
                TransformedSensorDataExample_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& TransformedSensorDataExample_g_tc_ID_array;
                TransformedSensorDataExample_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& TransformedSensorDataExample_g_tc_reading_array;
                TransformedSensorDataExample_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& TransformedSensorDataExample_g_tc_active_array;

                TransformedSensorDataExample_g_tc._data._sampleAccessInfo = NULL;
                TransformedSensorDataExample_g_tc._data._typePlugin = NULL;

                is_initialized = RTI_TRUE;

                return &TransformedSensorDataExample_g_tc;
            }
        }; // native_type_code

        const dds::core::xtypes::StructType& dynamic_type<TransformedSensorDataExample>::get()
        {
            return static_cast<const dds::core::xtypes::StructType&>(
                rti::core::native_conversions::cast_from_native<dds::core::xtypes::DynamicType>(
                    *(native_type_code<TransformedSensorDataExample>::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support<TransformedSensorDataExample>:: register_type(
            dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            rti::domain::register_type_plugin(
                participant,
                type_name,
                TransformedSensorDataExamplePlugin_new,
                TransformedSensorDataExamplePlugin_delete);
        }

        std::vector<char>& topic_type_support<TransformedSensorDataExample>::to_cdr_buffer(
            std::vector<char>& buffer, 
            const TransformedSensorDataExample& sample,
            dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = TransformedSensorDataExamplePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = TransformedSensorDataExamplePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support<TransformedSensorDataExample>::from_cdr_buffer(TransformedSensorDataExample& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = TransformedSensorDataExamplePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create TransformedSensorDataExample from cdr buffer");
        }

        void topic_type_support<TransformedSensorDataExample>::reset_sample(TransformedSensorDataExample& sample) 
        {
            rti::topic::reset_sample(sample.ID());
            rti::topic::reset_sample(sample.reading());
            rti::topic::reset_sample(sample.active());
        }

        void topic_type_support<TransformedSensorDataExample>::allocate_sample(TransformedSensorDataExample& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample); // [[maybe_unused]]

            rti::topic::allocate_sample(sample.ID(),  -1, -1);
            rti::topic::allocate_sample(sample.reading(),  -1, -1);
            rti::topic::allocate_sample(sample.active(),  -1, -1);
        }

    }
}  

