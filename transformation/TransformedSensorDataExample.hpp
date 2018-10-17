

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransformedSensorDataExample.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TransformedSensorDataExample_1057072684_hpp
#define TransformedSensorDataExample_1057072684_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

static const int32_t TRANSFORMED_SENSOR_DATA_ARRAY_SIZE = 64;

class NDDSUSERDllExport TransformedSensorDataExample {
  public:
    TransformedSensorDataExample();
    TransformedSensorDataExample(
        const dds::core::array<uint32_t, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& ID,
        const dds::core::array<float, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& reading,
        const dds::core::array<bool, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& active);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    TransformedSensorDataExample (TransformedSensorDataExample&&) = default;
    TransformedSensorDataExample& operator=(TransformedSensorDataExample&&) = default;
    TransformedSensorDataExample& operator=(const TransformedSensorDataExample&) = default;
    TransformedSensorDataExample(const TransformedSensorDataExample&) = default;
    #else
    TransformedSensorDataExample(TransformedSensorDataExample&& other_) OMG_NOEXCEPT;  
    TransformedSensorDataExample& operator=(TransformedSensorDataExample&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    dds::core::array<uint32_t, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& ID() OMG_NOEXCEPT; 
    const dds::core::array<uint32_t, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& ID() const OMG_NOEXCEPT;
    void ID(const dds::core::array<uint32_t, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& value);

    dds::core::array<float, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& reading() OMG_NOEXCEPT; 
    const dds::core::array<float, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& reading() const OMG_NOEXCEPT;
    void reading(const dds::core::array<float, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& value);

    dds::core::array<bool, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& active() OMG_NOEXCEPT; 
    const dds::core::array<bool, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& active() const OMG_NOEXCEPT;
    void active(const dds::core::array<bool, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)>& value);

    bool operator == (const TransformedSensorDataExample& other_) const;
    bool operator != (const TransformedSensorDataExample& other_) const;

    void swap(TransformedSensorDataExample& other_) OMG_NOEXCEPT ;

  private:

    dds::core::array<uint32_t, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)> m_ID_;
    dds::core::array<float, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)> m_reading_;
    dds::core::array<bool, (TRANSFORMED_SENSOR_DATA_ARRAY_SIZE)> m_active_;

};

inline void swap(TransformedSensorDataExample& a, TransformedSensorDataExample& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const TransformedSensorDataExample& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name<TransformedSensorDataExample> {
            NDDSUSERDllExport static std::string value() {
                return "TransformedSensorDataExample";
            }
        };

        template<>
        struct is_topic_type<TransformedSensorDataExample> : public dds::core::true_type {};

        template<>
        struct topic_type_support<TransformedSensorDataExample> {
            NDDSUSERDllExport 
            static void register_type(
                dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const TransformedSensorDataExample& sample,
                dds::core::policy::DataRepresentationId representation 
                = dds::core::policy::DataRepresentation::xcdr());

            NDDSUSERDllExport 
            static void from_cdr_buffer(TransformedSensorDataExample& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(TransformedSensorDataExample& sample);

            NDDSUSERDllExport 
            static void allocate_sample(TransformedSensorDataExample& sample, int, int);

            static const rti::topic::TypePluginKind::type type_plugin_kind = 
            rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {

        template<>
        struct dynamic_type<TransformedSensorDataExample> {
            typedef dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const dds::core::xtypes::StructType& get();
        };

        template <>
        struct extensibility<TransformedSensorDataExample> {
            static const dds::core::xtypes::ExtensibilityKind::type kind =
            dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // TransformedSensorDataExample_1057072684_hpp

